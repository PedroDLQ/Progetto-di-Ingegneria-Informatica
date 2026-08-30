extends Node2D

# Board Colors
const BOARD_BG_COLOR = Color("#3e2723")       # Dark wooden frame/background
const FIELD_BG_COLOR = Color("#5d4037")       # Inner playing field background
const POINT_COLOR_DARK = Color("#8d6e63")     # Dark points
const POINT_COLOR_LIGHT = Color("#d7ccc8")    # Light points
const BAR_COLOR = Color("#271c19")            # Middle bar separator

# Board Dimensions (Adjustable to fit your resolution)
@export var board_width: float = 800.0
@export var board_height: float = 500.0
@export var bar_width: float = 40.0

# Checker Config
const WHITE_CHECKER_COLOR = Color("#f0f0f0")
const BLACK_CHECKER_COLOR = Color("#1a1a1a")
const CHECKER_BORDER_COLOR = Color("#000000")

# 1-indexed state representation (standard Backgammon numbering: 1-24)
# Positive numbers = White checkers, Negative numbers = Black checkers
var board_state: Array = Array()

# Interaction & Dragging State
var selected_point: int = -1
var is_dragging: bool = false
var drag_position: Vector2 = Vector2.ZERO
var dragged_is_white: bool = true
#var library = RLCLib.new()
var bridge: Object = null

func _ready():
	position = Vector2(176, 80)
	
	# Instantiate dynamically from your compiled libbackgammon.so
	if ClassDB.class_exists(&"BackgammonBridge"):
		bridge = ClassDB.instantiate(&"BackgammonBridge")
		add_child(bridge)
		print("--- C++ BACKGAMMON BRIDGE CONNECTED ---")
	else:
		printerr("ERROR: 'BackgammonBridge' not found in ClassDB. Ensure backgammon.gdextension points to libbackgammon.so!")

	queue_redraw()

func _process(_delta):
	if Input.is_mouse_button_pressed(MOUSE_BUTTON_LEFT):
		print("RAW OS MOUSE CLICK AT: ", get_global_mouse_position())

func _setup_initial_board():
	board_state.fill(0)
	# White checkers (+)
	board_state[1] = 2
	board_state[12] = 5
	board_state[17] = 3
	board_state[19] = 5
	
	# Black checkers (-)
	board_state[24] = -2
	board_state[13] = -5
	board_state[8] = -3
	board_state[6] = -5

func _draw():
	# 1. Draw Board Frame Background
	draw_rect(Rect2(Vector2.ZERO, Vector2(board_width, board_height)), BOARD_BG_COLOR)
	
	# Playing dimensions inside border padding
	var padding = 10.0
	var inner_x = padding
	var inner_y = padding
	var inner_w = board_width - (padding * 2)
	var inner_h = board_height - (padding * 2)
	
	# Draw Inner Playfield
	draw_rect(Rect2(Vector2(inner_x, inner_y), Vector2(inner_w, inner_h)), FIELD_BG_COLOR)
	
	# Calculate dimensions for points
	var play_width_half = (inner_w - bar_width) / 2.0
	var point_width = play_width_half / 6.0
	var point_height = inner_h * 0.42 # Triangle height (~42% of board height)
	
	# 2. Draw Middle Bar
	var bar_x = inner_x + play_width_half
	draw_rect(Rect2(Vector2(bar_x, inner_y), Vector2(bar_width, inner_h)), BAR_COLOR)
	
	# 3. Draw Points (1 to 24)
	# Bottom Points (1 to 12)
	for i in range(12):
		var is_light = (i % 2 == 0)
		var color = POINT_COLOR_LIGHT if is_light else POINT_COLOR_DARK
		
		var x_offset = inner_x + (i * point_width)
		if i >= 6:
			x_offset += bar_width
			
		var base_left = Vector2(x_offset, inner_y + inner_h)
		var base_right = Vector2(x_offset + point_width, inner_y + inner_h)
		var tip = Vector2(x_offset + (point_width / 2.0), inner_y + inner_h - point_height)
		
		draw_polygon(PackedVector2Array([base_left, base_right, tip]), PackedColorArray([color, color, color]))

	# Top Points (13 to 24)
	for i in range(12):
		var is_light = (i % 2 != 0)
		var color = POINT_COLOR_LIGHT if is_light else POINT_COLOR_DARK
		
		var x_offset = inner_x + (i * point_width)
		if i >= 6:
			x_offset += bar_width
			
		var base_left = Vector2(x_offset, inner_y)
		var base_right = Vector2(x_offset + point_width, inner_y)
		var tip = Vector2(x_offset + (point_width / 2.0), inner_y + point_height)
		
		draw_polygon(PackedVector2Array([base_left, base_right, tip]), PackedColorArray([color, color, color]))

	# --- C++ BRIDGE GUARD ---
	if bridge == null:
		return # Renders empty board safely while troubleshooting GDExtension
		
	# Assign to existing class variable (removes SHADOWED_VARIABLE error)
	board_state = bridge.get_board_state()
		
	# 4. Draw Checkers on Points 1 through 24
	var radius = point_width / 2.0
	for point_num in range(1, 25):
		var count = board_state[point_num]
		if count != 0:
			var is_white = count > 0
			var num_checkers = abs(count)
			for stack_i in range(num_checkers):
				var pos = get_checker_position(point_num, stack_i, point_width, point_height, inner_x, inner_y, inner_w, inner_h)
				_draw_checker(pos, radius, is_white)
	
	# 5. Draw currently dragged checker
	if is_dragging:
		var checker_radius = point_width / 2.0
		_draw_checker(drag_position, checker_radius, dragged_is_white)

# Calculates the center position for a checker on a given point and stack index
func get_checker_position(point_num: int, stack_index: int, point_width: float, point_height: float, inner_x: float, inner_y: float, inner_w: float, inner_h: float) -> Vector2:
	var _play_width_half = (inner_w - bar_width) / 2.0
	var radius = point_width / 2.0
	var checker_spacing = min(radius * 1.8, point_height / 5.0) # Scale overlap if stacked high
	
	var is_bottom = (point_num >= 1 and point_num <= 12)
	var col_index = (12 - point_num) if is_bottom else (point_num - 13)
	
	var x_pos = inner_x + (col_index * point_width) + radius
	if col_index >= 6:
		x_pos += bar_width
		
	var y_pos: float
	if is_bottom:
		y_pos = (inner_y + inner_h) - radius - (stack_index * checker_spacing)
	else:
		y_pos = (inner_y) + radius + (stack_index * checker_spacing)
		
	return Vector2(x_pos, y_pos)

func _draw_checker(pos: Vector2, radius: float, is_white: bool):
	var fill_color = WHITE_CHECKER_COLOR if is_white else BLACK_CHECKER_COLOR
	# Outer border ring for visibility
	draw_circle(pos, radius, CHECKER_BORDER_COLOR)
	# Main checker body
	draw_circle(pos, radius - 2.0, fill_color)
	# Inner decorative ring
	draw_arc(pos, radius * 0.5, 0, TAU, 16, CHECKER_BORDER_COLOR, 1.5)
	
# Determines which point (1..24) contains local mouse coordinates (returns -1 if outside points)
func get_point_at_position(pos: Vector2) -> int:
	var padding = 10.0
	var inner_x = padding
	var inner_y = padding
	var inner_w = board_width - (padding * 2)
	var inner_h = board_height - (padding * 2)
	
	var play_width_half = (inner_w - bar_width) / 2.0
	var point_width = play_width_half / 6.0
	
	# Check if click Y is within playing field
	if pos.y < inner_y or pos.y > inner_y + inner_h:
		return -1
		
	var is_bottom = pos.y > (inner_y + inner_h / 2.0)
	
	# Calculate column index (0..11) left-to-right
	var relative_x = pos.x - inner_x
	if relative_x < 0 or relative_x > inner_w:
		return -1
		
	# Adjust for center bar gap
	if relative_x >= play_width_half and relative_x < play_width_half + bar_width:
		return -1 # Clicked on the central bar
	elif relative_x >= play_width_half + bar_width:
		relative_x -= bar_width
		
	var col_index = int(relative_x / point_width)
	col_index = clamp(col_index, 0, 11)
	
	# Convert column index + top/bottom half to point number (1..24)
	if is_bottom:
		return 12 - col_index
	else:
		return 13 + col_index
	
func _input(event: InputEvent):
	if event is InputEventMouseMotion and is_dragging:
		drag_position = get_local_mouse_position()
		queue_redraw()
		
	elif event is InputEventMouseButton and event.button_index == MOUSE_BUTTON_LEFT:
		var local_mouse = get_local_mouse_position()
		
		if event.pressed:
			var point_num = get_point_at_position(local_mouse)
			print("CLICK AT LOCAL: ", local_mouse, " | POINT: ", point_num)
			
			if point_num != -1 and board_state[point_num] != 0:
				selected_point = point_num
				dragged_is_white = (board_state[point_num] > 0)
				
				if dragged_is_white:
					board_state[point_num] -= 1
				else:
					board_state[point_num] += 1
					
				is_dragging = true
				drag_position = local_mouse
				queue_redraw()
				
		else:
			if is_dragging:
				var target_point = get_point_at_position(local_mouse)
				
				if target_point != -1:
					if dragged_is_white:
						board_state[target_point] += 1
					else:
						board_state[target_point] -= 1
					print("Moved checker from Point ", selected_point, " to Point ", target_point)
				else:
					if dragged_is_white:
						board_state[selected_point] += 1
					else:
						board_state[selected_point] -= 1
						
				is_dragging = false
				selected_point = -1
				queue_redraw()

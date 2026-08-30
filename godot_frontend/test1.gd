extends Node2D

@onready var bridge = $BackgammonBridge

# Turn label
var status_label: Label
var dice_label: Label

# Layout Configuration for 2D Rendering
const POINT_WIDTH = 40
const POINT_HEIGHT = 160
const CHECKER_RADIUS = 15
const BOARD_MARGIN = 50

var selected_point: int = -1

func _ready() -> void:
	var ui_container = VBoxContainer.new()
	ui_container.position = Vector2(BOARD_MARGIN, BOARD_MARGIN + (POINT_HEIGHT * 2) + 60)
	add_child(ui_container)
	
	status_label = Label.new()
	ui_container.add_child(status_label)
	
	dice_label = Label.new()
	ui_container.add_child(dice_label)
	
	print("Available methods on BackgammonBridge:")
	for method in $BackgammonBridge.get_method_list():
		print(" -> ", method["name"])

	# if bridge:
		# bridge.play()
	queue_redraw()

func _draw() -> void:
	if not bridge:
		return
		
	# 1. Draw Background Board
	draw_rect(Rect2(BOARD_MARGIN, BOARD_MARGIN, POINT_WIDTH * 13, POINT_HEIGHT * 2 + 40), Color.DARK_OLIVE_GREEN)
	# Draw Center Bar Splitter
	draw_rect(Rect2(BOARD_MARGIN + (POINT_WIDTH * 6), BOARD_MARGIN, POINT_WIDTH, POINT_HEIGHT * 2 + 40), Color.SADDLE_BROWN.darkened(0.4))

	# 2. Draw the 24 Triangles (Points)
	for i in range(24):
		var pos = _get_point_base_position(i)
		var is_top = (i >= 12)
		
		# Alternate triangle colors
		var tri_color = Color.ANTIQUE_WHITE if (i % 2 == 0) else Color.SIENNA
		if i == selected_point:
			tri_color = Color.YELLOW # Highlight selected source
			
		var points = PackedVector2Array()
		if is_top:
			points.append(pos) # Top-left
			points.append(pos + Vector2(POINT_WIDTH, 0)) # Top-right
			points.append(pos + Vector2(POINT_WIDTH / 2.0, POINT_HEIGHT)) # Tip pointing down
		else:
			points.append(pos + Vector2(0, POINT_HEIGHT)) # Bottom-left
			points.append(pos + Vector2(POINT_WIDTH, POINT_HEIGHT)) # Bottom-right
			points.append(pos + Vector2(POINT_WIDTH / 2.0, 0)) # Tip pointing up
			
		draw_primitive(points, PackedColorArray([tri_color]), PackedVector2Array())

		# 3. Draw Checkers on this point
		var count = bridge.get_board_point_count(i)
		var point_owner = bridge.get_board_point_owner(i)

		for c in range(count):
			var checker_color = Color.WHITE if point_owner == 0 else Color.BLACK
			var center_x = pos.x + (POINT_WIDTH / 2.0)
			var center_y = pos.y + (c * CHECKER_RADIUS * 2) + CHECKER_RADIUS if is_top else pos.y + POINT_HEIGHT - (c * CHECKER_RADIUS * 2) - CHECKER_RADIUS
			
			draw_circle(Vector2(center_x, center_y), CHECKER_RADIUS, checker_color)
			draw_circle(Vector2(center_x, center_y), CHECKER_RADIUS - 3, checker_color.darkened(0.3)) # Inner ring detail

	# 4. Draw Captured Checkers on the Center Bar
	_draw_bar_checkers(0, Color.WHITE)
	_draw_bar_checkers(1, Color.BLACK)
	
	# Update our test labels with real-time C++ rulebook states
	if status_label and dice_label:
		var current_p = bridge.get_current_player()
		var player_name = "White (Player 0)" if current_p == 0 else "Black (Player 1)"
		
		status_label.text = "Current Turn: " + player_name
		if selected_point != -1:
			status_label.text += " | Selected Point: " + str(selected_point)
			
		var active_dice = bridge.get_remaining_moves()
		dice_label.text = "Available Dice Moves: " + str(active_dice)

# Helper to map backgammon 0-23 points to screen pixels
func _get_point_base_position(idx: int) -> Vector2:
	var x_offset = idx if idx < 12 else (23 - idx)
	# Push points to the right of the center bar if they are past the halfway mark
	if x_offset >= 6:
		x_offset += 1
		
	var x = BOARD_MARGIN + (x_offset * POINT_WIDTH)
	var y = BOARD_MARGIN if idx >= 12 else BOARD_MARGIN + POINT_HEIGHT + 40
	return Vector2(x, y)

func _draw_bar_checkers(player_id: int, color: Color) -> void:
	var count = bridge.get_bar_count(player_id)
	var bar_x = BOARD_MARGIN + (POINT_WIDTH * 6) + (POINT_WIDTH / 2.0)
	var base_y = BOARD_MARGIN + 60 if player_id == 0 else BOARD_MARGIN + (POINT_HEIGHT * 2) - 20
	
	for c in range(count):
		var y_offset = base_y + (c * CHECKER_RADIUS * 1.5) if player_id == 0 else base_y - (c * CHECKER_RADIUS * 1.5)
		draw_circle(Vector2(bar_x, y_offset), CHECKER_RADIUS, color)

# Simple Input Detection to register clicks on points
func _unhandled_input(event: InputEvent) -> void:
	if event is InputEventMouseButton and event.pressed and event.button_index == MOUSE_BUTTON_LEFT:
		# Use get_local_mouse_position() to align with our _draw coordinates perfectly
		var click_pos = get_local_mouse_position()
		var clicked_idx = _determine_clicked_point(click_pos)
		
		if clicked_idx != -1:
			print("Valid Backgammon point clicked: Slot ", clicked_idx)
			_on_point_clicked(clicked_idx)
		else:
			print("Clicked outside of playable board points.")

func _determine_clicked_point(pos: Vector2) -> int:
	print("Clicked screen coordinate: ", pos) # Debug tracking helper
	
	for i in range(24):
		var base = _get_point_base_position(i)
		
		# Backgammon points are triangles. Let's create a solid bounding rectangle 
		# matching where the triangle is drawn on screen.
		var rect = Rect2(base.x, base.y, POINT_WIDTH, POINT_HEIGHT)
		
		if rect.has_point(pos):
			return i
			
	return -1

func _on_point_clicked(index: int) -> void:
	var current_player = bridge.get_current_player()
	var pt_count = bridge.get_board_point_count(index)
	var pt_owner = bridge.get_board_point_owner(index)
	
	print("DEBUG SELECTION -> Clicked point: ", index, " | Checkers: ", pt_count, " | Owner ID: ", pt_owner, " | Current Active Player: ", current_player)

	if selected_point == -1:
		# Check if point contains checkers and belongs to the active turn player
		if pt_count > 0 and pt_owner == current_player:
			selected_point = index
			print("SUCCESS: Point ", index, " selected as source piece!")
			queue_redraw()
		else:
			print("CANNOT SELECT: This point does not belong to you or is empty.")
	else:
		print("Attempting C++ move request from ", selected_point, " to ", index)
		var success = bridge.request_move(selected_point, index)
		if success:
			print("Rulebook ACCEPTED move from ", selected_point, " to ", index)
		else:
			print("Rulebook REJECTED move!")
			
		selected_point = -1
		queue_redraw()

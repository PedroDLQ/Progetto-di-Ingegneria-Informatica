extends Control

@onready var start_button: Button = $MarginContainer/HBoxContainer/StartButton

func _ready():
	start_button.pressed.connect(_on_start_pressed)

func _on_start_pressed():
	print("CLICK DETECTED!")

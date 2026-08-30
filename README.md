# Dual Games Project

This repository contains a small multi-part board-game project that combines rule definitions with a Godot-based frontend.

## Project overview

The project is organized into two main parts:

- `Rulebook/` — Python project containing game rule definitions and logic for the board games
- `godot_frontend/` — Godot 4 project that presents the game in a graphical interface

## Components

### Rulebook

The `Rulebook` folder contains the formal game rules and supporting files for the project, including:

- Backgammon rules and test definitions
- Go rules and related generated artifacts
- Python entry point and project metadata

The rule engine is intended to provide the underlying logical model for the board games, while the frontend renders and interacts with that state.

### Godot frontend

The `godot_frontend` folder contains a Godot project with scenes and scripts for the visual game interface.

This includes:

- board and UI scenes
- interaction scripts for game controls
- a Godot configuration project setup using `project.godot`
- bindings and native extensions for game logic integration

The Godot app acts as the visual layer of the project and is designed to work alongside the rule logic in `Rulebook`.

## Repository structure

```text
dual_games_project/
├── README.md
├── Rulebook/
│   ├── main.py
│   ├── pyproject.toml
│   ├── Backgammon/
│   └── Go/
├── godot_frontend/
│   ├── project.godot
│   ├── board_view.tscn
│   ├── main_ui.gd
│   └── ...
└── .git/
```

## Getting started

### 1. Rulebook / Python logic

```bash
cd /home/pedro/dual_games_project/Rulebook
uv sync
uv run python main.py
```

### 2. Godot frontend

Open the `godot_frontend` directory in Godot 4 and run the project from the editor.

## Notes

- The repository is intended to host both the logical game rules and the Godot interface in a single project.
- The Godot frontend and the Python rulebook are developed as complementary parts of the same game system.
- The project is currently under active development and may evolve as the gameplay and UI are expanded.

## License

This project is for academic and development purposes unless otherwise specified by the repository owner.

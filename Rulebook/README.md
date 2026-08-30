# Rulebook

A small Python project for the rulebook and game logic definitions used in the board-game project.

## Overview

This repository contains the rule specifications and supporting files for the project, including:

- Backgammon rule definitions and tests
- Go rule definitions and related generated artifacts
- Python entry point and project configuration

## Structure

- `main.py` – entry point
- `Backgammon/` – Backgammon rule source and tests
- `Go/` – Go rule source and generated binaries
- `pyproject.toml` – Python project metadata and dependencies

## Setup

This project uses Python 3.12+ and the `uv` package manager.

```bash
cd /home/pedro/dual_games_project/Rulebook
uv sync
uv run python main.py
```

## Notes

- The repository is configured to ignore Python caches and local virtual environments.
- Generated `.out` files are ignored unless they are intentionally versioned.
- Binary shared objects such as `.so` files remain tracked when required by the project.

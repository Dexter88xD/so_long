# so_long
`so_long` is a 2D game implemented in C using the MiniLibX graphics library. The game challenges the player to navigate a maze-like map, collect all required items, and reach the exit while avoiding obstacles. It includes both a standard version and an enhanced bonus version with additional gameplay mechanics.

---
## Table of Contents
- [Introduction](#introduction)
- [Requirements](#requirements)
- [Features](#features)
- [File Structure](#file-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Disclaimer](#work-in-progress)

---
## Introduction
The `so_long` project is a small 2D game written in C that utilizes the MiniLibX library for graphical rendering. The goal is to navigate the player through a maze while collecting all required items before reaching the exit. The game enforces constraints such as walls and enemies (in the bonus version), making the challenge more engaging.

---
## Requirements
To run `so_long`, you must be using a Linux system and have the necessary libraries installed for MinilibX. Ensure you have the following dependencies:

- `libXext` and `libX11`
- `minilibx-linux` installed in `/usr/include` under the name `minilibx-linux`
- A C compiler like `gcc`
- `make` for compiling the project

You can install the required libraries using:
```bash
sudo apt-get install libxext-dev libx11-dev
```

---
## Features
### **1. Core Gameplay**
- Navigate the player across a maze.
- Collect all collectibles before reaching the exit.
- Movement restricted by walls.
- Simple key inputs to control the player.

### **2. Enhanced Bonus Version**
- Enemy characters within the maze.
- Additional animations for smoother gameplay.
- More interactive map elements.

### **3. MiniLibX Integration**
- Uses `MiniLibX` for rendering.
- Efficient rendering of textures and sprites.
- Supports Linux systems.

---
## File Structure
```
Directory structure:
└── dexter88xd-so_long/
    ├── README.md
    ├── LICENSE
    ├── Makefile
    ├── assets/
    ├── include/
    │   └── libft/
    │       ├── Makefile
    │       ├── ft_atoi.c
    │       ├── ft_bzero.c
    │       ├── ft_calloc.c
    │       ├── ft_isalnum.c
    │       ├── ft_isalpha.c
    │       ├── ft_isascii.c
    │       ├── ft_isdigit.c
    │       ├── ft_isprint.c
    │       ├── ft_itoa.c
    │       ├── ft_lstadd_back_bonus.c
    │       ├── ft_lstadd_front_bonus.c
    │       ├── ft_lstclear_bonus.c
    │       ├── ft_lstdelone_bonus.c
    │       ├── ft_lstiter_bonus.c
    │       ├── ft_lstlast_bonus.c
    │       ├── ft_lstmap_bonus.c
    │       ├── ft_lstnew_bonus.c
    │       ├── ft_lstsize_bonus.c
    │       ├── ft_memchr.c
    │       ├── ft_memcmp.c
    │       ├── ft_memcpy.c
    │       ├── ft_memmove.c
    │       ├── ft_memset.c
    │       ├── ft_putchar_fd.c
    │       ├── ft_putendl_fd.c
    │       ├── ft_putnbr_fd.c
    │       ├── ft_putstr_fd.c
    │       ├── ft_split.c
    │       ├── ft_strchr.c
    │       ├── ft_strdup.c
    │       ├── ft_striteri.c
    │       ├── ft_strjoin.c
    │       ├── ft_strlcat.c
    │       ├── ft_strlcpy.c
    │       ├── ft_strlen.c
    │       ├── ft_strmapi.c
    │       ├── ft_strncmp.c
    │       ├── ft_strnstr.c
    │       ├── ft_strrchr.c
    │       ├── ft_strtrim.c
    │       ├── ft_substr.c
    │       ├── ft_tolower.c
    │       ├── ft_toupper.c
    │       ├── libft.h
    │       ├── ft_printf/
    │       │   ├── ft_printf.c
    │       │   └── ft_printf.h
    │       └── get_next_line/
    │           ├── get_next_line.c
    │           ├── get_next_line.h
    │           └── get_next_line_utils.c
    ├── maps/
    │   ├── 1337.ber
    │   ├── ber
    │   ├── empty_first_line.ber
    │   ├── empty_last_line.ber
    │   ├── map.ber
    │   ├── map1.ber
    │   ├── map2.ber
    │   ├── map3.ber
    │   ├── map4.ber
    │   ├── map5.ber
    │   ├── map6.ber
    │   ├── map7.ber
    │   ├── map_with_enemy.ber
    │   ├── no_collectible.ber
    │   ├── no_exit.ber
    │   ├── no_map.ber
    │   ├── no_path.ber
    │   ├── no_path_to_collectibles.ber
    │   ├── no_path_to_exit.ber
    │   ├── no_player.ber
    │   ├── no_walls.ber
    │   ├── not_rectangular.ber
    │   └── .ber
    └── src/
        ├── assign_path.c
        ├── assign_player_path.c
        ├── assign_player_pointer.c
        ├── assign_pointer.c
        ├── assigning_checking_pointers.c
        ├── capturing_keys.c
        ├── check_ber.c
        ├── checking_map.c
        ├── checking_player_pointers.c
        ├── checking_pointers.c
        ├── close_window.c
        ├── destroy_assets_nbr1.c
        ├── destroy_assets_nbr2.c
        ├── main.c
        ├── mapping.c
        ├── moving_player.c
        ├── moving_player_around_exit.c
        ├── putting_collectible.c
        ├── putting_left_player.c
        ├── putting_map.c
        ├── putting_right_player.c
        ├── putting_road.c
        ├── putting_wall.c
        ├── so_long.h
        └── bonus/
            ├── assig_point_enemy_paths_bonus.c
            ├── assign_collectible_path_f1234_bonus.c
            ├── assign_collectible_path_f5678_bonus.c
            ├── assign_enemy_path_f1_bonus.c
            ├── assign_enemy_path_f2_bonus.c
            ├── assign_enemy_path_f3_bonus.c
            ├── assign_enemy_path_f4_bonus.c
            ├── assign_enemy_pointer_bonus.c
            ├── assign_path_bonus.c
            ├── assign_player_path_f1_bonus.c
            ├── assign_player_path_f2_bonus.c
            ├── assign_player_path_f3_bonus.c
            ├── assign_player_path_f4_bonus.c
            ├── assign_player_pointer_bonus.c
            ├── assign_pointer_bonus.c
            ├── assigning_checking_pointers_bonus.c
            ├── capturing_keys_bonus.c
            ├── check_ber_bonus.c
            ├── checking_enemy_pointers_bonus.c
            ├── checking_key_pointers_bonus.c
            ├── checking_map_bonus.c
            ├── checking_player_pointers_bonus.c
            ├── checking_pointers_bonus.c
            ├── close_window_bonus.c
            ├── destroy_enemy_f1_bonus.c
            ├── destroy_enemy_f2_bonus.c
            ├── destroy_enemy_f3_bonus.c
            ├── destroy_enemy_f4_bonus.c
            ├── destroy_keys_1_bonus.c
            ├── destroy_keys_2_bonus.c
            ├── destroy_keys_3_bonus.c
            ├── destroy_keys_4_bonus.c
            ├── destroy_keys_5_bonus.c
            ├── destroy_keys_6_bonus.c
            ├── destroy_keys_7_bonus.c
            ├── destroy_keys_8_bonus.c
            ├── destroy_player_f1_bonus.c
            ├── destroy_player_f2_bonus.c
            ├── destroy_player_f3_bonus.c
            ├── destroy_player_f4_bonus.c
            ├── destroy_wall_road_bonus.c
            ├── display_exit_bonus.c
            ├── main_bonus.c
            ├── mapping_bonus.c
            ├── moving_player_around_exit_bonus.c
            ├── moving_player_bonus.c
            ├── moving_player_how_bonus.c
            ├── putting_animation_background_bonus.c
            ├── putting_collectible_bonus.c
            ├── putting_left_enemy_bonus.c
            ├── putting_left_player_bonus.c
            ├── putting_map_bonus.c
            ├── putting_right_enemy_bonus.c
            ├── putting_right_player_bonus.c
            ├── putting_road_bonus.c
            ├── putting_wall_bonus.c
            └── so_long_bonus.h
```

---
## Installation
### **Step 1: Clone the Repository**
```bash
  git clone https://github.com/Dexter88xD/so_long.git
  cd so_long
```

### **Step 2: Build the Game**
Use the `Makefile` to compile:
- Build the standard version:
  ```bash
  make
  ```
- Build the bonus version:
  ```bash
  make bonus
  ```
- Clean compiled files:
  ```bash
  make clean
  ```
- Remove all compiled files and executables (when finished):
  ```bash
  make fclean
  ```

---
## Usage
### **Running the Game**
To start the game, use:
```bash
./so_long maps/map.ber
```
For the bonus version:
```bash
./so_long_bonus maps/map.ber
```

There are multiple maps available in the `maps/` directory, each representing different cases you can play. Try different maps to experience varied challenges and scenarios!

### **Controls**
- `W / ↑`       - Move up
- `A / ←`       - Move left
- `S / ↓`       - Move down
- `D / →`       - Move right
- `ESC / Q`     - Exit the game
- `Mystry key`  - Easter egg :) 

---
## Contributing
Feel free to contribute by:
- Reporting bugs or suggesting enhancements via issues.
- Submitting pull requests with fixes or new features.

---
## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

### **Work in Progress**  
`so_long` is an ongoing project, and updates are continuously being made to improve functionality, performance, and gameplay. Please be aware that there may be issues with maps having bigger heights, potential leaks due to errors in asset paths, and other bugs. These issues are actively being worked on, with new features, bug fixes, and optimisations planned for future updates. Stay tuned, and feel free to share any feedback or suggestions to help enhance the project. If you encounter any problems, please be patient, and report them via the project's [issues page](https://github.com/Dexter88xD/so_long/issues). This disclaimer will be removed once the project reaches a stable release.

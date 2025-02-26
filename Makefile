# This is the brain of the whole operation.
# Let's get this ship going!

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(MINILIB) -I $(LIBFT)
LIB_FLAGS = -lXext -lX11 -L$(MINILIB) -lmlx_Linux -L$(LIBFT) -lft
RM = rm
RMF = rm -rf

MINILIB = /usr/include/minilibx-linux/
LIBFT = ./include/

MAKE_LIBFT = $(MAKE) -C $(LIBFT)
FCLEAN_LIBFT = $(MAKE) fclean -C $(LIBFT)

NAME = so_long
B_NAME = so_long_bonus

SRC_DIR = src
BONUS_DIR = bonus
OBJ_DIR = obj
BONUS_OBJ_DIR = bonus_obj

SRCS =  assigning_pointers.c            putting_collectible.c        assign_path.c \
        assign_player_path.c            close_window.c               putting_map.c \
        assign_player_pointer.c         destroy_assets_nbr1.c        putting_right_player.c \
        assign_pointer.c                destroy_assets_nbr2.c        putting_road.c \
        moving_player.c                 main.c                       putting_wall.c \
        capturing_keys.c                mapping.c                    checking_map.c \
        check_ber.c                     moving_player_around_exit.c  how_many_lines.c \
		putting_left_player.c

BSRCS =	assign_collectible_path_f1234_bonus.c  destroy_keys_1_bonus.c \
		assign_collectible_path_f5678_bonus.c  destroy_keys_2_bonus.c \
		assign_enemy_path_f1_bonus.c           destroy_keys_3_bonus.c \
		assign_enemy_path_f2_bonus.c           destroy_keys_4_bonus.c \
		assign_enemy_path_f3_bonus.c           destroy_keys_5_bonus.c \
		assign_enemy_path_f4_bonus.c           destroy_keys_6_bonus.c \
		assigning_pointers_bonus.c             destroy_keys_7_bonus.c \
		destroy_keys_8_bonus.c                 putting_collectible_bonus.c \
		assign_path_bonus.c                    destroy_player_f1_bonus.c \
		assign_player_path_f1_bonus.c          destroy_player_f2_bonus.c \
		assign_player_path_f2_bonus.c          destroy_player_f3_bonus.c \
		assign_player_path_f3_bonus.c          close_window_bonus.c \
		assign_player_path_f4_bonus.c          destroy_player_f4_bonus.c \
		assign_player_pointer_bonus.c          destroy_wall_road_bonus.c \
		assign_pointer_bonus.c                 main_bonus.c              \
		capturing_keys_bonus.c                 moving_player_around_exit_bonus.c \
		check_ber_bonus.c                      moving_player_bonus.c \
		checking_map_bonus.c                   putting_left_enemy_bonus.c \
		putting_left_player_bonus.c            putting_map_bonus.c \
		putting_right_enemy_bonus.c            destroy_enemy_f4_bonus.c \
		destroy_enemy_f1_bonus.c               putting_right_player_bonus.c \
		destroy_enemy_f2_bonus.c               putting_road_bonus.c \
		destroy_enemy_f3_bonus.c               putting_wall_bonus.c \
		mapping_bonus.c                        assign_enemy_pointer_bonus.c \
		assig_point_enemy_paths_bonus.c        moving_player_how_bonus.c \
		putting_animation_background_bonus.c   display_exit_bonus.c \
		how_many_lines_bonus.c 

MFILES = $(addprefix $(SRC_DIR)/, $(SRCS))
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(MFILES))

BFILES = $(addprefix $(BONUS_DIR)/, $(BSRCS))
BONUS_OBJECTS = $(patsubst $(BONUS_DIR)/%.c, $(BONUS_OBJ_DIR)/%.o, $(BFILES))

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)/libft.a 
	$(CC) -o $(NAME) $(OBJECTS) $(LIB_FLAGS)

bonus: $(B_NAME)

$(B_NAME): $(BONUS_OBJECTS) $(LIBFT)/libft.a
	$(CC) -o $(B_NAME) $(BONUS_OBJECTS) $(LIB_FLAGS)

$(LIBFT)/libft.a:
	$(MAKE_LIBFT)

$(OBJ_DIR)/%.o : 	$(SRC_DIR)/%.c
					@mkdir -p $(OBJ_DIR)
					$(CC) $(CFLAGS) -c $^ -o $@

$(BONUS_OBJ_DIR)/%.o :	$(BONUS_DIR)/%.c
					@mkdir -p $(BONUS_OBJ_DIR)
					$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(FCLEAN_LIBFT)
	$(RMF) $(OBJ_DIR) $(BONUS_OBJ_DIR)

fclean: clean
	$(RMF) $(NAME) $(B_NAME)

re: fclean all

.PHONY: all clean fclean re

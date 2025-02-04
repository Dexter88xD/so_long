# This is the brain of the whole operation.
# Let's get this ship going!

.PHONY: all clean fclean re a

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIB_FLAGS = -lXext -lX11

NAME = so_long

FILES = src/assigning_checking_pointers.c   src/checking_player_pointers.c   src/putting_collectible.c \
        src/assign_path.c                   src/checking_pointers.c          src/putting_left_player.c \
        src/assign_player_path.c            src/close_window.c               src/putting_map.c \
        src/assign_player_pointer.c         src/destroy_assets_nbr1.c        src/putting_right_player.c \
        src/assign_pointer.c                src/destroy_assets_nbr2.c        src/putting_road.c \
        src/moving_player.c                 src/main.c                       src/putting_wall.c \
        src/capturing_keys.c                src/mapping.c                    src/checking_map.c \
        src/check_ber.c                     src/moving_player_around_exit.c

BONUS = src/bonus/assign_collectible_path_f1234_bonus.c  src/bonus/destroy_keys_1_bonus.c \
        src/bonus/assign_collectible_path_f5678_bonus.c  src/bonus/destroy_keys_2_bonus.c \
        src/bonus/assign_enemy_path_f1_bonus.c           src/bonus/destroy_keys_3_bonus.c \
        src/bonus/assign_enemy_path_f2_bonus.c           src/bonus/destroy_keys_4_bonus.c \
        src/bonus/assign_enemy_path_f3_bonus.c           src/bonus/destroy_keys_5_bonus.c \
        src/bonus/assign_enemy_path_f4_bonus.c           src/bonus/destroy_keys_6_bonus.c \
        src/bonus/assigning_checking_pointers_bonus.c    src/bonus/destroy_keys_7_bonus.c \
        src/bonus/assign_key_pointer_bonus.c             src/bonus/destroy_keys_8_bonus.c \
        src/bonus/assign_path_bonus.c                    src/bonus/destroy_player_f1_bonus.c \
        src/bonus/assign_player_path_f1_bonus.c          src/bonus/destroy_player_f2_bonus.c \
        src/bonus/assign_player_path_f2_bonus.c          src/bonus/destroy_player_f3_bonus.c \
        src/bonus/assign_player_path_f4_bonus.c          src/bonus/destroy_player_f4_bonus.c \
        src/bonus/assign_player_pointer_bonus.c          src/bonus/destroy_wall_road_bonus.c \
        src/bonus/assign_pointer_bonus.c                 src/bonus/main_bonus.c              \
        src/bonus/capturing_keys_bonus.c                 src/bonus/moving_player_around_exit_bonus.c \
        src/bonus/check_ber_bonus.c                      src/bonus/moving_player_bonus.c \
        src/bonus/checking_key_pointers_bonus.c          src/bonus/putting_collectible_bonus.c \
        src/bonus/checking_map_bonus.c                   src/bonus/putting_left_enemy_bonus.c \
        src/bonus/checking_player_pointers_bonus.c       src/bonus/putting_left_player_bonus.c \
        src/bonus/checking_pointers_bonus.c              src/bonus/putting_map_bonus.c \
        src/bonus/close_window_bonus.c                   src/bonus/putting_right_enemy_bonus.c \
        src/bonus/destroy_enemy_f1_bonus.c               src/bonus/putting_right_player_bonus.c \
        src/bonus/destroy_enemy_f2_bonus.c               src/bonus/putting_road_bonus.c \
        src/bonus/destroy_enemy_f3_bonus.c               src/bonus/putting_wall_bonus.c \
        src/bonus/destroy_enemy_f4_bonus.c



OBJECTS = $(FILES:%.c=%.o)

BONUS_OBJECTS = $(BONUS:%.c=%.o)

LIBRARY = make -C lib/minilibx-linux

MAKE_FT_LIBC = make files -C include/ft_libc

FCLEAN_FT_LIBC = make fclean -C include/ft_libc

LIBFT_A = include/ft_libc/libft.a

MINILIB = lib/minilibx-linux/libmlx*

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT_A) $(MINILIB) 
	$(CC) $(CFLAGS) $(LIB_FLAGS) -o $(NAME) $^

bonus: $(BONUS_OBJECTS) $(LIBFT_A) $(MINILIB)
	$(CC) $(CFLAGS) $(LIB_FLAGS) -o $(NAME) $^

$(LIBFT_A):
	$(MAKE_FT_LIBC)

$(MINILIB):
	$(LIBRARY)

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(FCLEAN_FT_LIBC)
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean:
	$(FCLEAN_FT_LIBC)
	rm -f $(OBJECTS) $(NAME) $(BONUS_OBJECTS)

re: fclean all

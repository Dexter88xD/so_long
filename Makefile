# This is the brain of the whole operation.
# Let's get this ship going!

.PHONY: all clean fclean re a

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIB_FLAGS = -lXext -lX11

NAME = so_long

FILES = src/main.c src/mapping.c src/checking_map.c src/putting_map.c \
		src/assign_path.c src/assign_pointer.c \
		src/assign_player_path.c src/assign_player_pointer.c \
		src/checking_pointers.c src/checking_player_pointers.c \
		src/assigning_checking_pointers.c src/putting_wall.c \
		src/putting_road.c src/putting_right_player.c \
		src/putting_left_player.c src/putting_collectible.c \
		src/close_window.c src/destroy_assets_nbr1.c \
		src/destroy_assets_nbr2.c src/capturing_keys.c \
		src/moving_player.c src/moving_player_around_exit.c

BONUS = src/main.c src/bonus/mapping_bonus.c src/bonus/checking_map_bonus.c

OBJECTS = $(FILES:%.c=%.o)

LIBRARY = make -C lib/minilibx-linux

MAKE_FT_LIBC = make files -C include/ft_libc

FCLEAN_FT_LIBC = make fclean -C include/ft_libc

LIBFT_A = include/ft_libc/libft.a

MINILIB = lib/minilibx-linux/libmlx*

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT_A) $(MINILIB) 
	$(CC) $(CFLAGS) $(LIB_FLAGS) -o $(NAME) $^

$(LIBFT_A):
	$(MAKE_FT_LIBC)

$(MINILIB):
	$(LIBRARY)

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(FCLEAN_FT_LIBC)
	rm -f $(OBJECTS)

fclean:
	$(FCLEAN_FT_LIBC)
	rm -f $(OBJECTS) $(NAME)

re: fclean all

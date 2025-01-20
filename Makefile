# This is the brain of the whole operation.
# Let's get this ship going!

.PHONY: all clean fclean re a

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = src/so_long

FILES = src/main.c src/mapping.c src/checking_map.c

OBJECTS = $(FILES:%.c=%.o)

MAKE_FT_LIBC = make files -C include/ft_libc

FCLEAN_FT_LIBC = make fclean -C include/ft_libc

LIBFT_A = include/ft_libc/libft.a

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT_A)
	$(CC) $(CFLAGS) -o $(NAME) $^

$(LIBFT_A):
	$(MAKE_FT_LIBC)

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(FCLEAN_FT_LIBC)
	rm -f $(OBJECTS)

fclean:
	$(FCLEAN_FT_LIBC)
	rm -f $(OBJECTS) $(NAME)

re: fclean all

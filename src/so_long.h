/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:11:35 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 05:37:08 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# include "assets.h"
# include "../lib/minilibx-linux/mlx.h"
# include "../include/ft_libc/ft_printf/ft_printf.h"
# include "../include/ft_libc/get_next_line/get_next_line.h"

typedef struct s_num
{
	int	coll;
	int	exit;
}	t_num;

typedef struct s_location
{
	int	width;
	int	height;
}	t_location;

typedef struct s_map
{
	char		**buffer;
	int			height;
	int			width;
	int			collectible;
	int			exit;
	t_location	player;
}	t_map;

int		checking_map(t_map *map);
int		recopying_map(char *map_path, t_map *map);
int		initialise_nd_mapping(int fd, t_num *count, t_map *map, char *map_path);
int		mapping(int fd, t_num *count, t_map *map);
int		checking_wall(int x, int y, char **buffer);
int		checking_length(int y, int *x, char **buffer);
int		copying_map(int fd, int *height, char **buffer);
int		checking_path(t_map *map, t_num *count, int y, int x);
int		checking_char(int x, int y, char **buffer);
int		checking_collectibles(int x, int y, char **buffer);
int		checking_exit(int x, int y, char **buffer);
int		checking_player(int x, int y, t_location *location, char **buffer);
void	putting_map(t_map *map);
void	putting_images(char	**array, int rows, int cols, void *mlx_ptr);

#endif

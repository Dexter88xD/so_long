/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:11:35 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/18 21:23:17 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# include "../include/ft_libc/get_next_line/get_next_line.h"
# include "../include/ft_libc/ft_printf/ft_printf.h"

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
	t_location	exit;
	t_location	player;
}	t_map;

int	checking_map(t_map *map);
int	mapping(int fd, t_map *map);
int	checking_wall(int x, int y, char **buffer);
int	checking_length(int y, int *x, char **buffer);
int	copying_map(int fd, int *height, char **buffer);
int	checking_collectibles(int x, int y, char **buffer);
int	checking_exit(int x, int y, t_location *location, char **buffer);
int	checking_player(int x, int y, t_location *location, char **buffer);

#endif

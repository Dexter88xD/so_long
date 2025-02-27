/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:57 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/08 00:32:00 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	checking_path(t_map *map, t_num *count, int y, int x)
{
	if ((*map).buffer[y][x] == '1' || (*map).buffer[y][x] == 'X')
		return ((*count).coll);
	if ((*map).buffer[y][x] != '0' && (*map).buffer[y][x] != 'C'
		&& (*map).buffer[y][x] != 'E' && (*map).buffer[y][x] != 'P')
		return ((*count).coll);
	if ((*map).buffer[y][x] == 'C')
	{
		(*count).coll++;
		(*map).buffer[y][x] = 'c';
	}
	else if ((*map).buffer[y][x] == '0')
		(*map).buffer[y][x] = 'X';
	else if ((*map).buffer[y][x] == 'E')
	{
		(*map).buffer[y][x] = 'e';
		(*count).exit = 1;
	}
	checking_path(map, count, y, x + 1);
	checking_path(map, count, y, x - 1);
	checking_path(map, count, y + 1, x);
	checking_path(map, count, y - 1, x);
	return ((*count).coll);
}

int	checking_map(t_map *map)
{
	int	p;
	int	e;
	int	w;
	int	c;

	if (checking_char((*map).width, (*map).height, (*map).buffer) != 1)
		return (ft_printf("Error:\nThe Map contains invalid characters!\n"), 0);
	w = checking_wall((*map).width, (*map).height, (*map).buffer);
	if (w != 1)
		return (ft_printf("Error:\nThe map must be surrounded by walls!\n"), 0);
	p = checking_player((*map).width, (*map).height, &((*map).player),
			(*map).buffer);
	if (p != 1)
		return (ft_printf("Error:\nThe Map must contain one player!\n"), 0);
	e = checking_exit((*map).width, (*map).height, (*map).buffer);
	if (e != 1)
		return (ft_printf("Error:\nThe map must contain one exit!\n"), 0);
	else
		(*map).exit = e;
	c = checking_collectibles((*map).width, (*map).height, (*map).buffer);
	if (c == 0)
		return (ft_printf("Error:\n"),
			ft_printf("The map must contain multiple collectibles!\n"), 0);
	(*map).collectible = c;
	return (c);
}

int	checking_length(int y, int *x, char **buffer)
{
	int	width;
	int	height;

	width = 0;
	height = 0;
	while (buffer[height][width] != '\n' && buffer[height][width] != '\0')
		width++;
	height++;
	(*x) = width;
	while (height < y)
	{
		width = 0;
		while (buffer[height][width] != '\n' && buffer[height][width] != '\0')
			width++;
		if (width != (*x))
			return (ft_printf("Error:\nThe map must be rectangular"),
				ft_printf(" (Check if there are empty lines)!\n"), 0);
		height++;
	}
	return (1);
}

int	copying_map(int fd, int *height, char **buffer)
{
	char	*line;

	line = get_next_line(fd);
	buffer[(*height)] = line;
	while (buffer[(*height)] != NULL)
	{
		(*height)++;
		line = get_next_line(fd);
		buffer[(*height)] = line;
	}
	buffer[(*height)] = NULL;
	free(line);
	return (1);
}

int	mapping(int fd, t_num *count, t_map *map)
{
	int	check;

	check = copying_map(fd, &((*map).height), (*map).buffer);
	if (((*map).height) == 0 || check == 0)
		return (ft_printf("Error:\nEmpty map\n"), 0);
	check = checking_length(((*map).height), &((*map).width), (*map).buffer);
	if (((*map).width) == 0 || check == 0)
		return (0);
	check = checking_map(map);
	if (check == 0)
		return (0);
	(*count).coll = 0;
	checking_path(map, count, (*map).player.height, (*map).player.width);
	return ((*count).exit);
}

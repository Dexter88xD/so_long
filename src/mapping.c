/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:57 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/19 18:35:37 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checking_path(t_map *map, int *c, int *e, int y, int x)
{
	if ((*map).buffer[y][x] == '1' || (*map).buffer[y][x] == 'X')
		return (*c);
	if ((*map).buffer[y][x] != '0' && (*map).buffer[y][x] != 'C'
			&& (*map).buffer[y][x] != 'E' && (*map).buffer[y][x] != 'P')
		return (*c);
	if ((*map).buffer[y][x] == 'C')
	{
		(*c)++;
		(*map).buffer[y][x] = 'c';
	}
	else if ((*map).buffer[y][x] == '0')
		(*map).buffer[y][x] = 'X';
	else if ((*map).buffer[y][x] == 'E')
	{
		(*map).buffer[y][x] = 'e';
		*e = 1;
	}
	checking_path(map, c, e, y, x + 1);
	checking_path(map, c, e, y, x - 1);
	checking_path(map, c, e, y + 1, x);
	checking_path(map, c, e, y - 1, x);
	return (*c);
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
			return (0);
		height++;
	}
	return (1);
}

int	copying_map(int fd, int *height, char **buffer)
{
	buffer[(*height)] = get_next_line(fd);
	while (buffer[(*height)] != NULL)
	{
		(*height)++;
		buffer[(*height)] = get_next_line(fd);
	}
	return (1);
}

int	mapping(int fd, int *c, int *e ,t_map *map)
{
	int	check;

	copying_map(fd, &((*map).height), (*map).buffer);
	if (((*map).height) == 0)
		return (0);
	checking_length(((*map).height), &((*map).width), (*map).buffer);
	if (((*map).width) == 0)
		return (0);
	check = checking_map(map);
	if (check == 0)
		return (0);
	*c = 0;
	checking_path(map, c, e, (*map).player.height, (*map).player.width);
	if (*e != 1)
		return (0);
	return (*e);
}
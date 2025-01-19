/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:13:09 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/19 17:17:41 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checking_wall(int x, int y, char **buffer)
{
	int	width;
	int	height;

	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (width == 0 || width == x - 1 || height == 0 || height == y - 1)
			{
				if (buffer[height][width] != '1')
					return (0);
			}
			width++;
		}
		height++;
	}
	return (1);
}

int	checking_player(int x, int y, t_location *location, char **buffer)
{
	int	width;
	int	height;
	int	p;

	p = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] == 'P')
			{
				(*location).width = width;
				(*location).height = height;
				p++;
			}
			if (p > 1)
				return (0);
			width++;
		}
		height++;
	}
	return (p);
}

int	checking_exit(int x, int y, t_location *location, char **buffer)
{
	int	width;
	int	height;
	int	e;

	e = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] == 'E')
			{
				(*location).width = width;
				(*location).height = height;
				e++;
			}
			if (e > 1)
				return (0);
			width++;
		}
		height++;
	}
	return (e);
}

int	checking_collectibles(int x, int y, char **buffer)
{
	int	width;
	int	height;
	int	c;

	c = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] == 'C')
				c++;
			width++;
		}
		height++;
	}
	return (c);
}

int	checking_map(t_map *map)
{
	int	p;
	int	e;
	int	w;
	int	c;

	p = checking_player((*map).width, (*map).height,
			&((*map).player), (*map).buffer);
	if (p != 1)
		return (0);
	e = checking_exit((*map).width, (*map).height,
			&((*map).exit), (*map).buffer);
	if (e != 1)
		return (0);
	w = checking_wall((*map).width, (*map).height, (*map).buffer);
	if (w != 1)
		return (0);
	c = checking_collectibles((*map).width, (*map).height, (*map).buffer);
	if (c <= 0)
		return (0);
	(*map).collectible = c;
	return (c);
}

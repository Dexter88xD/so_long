/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:13:09 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 05:36:15 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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

int	checking_exit(int x, int y, char **buffer)
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
				e++;
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

int	checking_char(int x, int y, char **buffer)
{
	int	width;
	int	height;

	width = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] != 'E' && buffer[height][width] != 'C'
				&& buffer[height][width] != 'P' && buffer[height][width] != '1'
				&& buffer[height][width] != '0' && buffer[height][width] != 'N')
				return (0);
			width++;
		}
		height++;
	}
	return (1);
}

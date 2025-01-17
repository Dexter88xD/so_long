/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:57 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/17 09:26:50 by sohamdan         ###   ########.fr       */
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
				if (buffer[height][width] != 49)
					return (0);
			}
			width++;
		}
		height++;
	}
	return (1);
}

int	checking_length(int y, char **buffer)
{
	int	width;
	int	height;
	int	x;

	width = 0;
	height = 0;
	while (buffer[height][width] != '\n' && buffer[height][width] != '\0')
		width++;
	height++;
	x = width;
	while (height < y)
	{
		width = 0;
		while (buffer[height][width] != '\n' && buffer[height][width] != '\0')
			width++;
		if (width != x)
			return (0);
		height++;
	}
	return (x);
}
int	checking_map(int height, char **buffer)
{
	int	width;
	int	i;

	if (height == 0)
		return (0);
	width = checking_length(height, buffer);
	if (width == 0)
		return (0);
	i = checking_wall(width, height, buffer);
	if (i != 0)
		return (1);
	else
		return (0);
}

int	copying_map(int fd, char **buffer)
{
	int	height;

	height = 0;
	buffer[height] = get_next_line(fd);
	while (buffer[height] != NULL)
	{
		height++;
		buffer[height] = get_next_line(fd);
	}
	return (height);
}

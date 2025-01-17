/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:57 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/17 11:03:39 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

int	mapping(int fd, int *height, int *width, char **buffer)
{
	int	check;

	check = 0;
	copying_map(fd, height, buffer);
	if ((*height) == 0)
		return (check);
	checking_length((*height), width, buffer);
	if ((*width) == 0)
		return (check);
	check = checking_map(width, height, buffer);
	return (check);
}

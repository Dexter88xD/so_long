/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:57 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/16 19:34:57 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	copying_map(int fd, char **buffer)
{
	int	i;

	i = 0;
	buffer[i] = get_next_line(fd);
	while (buffer[i] != NULL)
	{
		i++;
		buffer[i] = get_next_line(fd);
	}
	return (i);
}

int	checking_length(int y, char **buffer)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	while (buffer[i][j] != '\n')
		j++;
	i++;
	l = j;
	while (y >= 0)
	{
		j = 0;
		while (buffer[i][j] != '\n' && buffer[i][j] != '\0')
			j++;
		if (j != l)
			return (0);
		y--;
	}
	return (l);
}

int	checking_wall(int x, int y, char **buffer)
{
	int	i;
	int	j;

	i = 0;
	while (i <= x)
	{
		j = 0;
		while (j <= y)
		{
			if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
			{
				if (buffer[i][j] != 49)
				{
					ft_printf("ahyaa!");
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	checking_map(int y, char **buffer)
{
	int	x;

	if (y == 0)
		return (0);
	x = checking_length(y, buffer);
	if (x == 0)
		return (0);
	ft_printf("x: %d, y: %d", x, y);
	x = checking_wall(x, y, buffer);
	if (x != 0)
		return(1);
	else
		return (0);
}

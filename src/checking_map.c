/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:13:09 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/17 21:17:06 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				location = 
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

int	checking_exit(int x, int y, int location, char **buffer)
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

int	checking_collectibles(int x, int y, int location, char **buffer)
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

int	checking_map(int *x, int *y, int *location, char **buffer)
{
	int	p;
	int	e;
	int	w;
	int	c;

	p = checking_player((*x), (*y), location, buffer);
	if (p != 1)
		return (0);
	e = checking_exit((*x), (*y), location, buffer);
	if (e != 1)
		return (0);
	w = checking_wall((*x), (*y), location, buffer);
	if (w != 1)
		return (0);
	c = checking_collectibles((*x), (*y), location, buffer);
	if (c <= 0)
		return (0);
	return (c);
}

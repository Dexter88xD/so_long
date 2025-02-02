/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:09:17 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/02 22:07:40 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	update_position_data(t_cleanup *all)
{
	all->data->len.i = all->map->player.height;
	all->data->len.j = all->map->player.width;
	all->data->len.a = all->map->player.height * 32;
	all->data->len.b = all->map->player.width * 32;
}

void	move_up(t_cleanup *all)
{
	int	i;
	int	j;

	i = all->map->player.height;
	j = all->map->player.width;
	if (all->map->buffer[i - 1][j] == '0' || all->map->buffer[i - 1][j] == 'P'
		|| all->map->buffer[i - 1][j] == 'C')
	{
		if (all->map->buffer[i - 1][j] == 'C')
		{
			all->map->buffer[i - 1][j] = '0';
			all->coll++;
		}
		update_position_data(all);
		is_it_road(all->map->buffer, all->data, *(all->mlx));
		all->map->player.height--;
		update_position_data(all);
		is_it_right_player(all->map->buffer, all->data, *(all->mlx));
	}
	else if (all->map->collectible == all->coll && all->map->buffer[i
			- 1][j] == 'E')
		close_window(all);
	all->move++;
}

void	move_down(t_cleanup *all)
{
	int	i;
	int	j;

	i = all->map->player.height;
	j = all->map->player.width;
	if (all->map->buffer[i + 1][j] == '0' || all->map->buffer[i + 1][j] == 'C'
		|| all->map->buffer[i + 1][j] == 'P')
	{
		if (all->map->buffer[i + 1][j] == 'C')
		{
			all->map->buffer[i + 1][j] = '0';
			all->coll++;
		}
		update_position_data(all);
		is_it_road(all->map->buffer, all->data, *(all->mlx));
		all->map->player.height++;
		update_position_data(all);
		is_it_right_player(all->map->buffer, all->data, *(all->mlx));
	}
	else if (all->map->collectible == all->coll && all->map->buffer[i
			+ 1][j] == 'E')
		close_window(all);
	all->move++;
}

void	move_left(t_cleanup *all)
{
	int	i;
	int	j;

	i = all->map->player.height;
	j = all->map->player.width;
	if (all->map->buffer[i][j - 1] == '0' || all->map->buffer[i][j - 1] == 'C'
		|| all->map->buffer[i][j - 1] == 'P')
	{
		if (all->map->buffer[i][j - 1] == 'C')
		{
			all->map->buffer[i][j - 1] = '0';
			all->coll++;
		}
		update_position_data(all);
		is_it_road(all->map->buffer, all->data, *(all->mlx));
		all->map->player.width--;
		update_position_data(all);
		is_it_left_player(all->map->buffer, all->data, *(all->mlx));
	}
	else if (all->map->collectible == all->coll && all->map->buffer[i][j
		- 1] == 'E')
		close_window(all);
	all->move++;
}

void	move_right(t_cleanup *all)
{
	int	i;
	int	j;

	i = all->map->player.height;
	j = all->map->player.width;
	if (all->map->buffer[i][j + 1] == '0' || all->map->buffer[i][j + 1] == 'C'
		|| all->map->buffer[i][j + 1] == 'P')
	{
		if (all->map->buffer[i][j + 1] == 'C')
		{
			all->map->buffer[i][j + 1] = '0';
			all->coll++;
		}
		update_position_data(all);
		is_it_road(all->map->buffer, all->data, *(all->mlx));
		all->map->player.width++;
		update_position_data(all);
		is_it_right_player(all->map->buffer, all->data, *(all->mlx));
	}
	else if (all->map->collectible == all->coll && all->map->buffer[i][j
		+ 1] == 'E')
		close_window(all);
	all->move++;
}

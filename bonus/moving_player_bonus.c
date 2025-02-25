/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_player_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:09:17 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 21:24:48 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	update_position_data(t_data *data, t_map *map)
{
	data->len.i = map->player.height;
	data->len.j = map->player.width;
	data->len.a = map->player.height * 32;
	data->len.b = map->player.width * 32;
}

void	move_up(t_cleanup *all)
{
	int			i;
	int			j;
	t_cleanup	*cleanup;

	cleanup = all;
	i = all->map->player.height;
	j = all->map->player.width;
	update_position_data(all->data, all->map);
	if (all->map->buffer[i - 1][j] == '0' || all->map->buffer[i - 1][j] == 'C'
		|| all->map->buffer[i - 1][j] == 'e')
		move_up_how(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i - 1][j] == 'E')
		move_up_exit(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i - 1][j] == 'N')
	{
		ft_printf("You lost!\n");
		close_window(cleanup);
	}
}

void	move_down(t_cleanup *all)
{
	int			i;
	int			j;
	t_cleanup	*cleanup;

	cleanup = all;
	i = all->map->player.height;
	j = all->map->player.width;
	update_position_data(all->data, all->map);
	if (all->map->buffer[i + 1][j] == '0' || all->map->buffer[i + 1][j] == 'C'
		|| all->map->buffer[i + 1][j] == 'e')
		move_down_how(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i + 1][j] == 'E')
		move_down_exit(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i + 1][j] == 'N')
	{
		ft_printf("You lost!\n");
		close_window(cleanup);
	}
}

void	move_left(t_cleanup *all)
{
	int			i;
	int			j;
	t_cleanup	*cleanup;

	cleanup = all;
	i = all->map->player.height;
	j = all->map->player.width;
	update_position_data(all->data, all->map);
	if (all->map->buffer[i][j - 1] == '0' || all->map->buffer[i][j - 1] == 'C'
		|| all->map->buffer[i][j - 1] == 'e')
		move_left_how(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i][j - 1] == 'E')
		move_left_exit(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i][j - 1] == 'N')
	{
		ft_printf("You lost!\n");
		close_window(cleanup);
	}
}

void	move_right(t_cleanup *all)
{
	int			i;
	int			j;
	t_cleanup	*cleanup;

	cleanup = all;
	i = all->map->player.height;
	j = all->map->player.width;
	update_position_data(all->data, all->map);
	if (all->map->buffer[i][j + 1] == '0' || all->map->buffer[i][j + 1] == 'C'
		|| all->map->buffer[i][j + 1] == 'e')
		move_right_how(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i][j + 1] == 'E')
		move_right_exit(all->map, all->mc, all->data, all->mlx);
	else if (all->map->buffer[i][j + 1] == 'N')
	{
		ft_printf("You lost!\n");
		close_window(cleanup);
	}
}

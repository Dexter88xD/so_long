/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_player_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:09:17 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 14:48:41 by sohamdan         ###   ########.fr       */
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

void	move_up(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	int (i), j;
	i = map->player.height;
	j = map->player.width;
	if (map->buffer[i - 1][j] == '0' || map->buffer[i - 1][j] == 'P'
		|| map->buffer[i - 1][j] == 'C')
	{
		if (map->buffer[i - 1][j] == 'C')
		{
			map->buffer[i - 1][j] = '0';
			mc->coll++;
		}
		update_position_data(data, map);
		if (map->buffer[i][j] == 'E')
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				data->pic.exit.middle.img, data->len.b, data->len.a);
		else
			is_it_road(map->buffer, data, *(mlx));
		map->player.height--;
		update_position_data(data, map);
		is_it_right_player(map->buffer, data, *(mlx));
		ft_printf("Move number: %d\n", ++mc->move);
	}
	else if (map->buffer[i - 1][j] == 'E')
		move_up_exit(map, mc, data, mlx);
}

void	move_down(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	int (i), j;
	i = map->player.height;
	j = map->player.width;
	if (map->buffer[i + 1][j] == '0' || map->buffer[i + 1][j] == 'C'
		|| map->buffer[i + 1][j] == 'P')
	{
		if (map->buffer[i + 1][j] == 'C')
		{
			map->buffer[i + 1][j] = '0';
			mc->coll++;
		}
		update_position_data(data, map);
		if (map->buffer[i][j] == 'E')
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				data->pic.exit.middle.img, data->len.b, data->len.a);
		else
			is_it_road(map->buffer, data, *(mlx));
		map->player.height++;
		update_position_data(data, map);
		is_it_right_player(map->buffer, data, *(mlx));
		ft_printf("Move number: %d\n", ++mc->move);
	}
	else if (map->buffer[i + 1][j] == 'E')
		move_down_exit(map, mc, data, mlx);
}

void	move_left(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	int (i), j;
	i = map->player.height;
	j = map->player.width;
	if (map->buffer[i][j - 1] == '0' || map->buffer[i][j - 1] == 'C'
		|| map->buffer[i][j - 1] == 'P')
	{
		if (map->buffer[i][j - 1] == 'C')
		{
			map->buffer[i][j - 1] = '0';
			mc->coll++;
		}
		update_position_data(data, map);
		if (map->buffer[i][j] == 'E')
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				data->pic.exit.middle.img, data->len.b, data->len.a);
		else
			is_it_road(map->buffer, data, *(mlx));
		map->player.width--;
		update_position_data(data, map);
		is_it_left_player(map->buffer, data, *(mlx));
		ft_printf("Move number: %d\n", ++mc->move);
	}
	else if (map->buffer[i][j - 1] == 'E')
		move_left_exit(map, mc, data, mlx);
}

void	move_right(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	int (i), j;
	i = map->player.height;
	j = map->player.width;
	if (map->buffer[i][j + 1] == '0' || map->buffer[i][j + 1] == 'C'
		|| map->buffer[i][j + 1] == 'P')
	{
		if (map->buffer[i][j + 1] == 'C')
		{
			map->buffer[i][j + 1] = '0';
			mc->coll++;
		}
		update_position_data(data, map);
		if (map->buffer[i][j] == 'E')
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				data->pic.exit.middle.img, data->len.b, data->len.a);
		else
			is_it_road(map->buffer, data, *(mlx));
		map->player.width++;
		update_position_data(data, map);
		is_it_right_player(map->buffer, data, *(mlx));
		ft_printf("Move number: %d\n", ++mc->move);
	}
	else if (map->buffer[i][j + 1] == 'E')
		move_right_exit(map, mc, data, mlx);
}

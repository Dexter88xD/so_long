/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_player_around_exit_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:09:17 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 13:36:26 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_up_exit(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	t_cleanup	all;

	ft_memset(&all, 0, sizeof(t_cleanup));
	if (map->collectible == mc->coll)
	{
		all.data = data;
		all.map = map;
		all.mlx = mlx;
		all.mc = mc;
		ft_printf("You won!\n");
		close_window(&all);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		map->buffer[map->player.height - 1][map->player.width] = 'e';
		is_it_road(map->buffer, data, *(mlx));
		map->player.height--;
		update_position_data(data, map);
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.p_right.f1.end.img, (*data).len.b, (*data).len.a);
		ft_printf("Move Number: %d\n", ++mc->move);
		putting_moves(mlx, mc, &data->pic);
	}
}

void	move_down_exit(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	t_cleanup	all;

	ft_memset(&all, 0, sizeof(t_cleanup));
	if (map->collectible == mc->coll)
	{
		all.data = data;
		all.map = map;
		all.mlx = mlx;
		all.mc = mc;
		ft_printf("You won!\n");
		close_window(&all);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		map->buffer[map->player.height + 1][map->player.width] = 'e';
		is_it_road(map->buffer, data, *(mlx));
		map->player.height++;
		update_position_data(data, map);
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.p_right.f1.end.img, (*data).len.b, (*data).len.a);
		ft_printf("Move Number: %d\n", ++mc->move);
		putting_moves(mlx, mc, &data->pic);
	}
}

void	move_left_exit(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	t_cleanup	all;

	ft_memset(&all, 0, sizeof(t_cleanup));
	if (map->collectible == mc->coll)
	{
		all.data = data;
		all.map = map;
		all.mlx = mlx;
		all.mc = mc;
		ft_printf("You won!\n");
		close_window(&all);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		map->buffer[map->player.height][map->player.width - 1] = 'e';
		is_it_road(map->buffer, data, *(mlx));
		map->player.width--;
		update_position_data(data, map);
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.p_left.f1.end.img, (*data).len.b, (*data).len.a);
		ft_printf("Move Number: %d\n", ++mc->move);
		putting_moves(mlx, mc, &data->pic);
	}
}

void	move_right_exit(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	t_cleanup	all;

	ft_memset(&all, 0, sizeof(t_cleanup));
	if (map->collectible == mc->coll)
	{
		all.data = data;
		all.map = map;
		all.mlx = mlx;
		all.mc = mc;
		ft_printf("You won!\n");
		close_window(&all);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		map->buffer[map->player.height][map->player.width + 1] = 'e';
		is_it_road(map->buffer, data, *(mlx));
		map->player.width++;
		update_position_data(data, map);
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.p_right.f1.end.img, (*data).len.b, (*data).len.a);
		ft_printf("Move Number: %d\n", ++mc->move);
		putting_moves(mlx, mc, &data->pic);
	}
}

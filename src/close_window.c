/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:42:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/02 11:19:22 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	start_destroying(t_ptr mlx, t_data *data)
{
	destroy_exit_side_wall_images(mlx, data);
	destroy_corner_wall_road_images(mlx, data);
	destroy_side_mid_road_images(mlx, data);
	destroy_player_r_images(mlx, data);
	destroy_player_l_images(mlx, data);
	destroy_key_images(mlx, data);
}

int	close_window(void *param)
{
	t_cleanup	*cleanup;
	t_ptr		*mlx;
	t_data		*data;
	t_map		*map;

	cleanup = (t_cleanup *)param;
	data = (*cleanup).data;
	mlx = (*cleanup).mlx;
	map = (*cleanup).map;
	start_destroying((*mlx), data);
	mlx_clear_window((*mlx).ptr, (*mlx).win);
	mlx_destroy_window((*mlx).ptr, (*mlx).win);
	mlx_destroy_display((*mlx).ptr);
	free((*mlx).ptr);
	buffer_freeing(map);
	ft_printf("closed!\n");
	exit(0);
	return (0);
}

int	move_up(t_cleanup *all)
{

	int	i, j, a, b;

	i = all->map->player.height;
	j = all->map->player.width;
	a = all->data->len.a;
	b = all->data->len.b;
	ft_printf("height: %d\n", all->map->height);
	ft_printf("width: %d\n", all->map->width);
	ft_printf("player's height position: %d\n", all->map->player.height);
	ft_printf("player's width position: %d\n", all->map->player.width);
	if (all->map->buffer[i - 1][j] == '0')
		{
			all->data->len.i = all->map->player.height;
			all->data->len.j = all->map->player.width;
			all->data->len.a = all->map->player.height * 32;
			all->data->len.b = all->map->player.width * 32;
			is_it_road(all->map->buffer, all->data, *(all->mlx));
			all->map->player.height--;
			all->data->len.i = all->map->player.height;
			all->data->len.j = all->map->player.width;
			all->data->len.a = all->map->player.height * 32;
			all->data->len.b = all->map->player.width * 32;
			is_it_right_player(all->map->buffer, all->data, *(all->mlx));
		}
	return (0);
}

int	what_key(int keycode, void *param)
{
	t_cleanup	*all;
	t_map		*map;

	all = (t_cleanup *)param;
	map = (*all).map;
	(*(*all).data).len.i = 0;
	(*(*all).data).len.j = 0;
	if (keycode == 65307)
		close_window(param);
	else if (keycode == XK_Up)
		move_up(all);
	return (0);
}

void	capture_keys(t_ptr *mlx, t_data *data, t_map *map, t_location *dim)
{
	t_cleanup	cleanup;

	cleanup.data = data;
	cleanup.mlx = mlx;
	cleanup.map = map;
	cleanup.dim  = dim;
	mlx_key_hook(mlx->win, what_key, &cleanup);
	mlx_hook((*mlx).win, 17, 0, close_window, &cleanup);
	//mlx_loop_hook(mlx->ptr, putting_to_images_to_window, &cleanup);
	mlx_loop((*mlx).ptr);
}

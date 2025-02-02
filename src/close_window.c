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

int	what_key(int keycode, void *param)
{
	t_cleanup	*all;
	t_map		*map;

	all = (t_cleanup *)param;
	map = (*all).map;
	if (keycode == 65307)
		close_window(param);
	return (0);
}

void	capture_keys(t_ptr *mlx, t_data *data, t_map *map)
{
	t_cleanup	cleanup;

	cleanup.data = data;
	cleanup.mlx = mlx;
	cleanup.map = map;
	mlx_key_hook(mlx->win, what_key, &cleanup);
	mlx_hook((*mlx).win, 17, 0, close_window, &cleanup);
	mlx_loop((*mlx).ptr);
}

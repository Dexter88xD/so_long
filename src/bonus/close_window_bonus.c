/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:42:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 14:56:42 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	start_destroying(t_ptr mlx, t_data *data)
{
	destroy_side_wall_images(mlx, data);
	destroy_exit_images(mlx, data);
	destroy_corner_wall_road_images(mlx, data);
	destroy_side_mid_road_images(mlx, data);
	destroy_player_r_images(mlx, data);
	destroy_player_l_images(mlx, data);
	destroy_enemy_r_images(mlx, data);
	destroy_enemy_l_images(mlx, data);
	destroy_key_images(mlx, data);
	destroy_moves_images(mlx, data);
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
	free(cleanup->mc);
	buffer_freeing(map);
	ft_printf("closed!\n");
	exit(0);
	return (0);
}

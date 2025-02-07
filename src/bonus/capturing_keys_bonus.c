/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capturing_keys_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:42:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 22:24:53 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	what_key(int keycode, void *param)
{
	t_cleanup	*all;
	t_map		*map;

	all = (t_cleanup *)param;
	map = (*all).map;
	all->data->len.i = 0;
	all->data->len.j = 0;
	if (keycode == XK_Escape || keycode == XK_Q || keycode == XK_q)
		close_window(param);
	else if (keycode == XK_Up || keycode == XK_W || keycode == XK_w)
		move_up(all);
	else if (keycode == XK_Down || keycode == XK_S || keycode == XK_s)
		move_down(all);
	else if (keycode == XK_Left || keycode == XK_A || keycode == XK_a)
		move_left(all);
	else if (keycode == XK_Right || keycode == XK_D || keycode == XK_d)
		move_right(all);
	else if (keycode == XK_B || keycode == XK_b)
	{
		mlx_string_put(all->mlx->ptr, all->mlx->win, all->data->size.width / 2,
			all->data->size.height / 2, 16777215, "BOOOOOO");
	}
	return (0);
}

int	capture_keys(t_ptr *mlx, t_data *data, t_map *map, t_location *dim)
{
	t_cleanup	cleanup;

	cleanup.data = data;
	cleanup.mlx = mlx;
	cleanup.map = map;
	cleanup.dim = dim;
	cleanup.key_frame = 0;
	cleanup.enemy_frame = 0;
	cleanup.exit_frame = 0;
	cleanup.mc = (t_move_coll *)malloc(sizeof(t_move_coll));
	if (!cleanup.mc)
		return (ft_printf("Memory allocation for mc failed!\n"), -1);
	cleanup.mc->coll = 0;
	cleanup.mc->move = 0;
	load_frames(&cleanup);
	mlx_loop_hook(mlx->ptr, animation_frames, &cleanup);
	mlx_hook(mlx->win, 2, 1L << 0, what_key, &cleanup);
	mlx_hook((*mlx).win, 17, 0, close_window, &cleanup);
	mlx_loop((*mlx).ptr);
	return (0);
}

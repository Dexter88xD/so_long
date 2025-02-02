/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capturing_keys.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:42:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/02 11:19:22 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	else if (keycode == XK_Down)
		move_down(all);
	else if (keycode == XK_Left)
		move_left(all);
	else if (keycode == XK_Right)
		move_right(all);
	ft_printf("move number: %d\n", all->move);
	return (0);
}

void	capture_keys(t_ptr *mlx, t_data *data, t_map *map, t_location *dim)
{
	t_cleanup	cleanup;

	cleanup.data = data;
	cleanup.mlx = mlx;
	cleanup.map = map;
	cleanup.dim = dim;
	cleanup.coll = 0;
	cleanup.move = 0;
	mlx_hook(mlx->win, 2, 1L << 0, what_key, &cleanup);
	mlx_hook((*mlx).win, 17, 0, close_window, &cleanup);
	mlx_loop((*mlx).ptr);
}

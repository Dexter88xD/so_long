/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:09:27 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/01 17:09:32 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_it_rest_wall(t_data *data, t_ptr mlx, t_location *dim)
{
	if (data->len.i == 0)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.one.img_u,
			data->len.b, data->len.a);
	else if (data->len.i == (*dim).height - 1)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.one.img_d,
			data->len.b, data->len.a);
	else if (data->len.j == 0)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.one.img_l,
			data->len.b, data->len.a);
	else if (data->len.j == (*dim).width - 1)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.one.img_r,
			data->len.b, data->len.a);
	else
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.middle.img,
			data->len.b, data->len.a);
}

void	is_it_wall(t_data *data, t_ptr mlx, t_location *dim)
{
	if (data->len.i == 0 && data->len.j == 0)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.cor.img_l_u,
			data->len.b, data->len.a);
	else if (data->len.i == 0 && data->len.j == (*dim).width - 1)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.cor.img_r_u,
			data->len.b, data->len.a);
	else if (data->len.i == (*dim).height - 1 && data->len.j == 0)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.cor.img_l_d,
			data->len.b, data->len.a);
	else if (data->len.i == (*dim).height - 1 && data->len.j == (*dim).width
		- 1)
		mlx_put_image_to_window(mlx.ptr, mlx.win, data->pic.wall.cor.img_r_d,
			data->len.b, data->len.a);
	else
		is_it_rest_wall(data, mlx, dim);
}

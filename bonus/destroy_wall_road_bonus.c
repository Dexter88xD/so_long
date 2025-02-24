/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_wall_road_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:45:49 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 15:07:49 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	destroy_side_mid_road_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.road.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.one.img_d);
	if ((*data).pic.road.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.one.img_l);
	if ((*data).pic.road.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.one.img_r);
	if ((*data).pic.road.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.one.img_u);
	if ((*data).pic.road.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.two.img_l_r);
	if ((*data).pic.road.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.two.img_u_d);
	if ((*data).pic.road.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.three.img_d);
	if ((*data).pic.road.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.three.img_l);
	if ((*data).pic.road.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.three.img_r);
	if ((*data).pic.road.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.three.img_u);
	if ((*data).pic.road.inside.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.inside.img);
	if ((*data).pic.road.inside.img_shad)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.inside.img_shad);
}

void	destroy_side_wall_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.wall.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.middle.img);
	if ((*data).pic.wall.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.one.img_d);
	if ((*data).pic.wall.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.one.img_l);
	if ((*data).pic.wall.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.one.img_r);
	if ((*data).pic.wall.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.one.img_u);
	if ((*data).pic.wall.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.two.img_l_r);
	if ((*data).pic.wall.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.two.img_u_d);
	if ((*data).pic.wall.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.three.img_l);
	if ((*data).pic.wall.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.three.img_d);
	if ((*data).pic.wall.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.three.img_r);
	if ((*data).pic.wall.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.three.img_u);
}

void	destroy_exit_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.exit.f1.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.exit.f1.middle.img);
	if ((*data).pic.exit.f2.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.exit.f2.middle.img);
	if ((*data).pic.exit.f3.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.exit.f3.middle.img);
	if ((*data).pic.exit.f4.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.exit.f4.middle.img);
	if ((*data).pic.exit.f4.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.exit.f5.middle.img);
}

void	destroy_corner_wall_road_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.wall.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.cor.img_l_d);
	if ((*data).pic.wall.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.cor.img_l_u);
	if ((*data).pic.wall.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.cor.img_r_d);
	if ((*data).pic.wall.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.wall.cor.img_r_u);
	if ((*data).pic.road.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.cor.img_l_d);
	if ((*data).pic.road.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.cor.img_l_u);
	if ((*data).pic.road.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.cor.img_r_d);
	if ((*data).pic.road.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.road.cor.img_r_u);
}

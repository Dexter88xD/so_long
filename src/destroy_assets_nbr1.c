/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_assets_nbr1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:45:49 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/02 11:45:50 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_rest_player_r_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.p_right.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.one.img_d);
	if ((*data).pic.p_right.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.one.img_l);
	if ((*data).pic.p_right.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.one.img_r);
	if ((*data).pic.p_right.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.one.img_u);
	if ((*data).pic.p_right.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.two.img_l_r);
	if ((*data).pic.p_right.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.two.img_u_d);
	if ((*data).pic.p_right.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.three.img_d);
	if ((*data).pic.p_right.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.three.img_l);
	if ((*data).pic.p_right.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.three.img_r);
	if ((*data).pic.p_right.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.three.img_u);
}

void	destroy_player_r_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.p_right.inside.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.inside.img);
	if ((*data).pic.p_right.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.cor.img_l_u);
	if ((*data).pic.p_right.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.cor.img_l_d);
	if ((*data).pic.p_right.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.cor.img_r_d);
	if ((*data).pic.p_right.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_right.cor.img_r_u);
	destroy_rest_player_r_images(mlx, data);
}

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

void	destroy_exit_side_wall_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.exit.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.exit.middle.img);
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

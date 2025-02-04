/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_enemy_f1_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:45:49 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 17:13:18 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	destroy_enemy_r_1_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.e_right.f1.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.one.img_d);
	if ((*data).pic.e_right.f1.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.one.img_l);
	if ((*data).pic.e_right.f1.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.one.img_r);
	if ((*data).pic.e_right.f1.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.one.img_u);
	if ((*data).pic.e_right.f1.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.two.img_l_r);
	if ((*data).pic.e_right.f1.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.two.img_u_d);
	if ((*data).pic.e_right.f1.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.three.img_d);
	if ((*data).pic.e_right.f1.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.three.img_l);
	if ((*data).pic.e_right.f1.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.three.img_r);
	if ((*data).pic.e_right.f1.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.three.img_u);
	destroy_enemy_r_2_images(mlx, data);
}

void	destroy_enemy_r_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.e_right.f1.inside.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.inside.img);
	if ((*data).pic.e_right.f1.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.cor.img_l_u);
	if ((*data).pic.e_right.f1.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.cor.img_l_d);
	if ((*data).pic.e_right.f1.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.cor.img_r_d);
	if ((*data).pic.e_right.f1.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.cor.img_r_u);
	if ((*data).pic.e_right.f1.end.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_right.f1.end.img);
	destroy_enemy_r_1_images(mlx, data);
}

void	destroy_enemy_l_1_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.e_left.f1.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.one.img_d);
	if ((*data).pic.e_left.f1.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.one.img_l);
	if ((*data).pic.e_left.f1.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.one.img_r);
	if ((*data).pic.e_left.f1.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.one.img_u);
	if ((*data).pic.e_left.f1.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.two.img_l_r);
	if ((*data).pic.e_left.f1.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.two.img_u_d);
	if ((*data).pic.e_left.f1.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.three.img_d);
	if ((*data).pic.e_left.f1.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.three.img_l);
	if ((*data).pic.e_left.f1.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.three.img_r);
	if ((*data).pic.e_left.f1.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.three.img_u);
	destroy_enemy_l_2_images(mlx, data);
}

void	destroy_enemy_l_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.e_left.f1.inside.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.inside.img);
	if ((*data).pic.e_left.f1.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.cor.img_l_u);
	if ((*data).pic.e_left.f1.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.cor.img_l_d);
	if ((*data).pic.e_left.f1.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.cor.img_r_d);
	if ((*data).pic.e_left.f1.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.cor.img_r_u);
	if ((*data).pic.e_left.f1.end.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.e_left.f1.end.img);
	destroy_enemy_l_1_images(mlx, data);
}

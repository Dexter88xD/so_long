/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_assets_nbr2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:45:49 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/02 11:45:50 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_rest_player_l_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.p_left.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.one.img_d);
	if ((*data).pic.p_left.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.one.img_l);
	if ((*data).pic.p_left.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.one.img_r);
	if ((*data).pic.p_left.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.one.img_u);
	if ((*data).pic.p_left.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.two.img_l_r);
	if ((*data).pic.p_left.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.two.img_u_d);
	if ((*data).pic.p_left.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.three.img_d);
	if ((*data).pic.p_left.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.three.img_l);
	if ((*data).pic.p_left.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.three.img_r);
	if ((*data).pic.p_left.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.three.img_u);
}

void	destroy_player_l_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.p_left.inside.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.inside.img);
	if ((*data).pic.p_left.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.cor.img_l_u);
	if ((*data).pic.p_left.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.cor.img_l_d);
	if ((*data).pic.p_left.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.cor.img_r_d);
	if ((*data).pic.p_left.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.cor.img_r_u);
	if ((*data).pic.p_left.end.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.p_left.end.img);
	destroy_rest_player_l_images(mlx, data);
}

void	destroy_rest_key_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.key.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.one.img_d);
	if ((*data).pic.key.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.one.img_l);
	if ((*data).pic.key.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.one.img_r);
	if ((*data).pic.key.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.one.img_u);
	if ((*data).pic.key.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.two.img_l_r);
	if ((*data).pic.key.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.two.img_u_d);
	if ((*data).pic.key.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.three.img_d);
	if ((*data).pic.key.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.three.img_l);
	if ((*data).pic.key.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.three.img_r);
	if ((*data).pic.key.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.three.img_u);
}

void	destroy_key_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.key.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.middle.img);
	if ((*data).pic.key.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.cor.img_l_d);
	if ((*data).pic.key.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.cor.img_l_u);
	if ((*data).pic.key.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.cor.img_r_d);
	if ((*data).pic.key.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.cor.img_r_u);
	destroy_rest_key_images(mlx, data);
}

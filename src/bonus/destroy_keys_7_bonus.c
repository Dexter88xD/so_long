/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_keys_7_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:45:49 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 17:37:01 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	destroy_key_13_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.key.f7.one.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.one.img_d);
	if ((*data).pic.key.f7.one.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.one.img_l);
	if ((*data).pic.key.f7.one.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.one.img_r);
	if ((*data).pic.key.f7.one.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.one.img_u);
	if ((*data).pic.key.f7.two.img_l_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.two.img_l_r);
	if ((*data).pic.key.f7.two.img_u_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.two.img_u_d);
	if ((*data).pic.key.f7.three.img_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.three.img_d);
	if ((*data).pic.key.f7.three.img_l)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.three.img_l);
	if ((*data).pic.key.f7.three.img_r)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.three.img_r);
	if ((*data).pic.key.f7.three.img_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.three.img_u);
	destroy_key_14_images(mlx, data);
}

void	destroy_key_12_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.key.f7.middle.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.middle.img);
	if ((*data).pic.key.f7.cor.img_l_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.cor.img_l_d);
	if ((*data).pic.key.f7.cor.img_l_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.cor.img_l_u);
	if ((*data).pic.key.f7.cor.img_r_d)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.cor.img_r_d);
	if ((*data).pic.key.f7.cor.img_r_u)
		mlx_destroy_image(mlx.ptr, (*data).pic.key.f7.cor.img_r_u);
	destroy_key_13_images(mlx, data);
}

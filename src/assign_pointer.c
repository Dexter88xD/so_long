/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:57:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 11:57:20 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	point_wall(t_places *wall, void *mlx_ptr, int *x, int *y)
{
	(*wall).cor.img_l_d = mlx_xpm_file_to_image(mlx_ptr, (*wall).cor.ptr_l_d, x,
			y);
	(*wall).cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*wall).cor.ptr_l_u, x,
			y);
	(*wall).cor.img_r_u = mlx_xpm_file_to_image(mlx_ptr, (*wall).cor.ptr_r_u, x,
			y);
	(*wall).cor.img_r_d = mlx_xpm_file_to_image(mlx_ptr, (*wall).cor.ptr_r_d, x,
			y);
	(*wall).one.img_l = mlx_xpm_file_to_image(mlx_ptr, (*wall).one.ptr_l, x, y);
	(*wall).one.img_r = mlx_xpm_file_to_image(mlx_ptr, (*wall).one.ptr_r, x, y);
	(*wall).one.img_u = mlx_xpm_file_to_image(mlx_ptr, (*wall).one.ptr_u, x, y);
	(*wall).one.img_d = mlx_xpm_file_to_image(mlx_ptr, (*wall).one.ptr_d, x, y);
	(*wall).middle.img = mlx_xpm_file_to_image(mlx_ptr, (*wall).middle.ptr, x,
			y);
}

void	point_side_road(t_places *road, void *mlx_ptr, int *x, int *y)
{
	(*road).one.img_u = mlx_xpm_file_to_image(mlx_ptr, (*road).one.ptr_u, x, y);
	(*road).one.img_r = mlx_xpm_file_to_image(mlx_ptr, (*road).one.ptr_r, x, y);
	(*road).one.img_d = mlx_xpm_file_to_image(mlx_ptr, (*road).one.ptr_d, x, y);
	(*road).one.img_l = mlx_xpm_file_to_image(mlx_ptr, (*road).one.ptr_l, x, y);
	(*road).two.img_u_d = mlx_xpm_file_to_image(mlx_ptr, (*road).two.ptr_u_d, x,
			y);
	(*road).two.img_l_r = mlx_xpm_file_to_image(mlx_ptr, (*road).two.ptr_l_r, x,
			y);
	(*road).three.img_d = mlx_xpm_file_to_image(mlx_ptr, (*road).three.ptr_d, x,
			y);
	(*road).three.img_u = mlx_xpm_file_to_image(mlx_ptr, (*road).three.ptr_u, x,
			y);
	(*road).three.img_r = mlx_xpm_file_to_image(mlx_ptr, (*road).three.ptr_r, x,
			y);
	(*road).three.img_l = mlx_xpm_file_to_image(mlx_ptr, (*road).three.ptr_l, x,
			y);
}

void	point_corner_middle_road(t_places *road, void *mlx_ptr, int *x, int *y)
{
	(*road).cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*road).cor.ptr_l_u, x,
			y);
	(*road).cor.img_r_u = mlx_xpm_file_to_image(mlx_ptr, (*road).cor.ptr_r_u, x,
			y);
	(*road).cor.img_r_d = mlx_xpm_file_to_image(mlx_ptr, (*road).cor.ptr_r_d, x,
			y);
	(*road).cor.img_l_d = mlx_xpm_file_to_image(mlx_ptr, (*road).cor.ptr_l_d, x,
			y);
	(*road).inside.img = mlx_xpm_file_to_image(mlx_ptr, (*road).inside.ptr, x,
			y);
	(*road).inside.img_shad = mlx_xpm_file_to_image(mlx_ptr,
			(*road).inside.ptr_shad, x, y);
}

void	point_side_collectible(t_places *key, void *mlx_ptr, int *x, int *y)
{
	(*key).one.img_d = mlx_xpm_file_to_image(mlx_ptr, (*key).one.ptr_d, x, y);
	(*key).one.img_l = mlx_xpm_file_to_image(mlx_ptr, (*key).one.ptr_l, x, y);
	(*key).one.img_r = mlx_xpm_file_to_image(mlx_ptr, (*key).one.ptr_r, x, y);
	(*key).one.img_u = mlx_xpm_file_to_image(mlx_ptr, (*key).one.ptr_u, x, y);
	(*key).three.img_d = mlx_xpm_file_to_image(mlx_ptr, (*key).three.ptr_d, x,
			y);
	(*key).three.img_l = mlx_xpm_file_to_image(mlx_ptr, (*key).three.ptr_l, x,
			y);
	(*key).three.img_r = mlx_xpm_file_to_image(mlx_ptr, (*key).three.ptr_r, x,
			y);
	(*key).three.img_u = mlx_xpm_file_to_image(mlx_ptr, (*key).three.ptr_u, x,
			y);
	(*key).two.img_u_d = mlx_xpm_file_to_image(mlx_ptr, (*key).two.ptr_u_d, x,
			y);
	(*key).two.img_l_r = mlx_xpm_file_to_image(mlx_ptr, (*key).two.ptr_l_r, x,
			y);
}

void	point_mid_cor_coll_exit(t_assets *a, void *mlx_ptr, int *x, int *y)
{
	(*a).exit.middle.img = mlx_xpm_file_to_image(mlx_ptr, (*a).exit.middle.ptr,
			x, y);
	(*a).key.middle.img = mlx_xpm_file_to_image(mlx_ptr, (*a).key.middle.ptr, x,
			y);
	(*a).key.cor.img_l_d = mlx_xpm_file_to_image(mlx_ptr, (*a).key.cor.ptr_l_d,
			x, y);
	(*a).key.cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*a).key.cor.ptr_l_u,
			x, y);
	(*a).key.cor.img_r_d = mlx_xpm_file_to_image(mlx_ptr, (*a).key.cor.ptr_r_d,
			x, y);
	(*a).key.cor.img_r_u = mlx_xpm_file_to_image(mlx_ptr, (*a).key.cor.ptr_r_u,
			x, y);
}

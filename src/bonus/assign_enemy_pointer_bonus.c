/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_enemy_pointer_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:57:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 14:44:44 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	point_r_e_middle_corner(t_places *e_r, void *mlx_ptr, int *x, int *y)
{
	(*e_r).inside.img = mlx_xpm_file_to_image(mlx_ptr, (*e_r).inside.ptr, x, y);
	(*e_r).cor.img_l_d = mlx_xpm_file_to_image(mlx_ptr, (*e_r).cor.ptr_l_d, x,
			y);
	(*e_r).cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*e_r).cor.ptr_l_u, x,
			y);
	(*e_r).cor.img_r_d = mlx_xpm_file_to_image(mlx_ptr, (*e_r).cor.ptr_r_d, x,
			y);
	(*e_r).cor.img_r_u = mlx_xpm_file_to_image(mlx_ptr, (*e_r).cor.ptr_r_u, x,
			y);
}

void	point_r_e_side(t_places *e_r, void *mlx_ptr, int *x, int *y)
{
	(*e_r).one.img_d = mlx_xpm_file_to_image(mlx_ptr, (*e_r).one.ptr_d, x, y);
	(*e_r).one.img_l = mlx_xpm_file_to_image(mlx_ptr, (*e_r).one.ptr_l, x, y);
	(*e_r).one.img_r = mlx_xpm_file_to_image(mlx_ptr, (*e_r).one.ptr_r, x, y);
	(*e_r).one.img_u = mlx_xpm_file_to_image(mlx_ptr, (*e_r).one.ptr_u, x, y);
	(*e_r).three.img_d = mlx_xpm_file_to_image(mlx_ptr, (*e_r).three.ptr_d, x,
			y);
	(*e_r).three.img_l = mlx_xpm_file_to_image(mlx_ptr, (*e_r).three.ptr_l, x,
			y);
	(*e_r).three.img_r = mlx_xpm_file_to_image(mlx_ptr, (*e_r).three.ptr_r, x,
			y);
	(*e_r).three.img_u = mlx_xpm_file_to_image(mlx_ptr, (*e_r).three.ptr_u, x,
			y);
	(*e_r).two.img_u_d = mlx_xpm_file_to_image(mlx_ptr, (*e_r).two.ptr_u_d, x,
			y);
	(*e_r).two.img_l_r = mlx_xpm_file_to_image(mlx_ptr, (*e_r).two.ptr_l_r, x,
			y);
}

void	point_l_e_middle_corner(t_places *e_l, void *mlx_ptr, int *x, int *y)
{
	(*e_l).inside.img = mlx_xpm_file_to_image(mlx_ptr, (*e_l).inside.ptr, x, y);
	(*e_l).cor.img_l_d = mlx_xpm_file_to_image(mlx_ptr, (*e_l).cor.ptr_l_d, x,
			y);
	(*e_l).cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*e_l).cor.ptr_l_u, x,
			y);
	(*e_l).cor.img_r_d = mlx_xpm_file_to_image(mlx_ptr, (*e_l).cor.ptr_r_d, x,
			y);
	(*e_l).cor.img_r_u = mlx_xpm_file_to_image(mlx_ptr, (*e_l).cor.ptr_r_u, x,
			y);
}

void	point_l_e_side(t_places *e_l, void *mlx_ptr, int *x, int *y)
{
	(*e_l).one.img_d = mlx_xpm_file_to_image(mlx_ptr, (*e_l).one.ptr_d, x, y);
	(*e_l).one.img_l = mlx_xpm_file_to_image(mlx_ptr, (*e_l).one.ptr_l, x, y);
	(*e_l).one.img_r = mlx_xpm_file_to_image(mlx_ptr, (*e_l).one.ptr_r, x, y);
	(*e_l).one.img_u = mlx_xpm_file_to_image(mlx_ptr, (*e_l).one.ptr_u, x, y);
	(*e_l).three.img_d = mlx_xpm_file_to_image(mlx_ptr, (*e_l).three.ptr_d, x,
			y);
	(*e_l).three.img_l = mlx_xpm_file_to_image(mlx_ptr, (*e_l).three.ptr_l, x,
			y);
	(*e_l).three.img_r = mlx_xpm_file_to_image(mlx_ptr, (*e_l).three.ptr_r, x,
			y);
	(*e_l).three.img_u = mlx_xpm_file_to_image(mlx_ptr, (*e_l).three.ptr_u, x,
			y);
	(*e_l).two.img_u_d = mlx_xpm_file_to_image(mlx_ptr, (*e_l).two.ptr_u_d, x,
			y);
	(*e_l).two.img_l_r = mlx_xpm_file_to_image(mlx_ptr, (*e_l).two.ptr_l_r, x,
			y);
}

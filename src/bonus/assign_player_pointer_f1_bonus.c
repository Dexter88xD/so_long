/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_player_pointer_f1_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:57:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 09:39:37 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	point_right_p_middle_corner_fone(t_places *p_r, void *mlx_ptr, int *x,
		int *y)
{
	(*p_r).inside.img = mlx_xpm_file_to_image(mlx_ptr, (*p_r).inside.ptr, x, y);
	(*p_r).end.img = mlx_xpm_file_to_image(mlx_ptr, (*p_r).end.ptr, x, y);
	(*p_r).cor.img_l_d = mlx_xpm_file_to_image(mlx_ptr, (*p_r).cor.ptr_l_d, x,
			y);
	(*p_r).cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*p_r).cor.ptr_l_u, x,
			y);
	(*p_r).cor.img_r_d = mlx_xpm_file_to_image(mlx_ptr, (*p_r).cor.ptr_r_d, x,
			y);
	(*p_r).cor.img_r_u = mlx_xpm_file_to_image(mlx_ptr, (*p_r).cor.ptr_r_u, x,
			y);
}

void	point_right_p_side_fone(t_places *p_r, void *mlx_ptr, int *x, int *y)
{
	(*p_r).one.img_d = mlx_xpm_file_to_image(mlx_ptr, (*p_r).one.ptr_d, x, y);
	(*p_r).one.img_l = mlx_xpm_file_to_image(mlx_ptr, (*p_r).one.ptr_l, x, y);
	(*p_r).one.img_r = mlx_xpm_file_to_image(mlx_ptr, (*p_r).one.ptr_r, x, y);
	(*p_r).one.img_u = mlx_xpm_file_to_image(mlx_ptr, (*p_r).one.ptr_u, x, y);
	(*p_r).three.img_d = mlx_xpm_file_to_image(mlx_ptr, (*p_r).three.ptr_d, x,
			y);
	(*p_r).three.img_l = mlx_xpm_file_to_image(mlx_ptr, (*p_r).three.ptr_l, x,
			y);
	(*p_r).three.img_r = mlx_xpm_file_to_image(mlx_ptr, (*p_r).three.ptr_r, x,
			y);
	(*p_r).three.img_u = mlx_xpm_file_to_image(mlx_ptr, (*p_r).three.ptr_u, x,
			y);
	(*p_r).two.img_u_d = mlx_xpm_file_to_image(mlx_ptr, (*p_r).two.ptr_u_d, x,
			y);
	(*p_r).two.img_l_r = mlx_xpm_file_to_image(mlx_ptr, (*p_r).two.ptr_l_r, x,
			y);
}

void	point_left_p_middle_corner_fone(t_places *p_l, void *mlx_ptr, int *x,
		int *y)
{
	(*p_l).inside.img = mlx_xpm_file_to_image(mlx_ptr, (*p_l).inside.ptr, x, y);
	(*p_l).end.img = mlx_xpm_file_to_image(mlx_ptr, (*p_l).end.ptr, x, y);
	(*p_l).cor.img_l_d = mlx_xpm_file_to_image(mlx_ptr, (*p_l).cor.ptr_l_d, x,
			y);
	(*p_l).cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*p_l).cor.ptr_l_u, x,
			y);
	(*p_l).cor.img_r_d = mlx_xpm_file_to_image(mlx_ptr, (*p_l).cor.ptr_r_d, x,
			y);
	(*p_l).cor.img_r_u = mlx_xpm_file_to_image(mlx_ptr, (*p_l).cor.ptr_r_u, x,
			y);
}

void	point_left_p_side_fone(t_places *p_l, void *mlx_ptr, int *x, int *y)
{
	(*p_l).one.img_d = mlx_xpm_file_to_image(mlx_ptr, (*p_l).one.ptr_d, x, y);
	(*p_l).one.img_l = mlx_xpm_file_to_image(mlx_ptr, (*p_l).one.ptr_l, x, y);
	(*p_l).one.img_r = mlx_xpm_file_to_image(mlx_ptr, (*p_l).one.ptr_r, x, y);
	(*p_l).one.img_u = mlx_xpm_file_to_image(mlx_ptr, (*p_l).one.ptr_u, x, y);
	(*p_l).three.img_d = mlx_xpm_file_to_image(mlx_ptr, (*p_l).three.ptr_d, x,
			y);
	(*p_l).three.img_l = mlx_xpm_file_to_image(mlx_ptr, (*p_l).three.ptr_l, x,
			y);
	(*p_l).three.img_r = mlx_xpm_file_to_image(mlx_ptr, (*p_l).three.ptr_r, x,
			y);
	(*p_l).three.img_u = mlx_xpm_file_to_image(mlx_ptr, (*p_l).three.ptr_u, x,
			y);
	(*p_l).two.img_u_d = mlx_xpm_file_to_image(mlx_ptr, (*p_l).two.ptr_u_d, x,
			y);
	(*p_l).two.img_l_r = mlx_xpm_file_to_image(mlx_ptr, (*p_l).two.ptr_l_r, x,
			y);
}

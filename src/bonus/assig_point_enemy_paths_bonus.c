/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assig_point_enemy_paths.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 06:24:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/06 12:04:16 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	assign_enemy(t_assets *pic, void *mlx_ptr, int *x, int *y)
{
	assign_right_e_middle_corner_fone(&(*pic).e_right.f1);
	assign_right_e_side_fone(&(*pic).e_right.f1);
	assign_left_e_middle_corner_fone(&(*pic).e_left.f1);
	assign_left_e_side_fone(&(*pic).e_left.f1);
	assign_right_e_middle_corner_ftwo(&(*pic).e_right.f2);
	assign_right_e_side_ftwo(&(*pic).e_right.f2);
	assign_left_e_middle_corner_ftwo(&(*pic).e_left.f2);
	assign_left_e_side_ftwo(&(*pic).e_left.f2);
	assign_right_e_middle_corner_fthree(&(*pic).e_right.f3);
	assign_right_e_side_fthree(&(*pic).e_right.f3);
	assign_left_e_middle_corner_fthree(&(*pic).e_left.f3);
	assign_left_e_side_fthree(&(*pic).e_left.f3);
	assign_right_e_middle_corner_ffour(&(*pic).e_right.f4);
	assign_right_e_side_ffour(&(*pic).e_right.f4);
	assign_left_e_middle_corner_ffour(&(*pic).e_left.f4);
	assign_left_e_side_ffour(&(*pic).e_left.f4);
	assig_point_key_paths_pointers(pic, mlx_ptr, x, y);
	pointing_path_pointers(pic, mlx_ptr, x, y);
}

void	point_enemy(t_assets *pic, void *mlx_ptr, int *x, int *y)
{
	point_r_e_middle_corner(&(*pic).e_right.f1, mlx_ptr, x, y);
	point_r_e_side(&(*pic).e_right.f1, mlx_ptr, x, y);
	point_l_e_middle_corner(&(*pic).e_left.f1, mlx_ptr, x, y);
	point_l_e_side(&(*pic).e_left.f1, mlx_ptr, x, y);
	point_r_e_middle_corner(&(*pic).e_right.f2, mlx_ptr, x, y);
	point_r_e_side(&(*pic).e_right.f2, mlx_ptr, x, y);
	point_l_e_middle_corner(&(*pic).e_left.f2, mlx_ptr, x, y);
	point_l_e_side(&(*pic).e_left.f2, mlx_ptr, x, y);
	point_r_e_middle_corner(&(*pic).e_right.f3, mlx_ptr, x, y);
	point_r_e_side(&(*pic).e_right.f3, mlx_ptr, x, y);
	point_l_e_middle_corner(&(*pic).e_left.f3, mlx_ptr, x, y);
	point_l_e_side(&(*pic).e_left.f3, mlx_ptr, x, y);
	point_r_e_middle_corner(&(*pic).e_right.f4, mlx_ptr, x, y);
	point_r_e_side(&(*pic).e_right.f4, mlx_ptr, x, y);
	point_l_e_middle_corner(&(*pic).e_left.f4, mlx_ptr, x, y);
	point_l_e_side(&(*pic).e_left.f4, mlx_ptr, x, y);
}

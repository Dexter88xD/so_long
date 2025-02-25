/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assigning_checking_pointers_bonus.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:29:59 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/25 15:23:50 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	assig_point_key_paths_pointers(t_assets *pic, void *mlx_ptr, int *x,
		int *y)
{
	assign_collectible_fone(&(*pic).key.f1);
	assign_collectible_ftwo(&(*pic).key.f2);
	assign_collectible_fthree(&(*pic).key.f3);
	assign_collectible_ffour(&(*pic).key.f4);
	assign_collectible_ffive(&(*pic).key.f5);
	assign_collectible_fsix(&(*pic).key.f6);
	assign_collectible_fseven(&(*pic).key.f7);
	assign_collectible_feight(&(*pic).key.f8);
	point_mid_cor_coll(&(*pic).key.f1, mlx_ptr, x, y);
	point_mid_cor_coll(&(*pic).key.f2, mlx_ptr, x, y);
	point_mid_cor_coll(&(*pic).key.f3, mlx_ptr, x, y);
	point_mid_cor_coll(&(*pic).key.f4, mlx_ptr, x, y);
	point_mid_cor_coll(&(*pic).key.f5, mlx_ptr, x, y);
	point_mid_cor_coll(&(*pic).key.f6, mlx_ptr, x, y);
	point_mid_cor_coll(&(*pic).key.f7, mlx_ptr, x, y);
	point_mid_cor_coll(&(*pic).key.f8, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f1, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f2, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f3, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f4, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f5, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f6, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f7, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key.f8, mlx_ptr, x, y);
}

void	assigning_paths_pointers(t_assets *pic, void *mlx_ptr, int *x, int *y)
{
	assign_wall_exit(&(*pic).wall, &(*pic).exit);
	assign_road(&(*pic).road);
	assign_right_p_middle_corner_fone(&(*pic).p_right.f1);
	assign_right_p_side_fone(&(*pic).p_right.f1);
	assign_left_p_middle_corner_fone(&(*pic).p_left.f1);
	assign_left_p_side_fone(&(*pic).p_left.f1);
	assign_right_p_middle_corner_ftwo(&(*pic).p_right.f2);
	assign_right_p_side_ftwo(&(*pic).p_right.f2);
	assign_left_p_middle_corner_ftwo(&(*pic).p_left.f2);
	assign_left_p_side_ftwo(&(*pic).p_left.f2);
	assign_right_p_middle_corner_fthree(&(*pic).p_right.f3);
	assign_right_p_side_fthree(&(*pic).p_right.f3);
	assign_left_p_middle_corner_fthree(&(*pic).p_left.f3);
	assign_left_p_side_fthree(&(*pic).p_left.f3);
	assign_right_p_middle_corner_ffour(&(*pic).p_right.f4);
	assign_right_p_side_ffour(&(*pic).p_right.f4);
	assign_left_p_middle_corner_ffour(&(*pic).p_left.f4);
	assign_left_p_side_ffour(&(*pic).p_left.f4);
	assign_enemy(pic, mlx_ptr, x, y);
	assign_point_moves(pic, mlx_ptr);
}

void	pointing_path_pointers(t_assets *pic, void *mlx_ptr, int *x, int *y)
{
	point_wall_exit(pic, mlx_ptr, x, y);
	point_side_road_exit(pic, mlx_ptr, x, y);
	point_corner_middle_road(&(*pic).road, mlx_ptr, x, y);
	point_r_p_middle_corner(&(*pic).p_right.f1, mlx_ptr, x, y);
	point_r_p_side(&(*pic).p_right.f1, mlx_ptr, x, y);
	point_l_p_middle_corner(&(*pic).p_left.f1, mlx_ptr, x, y);
	point_l_p_side(&(*pic).p_left.f1, mlx_ptr, x, y);
	point_r_p_middle_corner(&(*pic).p_right.f2, mlx_ptr, x, y);
	point_r_p_side(&(*pic).p_right.f2, mlx_ptr, x, y);
	point_l_p_middle_corner(&(*pic).p_left.f2, mlx_ptr, x, y);
	point_l_p_side(&(*pic).p_left.f2, mlx_ptr, x, y);
	point_r_p_middle_corner(&(*pic).p_right.f3, mlx_ptr, x, y);
	point_r_p_side(&(*pic).p_right.f3, mlx_ptr, x, y);
	point_l_p_middle_corner(&(*pic).p_left.f3, mlx_ptr, x, y);
	point_l_p_side(&(*pic).p_left.f3, mlx_ptr, x, y);
	point_r_p_middle_corner(&(*pic).p_right.f4, mlx_ptr, x, y);
	point_r_p_side(&(*pic).p_right.f4, mlx_ptr, x, y);
	point_l_p_middle_corner(&(*pic).p_left.f4, mlx_ptr, x, y);
	point_l_p_side(&(*pic).p_left.f4, mlx_ptr, x, y);
	point_enemy(pic, mlx_ptr, x, y);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assigning_checking_pointers_bonus.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:29:59 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 18:10:05 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	assig_point_key_paths_pointers(t_assets *pic, void *mlx_ptr,
		int *x, int *y)
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
	assign_r_p_middle_corner(&(*pic).p_right.f1);
	assign_r_p_side(&(*pic).p_right.f1);
	assign_l_p_middle_corner(&(*pic).p_left.f1);
	assign_l_p_side(&(*pic).p_left.f1);
	assign_r_p_middle_corner(&(*pic).p_right.f2);
	assign_r_p_side(&(*pic).p_right.f2);
	assign_l_p_middle_corner(&(*pic).p_left.f2);
	assign_l_p_side(&(*pic).p_left.f2);
	assign_r_p_middle_corner(&(*pic).p_right.f3);
	assign_r_p_side(&(*pic).p_right.f3);
	assign_l_p_middle_corner(&(*pic).p_left.f3);
	assign_l_p_side(&(*pic).p_left.f3);
	assign_r_p_middle_corner(&(*pic).p_right.f4);
	assign_r_p_side(&(*pic).p_right.f4);
	assign_l_p_middle_corner(&(*pic).p_left.f4);
	assign_l_p_side(&(*pic).p_left.f4);
	assig_point_key_paths_pointers(pic, mlx_ptr, x, y);
	pointing_path_pointers(pic, mlx_ptr, x, y);
}

void	pointing_path_pointers(t_assets *pic, void *mlx_ptr, int *x, int *y)
{
	point_wall_exit(pic, mlx_ptr, x, y);
	point_side_road(&(*pic).road, mlx_ptr, x, y);
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
}

int	checking_pointers(t_assets *pic)
{
	if (check_wall_pointer(&(*pic).wall) == 0)
		return (0);
	else if (check_side_road_pointer(&(*pic).road) == 0)
		return (0);
	else if (check_corner_middle_road_pointer(&(*pic).road) == 0)
		return (0);
	else if (check_mid_cor_coll_exit_pointer(pic) == 0)
		return (0);
	else if (check_r_p_middle_corner_pointer(&(*pic).p_right.f1) == 0)
		return (0);
	else if (check_r_p_side_pointer(&(*pic).p_right.f1) == 0)
		return (0);
	else if (check_l_p_middle_corner_pointer(&(*pic).p_left.f1) == 0)
		return (0);
	else if (check_l_p_side_pointer(&(*pic).p_left.f1) == 0)
		return (0);
	else
		return (checking_rest_pointers(pic));
}

int	checking_rest_pointers(t_assets *pic)
{
	if (check_r_p_middle_corner_pointer(&(*pic).p_right.f2) == 0)
		return (0);
	else if (check_r_p_side_pointer(&(*pic).p_right.f2) == 0)
		return (0);
	else if (check_l_p_middle_corner_pointer(&(*pic).p_left.f2) == 0)
		return (0);
	else if (check_l_p_side_pointer(&(*pic).p_left.f2) == 0)
		return (0);
	else if (check_r_p_middle_corner_pointer(&(*pic).p_right.f3) == 0)
		return (0);
	else if (check_r_p_side_pointer(&(*pic).p_right.f3) == 0)
		return (0);
	else if (check_l_p_middle_corner_pointer(&(*pic).p_left.f3) == 0)
		return (0);
	else if (check_l_p_side_pointer(&(*pic).p_left.f3) == 0)
		return (0);
	else if (check_r_p_middle_corner_pointer(&(*pic).p_right.f4) == 0)
		return (0);
	else if (check_r_p_side_pointer(&(*pic).p_right.f4) == 0)
		return (0);
	else if (check_l_p_middle_corner_pointer(&(*pic).p_left.f4) == 0)
		return (0);
	else if (check_l_p_side_pointer(&(*pic).p_left.f4) == 0)
		return (0);
	return (checking_key_pointers(pic));
}

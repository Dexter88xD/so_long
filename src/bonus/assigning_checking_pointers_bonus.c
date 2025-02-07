/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assigning_checking_pointers_bonus.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:29:59 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 15:06:29 by sohamdan         ###   ########.fr       */
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

int	checking_pointers(t_assets *pic, t_ptr *mlx)
{
	if (assign_point_check_moves(pic, mlx->ptr) == 0)
		return (ft_printf("Error\nCheck moves pointer!\n"), 0);
	else if (check_wall_exit_pointer(pic) == 0)
		return (ft_printf("Error\nCheck wall/exit pointers!\n"), 0);
	if (check_side_road_pointer(&(*pic).road) == 0)
		return (ft_printf("Error\nCheck side road pointers!\n"), 0);
	if (check_exit_corner_middle_road_pointer(pic) == 0)
		return (ft_printf("Error\nCheck cor/mid road ptr!\n"), 0);
	if (check_r_p_middle_corner_pointer(&(*pic).p_right.f1) == 0)
		return (ft_printf("Error\nCheck f1 right player cor/mid ptr!\n"), 0);
	if (check_r_p_side_pointer(&(*pic).p_right.f1) == 0)
		return (ft_printf("Error\nCheck f1 right player side ptr!\n"), 0);
	if (check_l_p_middle_corner_pointer(&(*pic).p_left.f1) == 0)
		return (ft_printf("Error\nCheck f1 left player cor/mid ptr!\n"), 0);
	if (check_l_p_side_pointer(&(*pic).p_left.f1) == 0)
		return (ft_printf("Error\nCheck f1 left player side ptr!\n"), 0);
	return (checking_rest_pointers(pic));
}

int	checking_rest_pointers(t_assets *pic)
{
	if (check_r_p_middle_corner_pointer(&(*pic).p_right.f2) == 0)
		return (ft_printf("Error\nCheck f2 right player cor/mid ptr!\n"), 0);
	if (check_r_p_side_pointer(&(*pic).p_right.f2) == 0)
		return (ft_printf("Error\nCheck f2 right player side ptr!\n"), 0);
	if (check_l_p_middle_corner_pointer(&(*pic).p_left.f2) == 0)
		return (ft_printf("Error\nCheck f2 left player cor/mid ptr!\n"), 0);
	if (check_l_p_side_pointer(&(*pic).p_left.f2) == 0)
		return (ft_printf("Error\nCheck f2 left player side ptr!\n"), 0);
	if (check_r_p_middle_corner_pointer(&(*pic).p_right.f3) == 0)
		return (ft_printf("Error\nCheck f3 right player cor/mid ptr!\n"), 0);
	if (check_r_p_side_pointer(&(*pic).p_right.f3) == 0)
		return (ft_printf("Error\nCheck f3 right player side ptr!\n"), 0);
	if (check_l_p_middle_corner_pointer(&(*pic).p_left.f3) == 0)
		return (ft_printf("Error\nCheck f3 left player cor/mid ptr!\n"), 0);
	if (check_l_p_side_pointer(&(*pic).p_left.f3) == 0)
		return (ft_printf("Error\nCheck f3 left player cor/mid ptr!\n"), 0);
	if (check_r_p_middle_corner_pointer(&(*pic).p_right.f4) == 0)
		return (ft_printf("Error\nCheck f4 right player cor/mid ptr!\n"), 0);
	if (check_r_p_side_pointer(&(*pic).p_right.f4) == 0)
		return (ft_printf("Error\nCheck f4 right player side ptr!\n"), 0);
	if (check_l_p_middle_corner_pointer(&(*pic).p_left.f4) == 0)
		return (ft_printf("Error\nCheck f4 left player cor/mid ptr!\n"), 0);
	if (check_l_p_side_pointer(&(*pic).p_left.f4) == 0)
		return (ft_printf("Error\nCheck f4 left player side ptr!\n"), 0);
	return (checking_key_pointers(pic));
}

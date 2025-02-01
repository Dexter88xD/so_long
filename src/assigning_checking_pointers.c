/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assigning_checking_pointers.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:29:59 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/01 10:30:00 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	assigning_paths_pointers(t_assets *pic, void *mlx_ptr, int *x, int *y)
{
	assign_wall_exit(&(*pic).wall, &(*pic).exit);
	assign_road(&(*pic).road);
	assign_collectible(&(*pic).key);
	assign_right_p_middle_corner(&(*pic).p_right);
	assign_right_p_side(&(*pic).p_right);
	assign_left_p_middle_corner(&(*pic).p_left);
	assign_left_p_side(&(*pic).p_left);
	point_wall(&(*pic).wall, mlx_ptr, x, y);
	point_side_road(&(*pic).road, mlx_ptr, x, y);
	point_corner_middle_road(&(*pic).road, mlx_ptr, x, y);
	point_side_collectible(&(*pic).key, mlx_ptr, x, y);
	point_mid_cor_coll_exit(pic, mlx_ptr, x, y);
	point_r_p_middle_corner(&(*pic).p_right, mlx_ptr, x, y);
	point_r_p_side(&(*pic).p_right, mlx_ptr, x, y);
	point_l_p_middle_corner(&(*pic).p_left, mlx_ptr, x, y);
	point_l_p_side(&(*pic).p_left, mlx_ptr, x, y);
}

int	checking_pointers(t_assets *pic)
{
	if (check_wall_pointer(&(*pic).wall) == 0)
		return (0);
	else if (check_side_road_pointer(&(*pic).road) == 0)
		return (0);
	else if (check_corner_middle_road_pointer(&(*pic).road) == 0)
		return (0);
	else if (check_side_collectible_pointer(&(*pic).key) == 0)
		return (0);
	else if (check_mid_cor_coll_exit_pointer(pic) == 0)
		return (0);
	else if (check_r_p_middle_corner_pointer(&(*pic).p_right) == 0)
		return (0);
	else if (check_r_p_side_pointer(&(*pic).p_right) == 0)
		return (0);
	else if (check_l_p_middle_corner_pointer(&(*pic).p_left) == 0)
		return (0);
	else if (check_l_p_side_pointer(&(*pic).p_left) == 0)
		return (0);
	else
		return (1);
}

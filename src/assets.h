/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assets.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:17:29 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 11:17:30 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSETS_H
# define ASSETS_H

# include "so_long.h"

typedef struct s_wall
{
	void	*img_corner_left_up;
	char	*ptr_corner_left_up;
	void	*img_corner_left_down;
	char	*ptr_corner_left_down;
	void	*img_corner_right_up;
	char	*ptr_corner_right_up;
	void	*img_corner_right_down;
	char	*ptr_corner_right_down;
	void	*img_side_left;
	char	*ptr_side_left;
	void	*img_side_right;
	char	*ptr_side_right;
	void	*img_side_up;
	char	*ptr_side_up;
	void	*img_side_down;
	char	*ptr_side_down;
	void	*img_wall;
	char	*ptr_wall;
}			t_wall;

typedef struct s_road
{
	void	*img_middle;
	char	*ptr_middle;
	void	*img_corner_left_up;
	char	*ptr_corner_left_up;
	void	*img_corner_left_down;
	char	*ptr_corner_left_down;
	void	*img_corner_right_up;
	char	*ptr_corner_right_up;
	void	*img_corner_right_down;
	char	*ptr_corner_right_down;
	void	*img_side_up;
	char	*ptr_side_up;
	void	*img_side_right;
	char	*ptr_side_right;
	void	*img_side_down;
	char	*ptr_side_down;
	void	*img_side_left;
	char	*ptr_side_left;
	void	*img_side_up_down;
	char	*ptr_side_up_down;
	void	*img_side_left_right;
	char	*ptr_side_left_right;
	void	*img_three_side_up;
	char	*ptr_three_side_up;
	void	*img_three_side_down;
	char	*ptr_three_side_down;
	void	*img_three_side_left;
	char	*ptr_three_side_left;
	void	*img_three_side_right;
	char	*ptr_three_side_right;
	void	*img_inside_wall;
	char	*ptr_inside_wall;

}			t_road;

typedef struct s_reach
{
	void	*img_middle;
	char	*ptr_middle;
	void	*img_corner_left_down;
	char	*ptr_corner_left_down;
	void	*img_corner_left_up;
	char	*ptr_corner_left_up;
	void	*img_corner_right_down;
	char	*ptr_corner_right_down;
	void	*img_corner_right_up;
	char	*ptr_corner_right_up;
	void	*img_side_one_down;
	char	*ptr_side_one_down;
	void	*img_side_one_left;
	char	*ptr_side_one_left;
	void	*img_side_one_right;
	char	*ptr_side_one_right;
	void	*img_side_one_up;
	char	*ptr_side_one_up;
	void	*img_side_three_down;
	char	*ptr_side_three_down;
	void	*img_side_three_left;
	char	*ptr_side_three_left;
	void	*img_side_three_right;
	char	*ptr_side_three_right;
	void	*img_side_three_up;
	char	*ptr_side_three_up;
	void	*img_side_two_left_right;
	char	*ptr_side_two_left_right;
	void	*img_side_two_up_down;
	char	*ptr_side_two_up_down;
}			t_reach;


typedef struct s_enemy
{
	void	*img_middle;
	char	*ptr_middle;
	void	*img_inside_wall;
	char	*ptr_inside_wall;
	void	*img_corner_left_down;
	char	*ptr_corner_left_down;
	void	*img_corner_left_up;
	char	*ptr_corner_left_up;
	void	*img_corner_right_down;
	char	*ptr_corner_right_down;
	void	*img_corner_right_up;
	char	*ptr_corner_right_up;
	void	*img_side_one_down;
	char	*ptr_side_one_down;
	void	*img_side_one_left;
	char	*ptr_side_one_left;
	void	*img_side_one_right;
	char	*ptr_side_one_right;
	void	*img_side_one_up;
	char	*ptr_side_one_up;
	void	*img_side_three_down;
	char	*ptr_side_three_down;
	void	*img_side_three_left;
	char	*ptr_side_three_left;
	void	*img_side_three_right;
	char	*ptr_side_three_right;
	void	*img_side_three_up;
	char	*ptr_side_three_up;
	void	*img_side_two_left_right;
	char	*ptr_side_two_left_right;
	void	*img_side_two_up_down;
	char	*ptr_side_two_up_down;
}			t_enemy;

typedef struct s_exit
{
	void	*img_gate;
	char	*ptr_gate;
}			t_exit;

#endif
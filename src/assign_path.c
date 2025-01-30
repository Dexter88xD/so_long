/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:57:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 11:57:20 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"

void    assign_wall(t_wall *wall)
{
    (*wall).ptr_corner_left_up = "../assets/wall/left_up.xpm";
	(*wall).ptr_corner_left_down = "../assets/wall/left_down.xpm";
	(*wall).ptr_corner_right_up = "../assets/wall/right_up.xpm";
	(*wall).ptr_corner_right_down = "../assets/wall/right_down.xpm";
	(*wall).ptr_side_left = "../assets/wall/left.xpm";
	(*wall).ptr_side_right = "../assets/wall/right.xpm";
	(*wall).ptr_side_up = "../assets/wall/up.xpm";
	(*wall).ptr_side_down = "../assets/wall/down.xpm";
}

void    assign_road(t_road *road)
{
    (*road).ptr_corner_left_up = "../assets/road/corner/left_up.xpm";
	(*road).ptr_corner_left_down = "../assets/road/corner/left_down.xpm";
	(*road).ptr_corner_right_up = "../assets/road/corner/right_up.xpm";
	(*road).ptr_corner_right_down = "../assets/road/corner/right_down.xpm";
	(*road).ptr_side_up = "../assets/road/side/one/up.xpm";
	(*road).ptr_side_right = "../assets/road/side/one/right.xpm";
	(*road).ptr_side_down = "../assets/road/side/one/down.xpm";
	(*road).ptr_side_left = "../assets/road/side/one/left.xpm";
	(*road).ptr_side_up_down = "../assets/road/side/two/up_down.xpm";
	(*road).ptr_side_left_right = "../assets/road/side/two/left_right.xpm";
	(*road).ptr_three_side_down = "../assets/road/side/three/down.xpm";
	(*road).ptr_three_side_up = "../assets/road/side/three/up.xpm";
	(*road).ptr_three_side_right = "../assets/road/side/three/right.xpm";
	(*road).ptr_three_side_left = "../assets/road/side/three/left.xpm";
	(*road).ptr_middle = "../assets/road/inside_road.xpm";
	(*road).ptr_inside_wall = "../assets/road/inside_road_shadows.xpm";
	(*road).ptr_inside_wall = "../assets/wall/inside_wall.xpm";
}
void    assign_road(t_road *road)
{
    (*road).ptr_corner_left_up = "../assets/road/corner/left_up.xpm";
	(*road).ptr_corner_left_down = "../assets/road/corner/left_down.xpm";
	(*road).ptr_corner_right_up = "../assets/road/corner/right_up.xpm";
	(*road).ptr_corner_right_down = "../assets/road/corner/right_down.xpm";
	(*road).ptr_side_up = "../assets/road/side/one/up.xpm";
	(*road).ptr_side_right = "../assets/road/side/one/right.xpm";
	(*road).ptr_side_down = "../assets/road/side/one/down.xpm";
	(*road).ptr_side_left = "../assets/road/side/one/left.xpm";
	(*road).ptr_side_up_down = "../assets/road/side/two/up_down.xpm";
	(*road).ptr_side_left_right = "../assets/road/side/two/left_right.xpm";
	(*road).ptr_three_side_down = "../assets/road/side/three/down.xpm";
	(*road).ptr_three_side_up = "../assets/road/side/three/up.xpm";
	(*road).ptr_three_side_right = "../assets/road/side/three/right.xpm";
	(*road).ptr_three_side_left = "../assets/road/side/three/left.xpm";
	(*road).ptr_middle = "../assets/road/inside_road.xpm";
	(*road).ptr_inside_wall = "../assets/road/inside_road_shadows.xpm";
	(*road).ptr_inside_wall = "../assets/wall/inside_wall.xpm";
}
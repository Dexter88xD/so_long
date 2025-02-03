/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:57:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/03 18:44:17 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	assign_wall_exit(t_places *wall, t_places *exit)
{
	(*exit).middle.ptr = "assets/E/frame_1.xpm";
	(*wall).cor.ptr_l_u = "assets/1/left_up.xpm";
	(*wall).cor.ptr_l_d = "assets/1/left_down.xpm";
	(*wall).cor.ptr_r_u = "assets/1/right_up.xpm";
	(*wall).cor.ptr_r_d = "assets/1/right_down.xpm";
	(*wall).one.ptr_l = "assets/1/left.xpm";
	(*wall).one.ptr_r = "assets/1/right.xpm";
	(*wall).one.ptr_u = "assets/1/up.xpm";
	(*wall).one.ptr_d = "assets/1/down.xpm";
	(*wall).middle.ptr = "assets/1/inside_wall.xpm";
}

void	assign_road(t_places *road)
{
	(*road).cor.ptr_l_u = "assets/0/corner/left_up.xpm";
	(*road).cor.ptr_r_u = "assets/0/corner/right_up.xpm";
	(*road).cor.ptr_r_d = "assets/0/corner/right_down.xpm";
	(*road).cor.ptr_l_d = "assets/0/corner/left_down.xpm";
	(*road).one.ptr_u = "assets/0/side/one/up.xpm";
	(*road).one.ptr_r = "assets/0/side/one/right.xpm";
	(*road).one.ptr_d = "assets/0/side/one/down.xpm";
	(*road).one.ptr_l = "assets/0/side/one/left.xpm";
	(*road).two.ptr_u_d = "assets/0/side/two/up_down.xpm";
	(*road).two.ptr_l_r = "assets/0/side/two/left_right.xpm";
	(*road).three.ptr_d = "assets/0/side/three/down.xpm";
	(*road).three.ptr_u = "assets/0/side/three/up.xpm";
	(*road).three.ptr_r = "assets/0/side/three/right.xpm";
	(*road).three.ptr_l = "assets/0/side/three/left.xpm";
	(*road).inside.ptr = "assets/0/inside_road.xpm";
	(*road).inside.ptr_shad = "assets/0/inside_road_shadows.xpm";
}

void	assign_collectible(t_places *key)
{
	(*key).middle.ptr = "assets/C/inside_road/frame_1.xpm";
	(*key).cor.ptr_l_d = "assets/C/corner/left_down/frame_1.xpm";
	(*key).cor.ptr_l_u = "assets/C/corner/left_up/frame_1.xpm";
	(*key).cor.ptr_r_d = "assets/C/corner/right_down/frame_1.xpm";
	(*key).cor.ptr_r_u = "assets/C/corner/right_up/frame_1.xpm";
	(*key).one.ptr_d = "assets/C/side/one/down/frame_1.xpm";
	(*key).one.ptr_l = "assets/C/side/one/left/frame_1.xpm";
	(*key).one.ptr_r = "assets/C/side/one/right/frame_1.xpm";
	(*key).one.ptr_u = "assets/C/side/one/up/frame_1.xpm";
	(*key).three.ptr_d = "assets/C/side/three/down/frame_1.xpm";
	(*key).three.ptr_l = "assets/C/side/three/right/frame_1.xpm";
	(*key).three.ptr_r = "assets/C/side/three/left/frame_1.xpm";
	(*key).three.ptr_u = "assets/C/side/three/up/frame_1.xpm";
	(*key).two.ptr_u_d = "assets/C/side/two/up_down/frame_1.xpm";
	(*key).two.ptr_l_r = "assets/C/side/two/left_right/frame_1.xpm";
}

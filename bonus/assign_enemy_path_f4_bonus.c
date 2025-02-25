/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_enemy_path_f4_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:57:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 14:43:21 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	assign_right_e_middle_corner_ffour(t_places *e_r)
{
	(*e_r).inside.ptr = "assets/N/look_r/inside_road/frame_4.xpm";
	(*e_r).inside.ptr_shad = "assets/N/look_r/inside_road_shad/frame_4.xpm";
	(*e_r).cor.ptr_l_d = "assets/N/look_r/corner/left_down/frame_4.xpm";
	(*e_r).cor.ptr_l_u = "assets/N/look_r/corner/left_up/frame_4.xpm";
	(*e_r).cor.ptr_r_d = "assets/N/look_r/corner/right_down/frame_4.xpm";
	(*e_r).cor.ptr_r_u = "assets/N/look_r/corner/right_up/frame_4.xpm";
}

void	assign_right_e_side_ffour(t_places *e_r)
{
	(*e_r).one.ptr_d = "assets/N/look_r/side/one/down/frame_4.xpm";
	(*e_r).one.ptr_l = "assets/N/look_r/side/one/left/frame_4.xpm";
	(*e_r).one.ptr_r = "assets/N/look_r/side/one/right/frame_4.xpm";
	(*e_r).one.ptr_u = "assets/N/look_r/side/one/up/frame_4.xpm";
	(*e_r).three.ptr_d = "assets/N/look_r/side/three/down/frame_4.xpm";
	(*e_r).three.ptr_l = "assets/N/look_r/side/three/right/frame_4.xpm";
	(*e_r).three.ptr_r = "assets/N/look_r/side/three/left/frame_4.xpm";
	(*e_r).three.ptr_u = "assets/N/look_r/side/three/up/frame_4.xpm";
	(*e_r).two.ptr_u_d = "assets/N/look_r/side/two/left_right/frame_4.xpm";
	(*e_r).two.ptr_l_r = "assets/N/look_r/side/two/up_down/frame_4.xpm";
}

void	assign_left_e_middle_corner_ffour(t_places *e_l)
{
	(*e_l).inside.ptr = "assets/N/look_l/inside_road/frame_4.xpm";
	(*e_l).inside.ptr_shad = "assets/N/look_l/inside_road_shad/frame_4.xpm";
	(*e_l).cor.ptr_l_d = "assets/N/look_l/corner/left_down/frame_4.xpm";
	(*e_l).cor.ptr_l_u = "assets/N/look_l/corner/left_up/frame_4.xpm";
	(*e_l).cor.ptr_r_d = "assets/N/look_l/corner/right_down/frame_4.xpm";
	(*e_l).cor.ptr_r_u = "assets/N/look_l/corner/right_up/frame_4.xpm";
}

void	assign_left_e_side_ffour(t_places *e_l)
{
	(*e_l).one.ptr_d = "assets/N/look_l/side/one/down/frame_4.xpm";
	(*e_l).one.ptr_l = "assets/N/look_l/side/one/left/frame_4.xpm";
	(*e_l).one.ptr_r = "assets/N/look_l/side/one/right/frame_4.xpm";
	(*e_l).one.ptr_u = "assets/N/look_l/side/one/up/frame_4.xpm";
	(*e_l).three.ptr_d = "assets/N/look_l/side/three/down/frame_4.xpm";
	(*e_l).three.ptr_l = "assets/N/look_l/side/three/right/frame_4.xpm";
	(*e_l).three.ptr_r = "assets/N/look_l/side/three/left/frame_4.xpm";
	(*e_l).three.ptr_u = "assets/N/look_l/side/three/up/frame_4.xpm";
	(*e_l).two.ptr_u_d = "assets/N/look_l/side/two/left_right/frame_4.xpm";
	(*e_l).two.ptr_l_r = "assets/N/look_l/side/two/up_down/frame_4.xpm";
}

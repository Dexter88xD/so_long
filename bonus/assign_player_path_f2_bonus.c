/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_player_path_f2_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:57:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 14:44:02 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	assign_right_p_middle_corner_ftwo(t_places *p_r)
{
	(*p_r).end.ptr = "assets/P/look_r/gate/frame_2.xpm";
	(*p_r).inside.ptr = "assets/P/look_r/inside_road/frame_2.xpm";
	(*p_r).cor.ptr_l_d = "assets/P/look_r/corner/left_down/frame_2.xpm";
	(*p_r).cor.ptr_l_u = "assets/P/look_r/corner/left_up/frame_2.xpm";
	(*p_r).cor.ptr_r_d = "assets/P/look_r/corner/right_down/frame_2.xpm";
	(*p_r).cor.ptr_r_u = "assets/P/look_r/corner/right_up/frame_2.xpm";
}

void	assign_right_p_side_ftwo(t_places *p_r)
{
	(*p_r).one.ptr_d = "assets/P/look_r/side/one/down/frame_2.xpm";
	(*p_r).one.ptr_l = "assets/P/look_r/side/one/left/frame_2.xpm";
	(*p_r).one.ptr_r = "assets/P/look_r/side/one/right/frame_2.xpm";
	(*p_r).one.ptr_u = "assets/P/look_r/side/one/up/frame_2.xpm";
	(*p_r).three.ptr_d = "assets/P/look_r/side/three/down/frame_2.xpm";
	(*p_r).three.ptr_l = "assets/P/look_r/side/three/right/frame_2.xpm";
	(*p_r).three.ptr_r = "assets/P/look_r/side/three/left/frame_2.xpm";
	(*p_r).three.ptr_u = "assets/P/look_r/side/three/up/frame_2.xpm";
	(*p_r).two.ptr_u_d = "assets/P/look_r/side/two/left_right/frame_2.xpm";
	(*p_r).two.ptr_l_r = "assets/P/look_r/side/two/up_down/frame_2.xpm";
}

void	assign_left_p_middle_corner_ftwo(t_places *p_l)
{
	(*p_l).inside.ptr = "assets/P/look_l/inside_road/frame_2.xpm";
	(*p_l).end.ptr = "assets/P/look_l/gate/frame_2.xpm";
	(*p_l).cor.ptr_l_d = "assets/P/look_l/corner/left_down/frame_2.xpm";
	(*p_l).cor.ptr_l_u = "assets/P/look_l/corner/left_up/frame_2.xpm";
	(*p_l).cor.ptr_r_d = "assets/P/look_l/corner/right_down/frame_2.xpm";
	(*p_l).cor.ptr_r_u = "assets/P/look_l/corner/right_up/frame_2.xpm";
}

void	assign_left_p_side_ftwo(t_places *p_l)
{
	(*p_l).one.ptr_d = "assets/P/look_l/side/one/down/frame_2.xpm";
	(*p_l).one.ptr_l = "assets/P/look_l/side/one/left/frame_2.xpm";
	(*p_l).one.ptr_r = "assets/P/look_l/side/one/right/frame_2.xpm";
	(*p_l).one.ptr_u = "assets/P/look_l/side/one/up/frame_2.xpm";
	(*p_l).three.ptr_d = "assets/P/look_l/side/three/down/frame_2.xpm";
	(*p_l).three.ptr_l = "assets/P/look_l/side/three/right/frame_2.xpm";
	(*p_l).three.ptr_r = "assets/P/look_l/side/three/left/frame_2.xpm";
	(*p_l).three.ptr_u = "assets/P/look_l/side/three/up/frame_2.xpm";
	(*p_l).two.ptr_u_d = "assets/P/look_l/side/two/left_right/frame_2.xpm";
	(*p_l).two.ptr_l_r = "assets/P/look_l/side/two/up_down/frame_2.xpm";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_pointers_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:02:27 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 15:07:44 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_wall_exit_pointer(t_assets *a)
{
	if ((*a).wall.cor.img_l_d == NULL)
		return (0);
	if ((*a).wall.cor.img_l_u == NULL)
		return (0);
	if ((*a).wall.cor.img_r_u == NULL)
		return (0);
	if ((*a).wall.cor.img_r_d == NULL)
		return (0);
	if ((*a).wall.one.img_l == NULL)
		return (0);
	if ((*a).wall.one.img_r == NULL)
		return (0);
	if ((*a).wall.one.img_u == NULL)
		return (0);
	if ((*a).wall.one.img_d == NULL)
		return (0);
	if ((*a).wall.middle.img == NULL)
		return (0);
	if ((*a).exit.f1.middle.img == NULL)
		return (0);
	if ((*a).exit.f2.middle.img == NULL)
		return (0);
	if ((*a).exit.f3.middle.img == NULL)
		return (0);
	return (1);
}

int	check_side_road_pointer(t_places *road)
{
	if ((*road).one.img_u == NULL)
		return (0);
	if ((*road).one.img_r == NULL)
		return (0);
	if ((*road).one.img_d == NULL)
		return (0);
	if ((*road).one.img_l == NULL)
		return (0);
	if ((*road).two.img_u_d == NULL)
		return (0);
	if ((*road).two.img_l_r == NULL)
		return (0);
	if ((*road).three.img_d == NULL)
		return (0);
	if ((*road).three.img_u == NULL)
		return (0);
	if ((*road).three.img_r == NULL)
		return (0);
	if ((*road).three.img_l == NULL)
		return (0);
	return (1);
}

int	check_exit_corner_middle_road_pointer(t_assets *a)
{
	if ((*a).road.cor.img_l_u == NULL)
		return (0);
	if ((*a).road.cor.img_l_d == NULL)
		return (0);
	if ((*a).road.cor.img_r_u == NULL)
		return (0);
	if ((*a).road.cor.img_r_u == NULL)
		return (0);
	if ((*a).road.inside.img == NULL)
		return (0);
	if ((*a).road.inside.img_shad == NULL)
		return (0);
	if ((*a).exit.f4.middle.img == NULL)
		return (0);
	if ((*a).exit.f5.middle.img == NULL)
		return (0);
	return (1);
}

int	check_side_collectible_pointer(t_places *key)
{
	if ((*key).one.img_d == NULL)
		return (0);
	if ((*key).one.img_l == NULL)
		return (0);
	if ((*key).one.img_r == NULL)
		return (0);
	if ((*key).one.img_u == NULL)
		return (0);
	if ((*key).three.img_d == NULL)
		return (0);
	if ((*key).three.img_l == NULL)
		return (0);
	if ((*key).three.img_r == NULL)
		return (0);
	if ((*key).three.img_u == NULL)
		return (0);
	if ((*key).two.img_u_d == NULL)
		return (0);
	if ((*key).two.img_l_r == NULL)
		return (0);
	return (1);
}

int	check_mid_cor_coll_pointer(t_places *key)
{
	if ((*key).middle.img == NULL)
		return (0);
	if ((*key).cor.img_l_d == NULL)
		return (0);
	if ((*key).cor.img_l_u == NULL)
		return (0);
	if ((*key).cor.img_r_d == NULL)
		return (0);
	if ((*key).cor.img_r_u == NULL)
		return (0);
	return (1);
}

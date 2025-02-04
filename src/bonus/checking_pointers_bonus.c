/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_pointers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/00 00:42:22 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/00 00:42:22 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_wall_pointer(t_places *wall)
{
	if ((*wall).cor.img_l_d == NULL)
		return (0);
	else if ((*wall).cor.img_l_u == NULL)
		return (0);
	else if ((*wall).cor.img_r_u == NULL)
		return (0);
	else if ((*wall).cor.img_r_d == NULL)
		return (0);
	else if ((*wall).one.img_l == NULL)
		return (0);
	else if ((*wall).one.img_r == NULL)
		return (0);
	else if ((*wall).one.img_u == NULL)
		return (0);
	else if ((*wall).one.img_d == NULL)
		return (0);
	else if ((*wall).middle.img == NULL)
		return (0);
	else
		return (1);
}

int	check_side_road_pointer(t_places *road)
{
	if ((*road).one.img_u == NULL)
		return (0);
	else if ((*road).one.img_r == NULL)
		return (0);
	else if ((*road).one.img_d == NULL)
		return (0);
	else if ((*road).one.img_l == NULL)
		return (0);
	else if ((*road).two.img_u_d == NULL)
		return (0);
	else if ((*road).two.img_l_r == NULL)
		return (0);
	else if ((*road).three.img_d == NULL)
		return (0);
	else if ((*road).three.img_u == NULL)
		return (0);
	else if ((*road).three.img_r == NULL)
		return (0);
	else if ((*road).three.img_l == NULL)
		return (0);
	else
		return (1);
}

int	check_corner_middle_road_pointer(t_places *road)
{
	if ((*road).cor.img_l_u == NULL)
		return (0);
	else if ((*road).cor.img_l_d == NULL)
		return (0);
	else if ((*road).cor.img_r_u == NULL)
		return (0);
	else if ((*road).cor.img_r_u == NULL)
		return (0);
	else if ((*road).inside.img == NULL)
		return (0);
	else if ((*road).inside.img_shad == NULL)
		return (0);
	else
		return (1);
}

int	check_side_collectible_pointer(t_places *key)
{
	if ((*key).one.img_d == NULL)
		return (0);
	else if ((*key).one.img_l == NULL)
		return (0);
	else if ((*key).one.img_r == NULL)
		return (0);
	else if ((*key).one.img_u == NULL)
		return (0);
	else if ((*key).three.img_d == NULL)
		return (0);
	else if ((*key).three.img_l == NULL)
		return (0);
	else if ((*key).three.img_r == NULL)
		return (0);
	else if ((*key).three.img_u == NULL)
		return (0);
	else if ((*key).two.img_u_d == NULL)
		return (0);
	else if ((*key).two.img_l_r == NULL)
		return (0);
	else
		return (1);
}

int	check_mid_cor_coll_exit_pointer(t_assets *a)
{
	if ((*a).exit.middle.img == NULL)
		return (0);
	else if ((*a).key.middle.img == NULL)
		return (0);
	else if ((*a).key.cor.img_l_d == NULL)
		return (0);
	else if ((*a).key.cor.img_l_u == NULL)
		return (0);
	else if ((*a).key.cor.img_r_d == NULL)
		return (0);
	else if ((*a).key.cor.img_r_u == NULL)
		return (0);
	else
		return (1);
}

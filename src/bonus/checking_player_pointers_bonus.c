/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_player_pointers_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:59:32 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 14:47:01 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_r_p_middle_corner_pointer(t_places *p_r)
{
	if ((*p_r).end.img == NULL)
		return (0);
	else if ((*p_r).inside.img == NULL)
		return (0);
	else if ((*p_r).cor.img_l_d == NULL)
		return (0);
	else if ((*p_r).cor.img_l_u == NULL)
		return (0);
	else if ((*p_r).cor.img_r_d == NULL)
		return (0);
	else if ((*p_r).cor.img_r_u == NULL)
		return (0);
	else
		return (1);
}

int	check_r_p_side_pointer(t_places *p_r)
{
	if ((*p_r).one.img_d == NULL)
		return (0);
	else if ((*p_r).one.img_l == NULL)
		return (0);
	else if ((*p_r).one.img_r == NULL)
		return (0);
	else if ((*p_r).one.img_u == NULL)
		return (0);
	else if ((*p_r).three.img_d == NULL)
		return (0);
	else if ((*p_r).three.img_l == NULL)
		return (0);
	else if ((*p_r).three.img_r == NULL)
		return (0);
	else if ((*p_r).three.img_u == NULL)
		return (0);
	else if ((*p_r).two.img_u_d == NULL)
		return (0);
	else if ((*p_r).two.img_l_r == NULL)
		return (0);
	else
		return (1);
}

int	check_l_p_middle_corner_pointer(t_places *p_l)
{
	if ((*p_l).inside.img == NULL)
		return (0);
	else if ((*p_l).end.img == NULL)
		return (0);
	else if ((*p_l).cor.img_l_d == NULL)
		return (0);
	else if ((*p_l).cor.img_l_u == NULL)
		return (0);
	else if ((*p_l).cor.img_r_d == NULL)
		return (0);
	else if ((*p_l).cor.img_r_u == NULL)
		return (0);
	else
		return (1);
}

int	check_l_p_side_pointer(t_places *p_l)
{
	if ((*p_l).one.img_d == NULL)
		return (0);
	else if ((*p_l).one.img_l == NULL)
		return (0);
	else if ((*p_l).one.img_r == NULL)
		return (0);
	else if ((*p_l).one.img_u == NULL)
		return (0);
	else if ((*p_l).three.img_d == NULL)
		return (0);
	else if ((*p_l).three.img_l == NULL)
		return (0);
	else if ((*p_l).three.img_r == NULL)
		return (0);
	else if ((*p_l).three.img_u == NULL)
		return (0);
	else if ((*p_l).two.img_u_d == NULL)
		return (0);
	else if ((*p_l).two.img_l_r == NULL)
		return (0);
	else
		return (1);
}

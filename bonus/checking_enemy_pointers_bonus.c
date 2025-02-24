/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_enemy_pointers_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:59:32 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/06 05:44:46 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_r_e_middle_corner_pointer(t_places *e_r)
{
	if ((*e_r).inside.img == NULL)
		return (0);
	else if ((*e_r).cor.img_l_d == NULL)
		return (0);
	else if ((*e_r).cor.img_l_u == NULL)
		return (0);
	else if ((*e_r).cor.img_r_d == NULL)
		return (0);
	else if ((*e_r).cor.img_r_u == NULL)
		return (0);
	else
		return (1);
}

int	check_r_e_side_pointer(t_places *e_r)
{
	if ((*e_r).one.img_d == NULL)
		return (0);
	else if ((*e_r).one.img_r == NULL)
		return (0);
	else if ((*e_r).one.img_u == NULL)
		return (0);
	else if ((*e_r).three.img_d == NULL)
		return (0);
	else if ((*e_r).three.img_l == NULL)
		return (0);
	else if ((*e_r).three.img_r == NULL)
		return (0);
	else if ((*e_r).three.img_u == NULL)
		return (0);
	else if ((*e_r).two.img_u_d == NULL)
		return (0);
	else if ((*e_r).two.img_l_r == NULL)
		return (0);
	else
		return (1);
}

int	check_l_e_middle_corner_pointer(t_places *e_l)
{
	if ((*e_l).inside.img == NULL)
		return (0);
	else if ((*e_l).cor.img_l_d == NULL)
		return (0);
	else if ((*e_l).cor.img_l_u == NULL)
		return (0);
	else if ((*e_l).cor.img_r_d == NULL)
		return (0);
	else if ((*e_l).cor.img_r_u == NULL)
		return (0);
	else
		return (1);
}

int	check_l_e_side_pointer(t_places *e_l)
{
	if ((*e_l).one.img_d == NULL)
		return (0);
	else if ((*e_l).one.img_l == NULL)
		return (0);
	else if ((*e_l).one.img_r == NULL)
		return (0);
	else if ((*e_l).one.img_u == NULL)
		return (0);
	else if ((*e_l).three.img_d == NULL)
		return (0);
	else if ((*e_l).three.img_l == NULL)
		return (0);
	else if ((*e_l).three.img_r == NULL)
		return (0);
	else if ((*e_l).three.img_u == NULL)
		return (0);
	else if ((*e_l).two.img_u_d == NULL)
		return (0);
	else if ((*e_l).two.img_l_r == NULL)
		return (0);
	else
		return (1);
}

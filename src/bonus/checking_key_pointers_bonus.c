/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_key_pointers_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:01:57 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/06 12:01:58 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	checking_key_pointers(t_assets *pic)
{
	if (check_side_collectible_pointer(&(pic->key.f1)) == 0)
		return (ft_printf("Check the f1 key side ptr!\n"), 0);
	if (check_side_collectible_pointer(&(pic->key.f2)) == 0)
		return (ft_printf("Check the f2 key side ptr!\n"), 0);
	if (check_side_collectible_pointer(&(pic->key.f3)) == 0)
		return (ft_printf("Check the f3 key side ptr!\n"), 0);
	if (check_side_collectible_pointer(&(pic->key.f4)) == 0)
		return (ft_printf("Check the f4 key side ptr!\n"), 0);
	if (check_side_collectible_pointer(&(pic->key.f5)) == 0)
		return (ft_printf("Check the f5 key side ptr!\n"), 0);
	if (check_side_collectible_pointer(&(pic->key.f6)) == 0)
		return (ft_printf("Check the f6 key side ptr!\n"), 0);
	if (check_side_collectible_pointer(&(pic->key.f7)) == 0)
		return (ft_printf("Check the f7 key side ptr!\n"), 0);
	if (check_side_collectible_pointer(&(pic->key.f8)) == 0)
		return (ft_printf("Check the f8 key side ptr!\n"), 0);
	return (checking_rest_key_pointers(pic));
}

int	checking_rest_key_pointers(t_assets *pic)
{
	if (check_mid_cor_coll_pointer(&(pic->key.f1)) == 0)
		return (ft_printf("Check the f1 key cor/mid ptr!\n"), 0);
	if (check_mid_cor_coll_pointer(&(pic->key.f2)) == 0)
		return (ft_printf("Check the f2 key cor/mid ptr!\n"), 0);
	if (check_mid_cor_coll_pointer(&(pic->key.f3)) == 0)
		return (ft_printf("Check the f3 key cor/mid ptr!\n"), 0);
	if (check_mid_cor_coll_pointer(&(pic->key.f4)) == 0)
		return (ft_printf("Check the f4 key cor/mid ptr!\n"), 0);
	if (check_mid_cor_coll_pointer(&(pic->key.f5)) == 0)
		return (ft_printf("Check the f5 key cor/mid ptr!\n"), 0);
	if (check_mid_cor_coll_pointer(&(pic->key.f6)) == 0)
		return (ft_printf("Check the f6 key cor/mid ptr!\n"), 0);
	if (check_mid_cor_coll_pointer(&(pic->key.f7)) == 0)
		return (ft_printf("Check the f7 key cor/mid ptr!\n"), 0);
	if (check_mid_cor_coll_pointer(&(pic->key.f8)) == 0)
		return (ft_printf("Check the f8 key cor/mid ptr!\n"), 0);
	return (checking_enemy_pointers(pic));
}

int	checking_enemy_pointers(t_assets *pic)
{
	if (check_r_e_middle_corner_pointer(&(*pic).e_right.f1) == 0)
		return (ft_printf("Check the f1 right enemy cor/mid ptr!\n"), 0);
	if (check_l_e_middle_corner_pointer(&(*pic).e_left.f1) == 0)
		return (ft_printf("Check the f1 left enemy cor/mid ptr!\n"), 0);
	if (check_r_e_middle_corner_pointer(&(*pic).e_right.f2) == 0)
		return (ft_printf("Check the f2 right enemy cor/mid ptr!\n"), 0);
	if (check_l_e_middle_corner_pointer(&(*pic).e_left.f2) == 0)
		return (ft_printf("Check the f2 left enemy cor/mid ptr!\n"), 0);
	if (check_r_e_middle_corner_pointer(&(*pic).e_right.f3) == 0)
		return (ft_printf("Check the f3 right enemy cor/mid ptr!\n"), 0);
	if (check_l_e_middle_corner_pointer(&(*pic).e_left.f3) == 0)
		return (ft_printf("Check the f3 left enemy cor/mid ptr!\n"), 0);
	if (check_r_e_middle_corner_pointer(&(*pic).e_right.f4) == 0)
		return (ft_printf("Check the f4 right enemy cor/mid ptr!\n"), 0);
	if (check_l_e_middle_corner_pointer(&(*pic).e_left.f4) == 0)
		return (ft_printf("Check the f4 left enemy cor/mid ptr!\n"), 0);
	return (checking_rest_enemy_pointers(pic));
}

int	checking_rest_enemy_pointers(t_assets *pic)
{
	if (check_r_e_side_pointer(&(*pic).e_right.f1) == 0)
		return (ft_printf("Check the f1 right enemy side ptr!\n"), 0);
	if (check_l_e_side_pointer(&(*pic).e_left.f1) == 0)
		return (ft_printf("Check the f1 left enemy side ptr!\n"), 0);
	if (check_r_e_side_pointer(&(*pic).e_right.f2) == 0)
		return (ft_printf("Check the f2 right enemy side ptr!\n"), 0);
	if (check_l_e_side_pointer(&(*pic).e_left.f2) == 0)
		return (ft_printf("Check the f2 left enemy side ptr!\n"), 0);
	if (check_r_e_side_pointer(&(*pic).e_right.f3) == 0)
		return (ft_printf("Check the f3 right enemy side ptr!\n"), 0);
	if (check_l_e_side_pointer(&(*pic).e_left.f3) == 0)
		return (ft_printf("Check the f3 left enemy side ptr!\n"), 0);
	if (check_r_e_side_pointer(&(*pic).e_right.f4) == 0)
		return (ft_printf("Check the f4 right enemy side ptr!\n"), 0);
	if (check_l_e_side_pointer(&(*pic).e_left.f4) == 0)
		return (ft_printf("Check the f4 left enemy side ptr!\n"), 0);
	return (1);
}

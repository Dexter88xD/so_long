/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_key_pointers_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 18:47:25 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	checking_key_pointers(t_assets *pic)
{
    check_side_collectible_pointer(&(pic->key.f1));
    check_mid_cor_coll_exit_pointer(&(pic->key.f1));
    check_side_collectible_pointer(&(pic->key.f2));
    check_mid_cor_coll_exit_pointer(&(pic->key.f2));
    check_side_collectible_pointer(&(pic->key.f3));
    check_mid_cor_coll_exit_pointer(&(pic->key.f3));
    check_side_collectible_pointer(&(pic->key.f4));
    check_mid_cor_coll_exit_pointer(&(pic->key.f4));
    check_side_collectible_pointer(&(pic->key.f5));
    check_mid_cor_coll_exit_pointer(&(pic->key.f5));
    check_side_collectible_pointer(&(pic->key.f6));
    check_mid_cor_coll_exit_pointer(&(pic->key.f6));
    check_side_collectible_pointer(&(pic->key.f7));
    check_mid_cor_coll_exit_pointer(&(pic->key.f7));
    check_side_collectible_pointer(&(pic->key.f8));
    check_mid_cor_coll_exit_pointer(&(pic->key.f8));
}


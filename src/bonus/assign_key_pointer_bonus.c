/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_key_pointer_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:46:58 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 17:50:02 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	checking_key_pointers(t_assets *pic)
{
    if (check_side_collectible_pointer(&(*pic).key.f1) == 0)
	    return (0);
    else if (check_side_collectible_pointer(&(*pic).key.f2) == 0)
        return (0);
    else if (check_side_collectible_pointer(&(*pic).key.f3) == 0)
        return (0);
    else if (check_side_collectible_pointer(&(*pic).key.f4) == 0)
        return (0);
    else if (check_side_collectible_pointer(&(*pic).key.f5) == 0)
        return (0);
    else if (check_side_collectible_pointer(&(*pic).key.f6) == 0)
        return (0);
    else if (check_side_collectible_pointer(&(*pic).key.f7) == 0)
        return (0);
    else if (check_side_collectible_pointer(&(*pic).key.f8) == 0)
        return (0);
    else
        return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_exit_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:21:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/24 16:13:38 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	display_exit(t_cleanup *all)
{
	static int	frame = 0;

	int (i), j;
	i = 0;
	if (frame > 4)
		return (0);
	while (i < all->map->height)
	{
		j = 0;
		while (j < all->map->width)
		{
			if ((all->map->buffer[i][j] == 'E'
				|| all->map->buffer[i][j] == 'e'))
			{
				mlx_put_image_to_window(all->mlx->ptr, all->mlx->win,
					all->exit[frame], j * 32, i * 32);
				frame++;
			}
			j++;
		}
		i++;
	}
	while (i < 1100000000)
		i++;;
	return (0);
}

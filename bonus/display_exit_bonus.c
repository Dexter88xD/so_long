/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_exit_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:21:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/24 18:21:17 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	display_exit(t_cleanup *all)
{
	static int	frame = 0, frame_count = 0;

	int (i), j;
	if (frame > 4)
		return (0);
	if (frame_count++ < EXIT_FRAME_DELAY)
		return (0);
	frame_count = 0;
	i = 0;
	while (i < all->map->height)
	{
		j = 0;
		while (j < all->map->width)
		{
			if (all->map->buffer[i][j] == 'E' || all->map->buffer[i][j] == 'e')
			{
				mlx_put_image_to_window(all->mlx->ptr, all->mlx->win,
					all->exit[frame], j * 32, i * 32);
			}
			j++;
		}
		i++;
	}
	frame++;
	return (0);
}

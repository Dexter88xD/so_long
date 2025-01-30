/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   road_mapping.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 05:18:58 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 05:44:15 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_it(char	**array, int row, int cols, void *mls_ptr)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		a = i *x;
		j = 0;
		b = 0;
		while (j < cols)
		{
			if (array[i][j] == '1')
				which_wall();
			else if (array[i][j] == '0')
				which_road();
			else if (array[i][j] == 'P')
				which_player();
			else if (array[i][j] == 'C')
				which_collectible();
			else if (array[i][j] == 'E')
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_gate, b, a);
			j++;
			b = j * y;
		}
		i++;
	}
}

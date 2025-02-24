/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_map_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:03:11 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 21:50:02 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	which_image(char **array, t_location *dim, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i][(*data).len.j] == 'E')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.exit.f1.middle.img, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j] == '1')
		is_it_wall(data, mlx, dim);
	else if (array[(*data).len.i][(*data).len.j] == '0')
		is_it_road(array, data, mlx);
	else if (array[(*data).len.i][(*data).len.j] == 'P')
		is_it_right_player(array, data, mlx);
	else if (array[(*data).len.i][(*data).len.j] == 'C')
		is_it_collectible(array, data, mlx);
	else if (array[(*data).len.i][(*data).len.j] == 'N')
		is_it_right_enemy(array, data, mlx);
}

void	putting_to_window(char **array, t_location *dim, t_data *data,
		t_ptr mlx)
{
	while ((*data).len.i < (*dim).height)
	{
		(*data).len.a = (*data).len.i * (*data).len.x;
		(*data).len.j = 0;
		(*data).len.b = 0;
		while ((*data).len.j < (*dim).width)
		{
			which_image(array, dim, data, mlx);
			(*data).len.j++;
			(*data).len.b = (*data).len.j * (*data).len.y;
		}
		(*data).len.i++;
	}
}

int	putting_images(char **array, t_location *dim, t_ptr *mlx, t_data *data)
{
	(*data).len.a = 0;
	(*data).len.b = 0;
	(*data).len.i = 0;
	(*data).len.j = 0;
	(*data).len.x = 0;
	(*data).len.y = 0;
	(*data).size.height = (*dim).height * 32;
	(*data).size.width = (*dim).width * 32;
	assigning_paths_pointers(&(*data).pic, (*mlx).ptr, &(*data).len.x,
		&(*data).len.y);
	if (checking_pointers(&(*data).pic, mlx) == 0)
		return (-1);
	(*mlx).win = mlx_new_window((*mlx).ptr, (*data).size.width,
			(*data).size.height, "POP!");
	putting_to_window(array, dim, &(*data), (*mlx));
	return (1);
}

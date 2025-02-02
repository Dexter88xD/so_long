/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:03:11 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/01 19:03:12 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


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
			if (array[(*data).len.i][(*data).len.j] == 'E')
				mlx_put_image_to_window(mlx.ptr, mlx.win,
					(*data).pic.exit.middle.img, (*data).len.b, (*data).len.a);
			else if (array[(*data).len.i][(*data).len.j] == '1')
				is_it_wall(data, mlx, dim);
			else if (array[(*data).len.i][(*data).len.j] == '0')
				is_it_road(array, data, mlx);
			else if (array[(*data).len.i][(*data).len.j] == 'P')
				is_it_right_player(array, data, mlx);
			else if (array[(*data).len.i][(*data).len.j] == 'C')
				is_it_collectible(array, data, mlx);
			(*data).len.j++;
			(*data).len.b = (*data).len.j * (*data).len.y;
		}
		(*data).len.i++;
	}
}
int	putting_to_images_to_window(void *param)
{
	char 		**array;
	t_cleanup	*all;
	t_location 	*dim;
	t_ptr 		*mlx;
	t_data 		*data;

	all = (t_cleanup *)param;
	array = all->map->buffer;
	dim = all->dim;
	mlx = all->mlx;
	data = all->data;
	putting_to_window(array, dim, data, (*mlx));
	return (0);
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
	if (checking_pointers(&(*data).pic) == 0)
		return (ft_printf("Error:\nProbable issue with assets paths!\n"), -1);
	(*mlx).win = mlx_new_window((*mlx).ptr, (*data).size.width,
			(*data).size.height, "POP!");
	putting_to_window(array, dim, &(*data), (*mlx));
	return (1);
}

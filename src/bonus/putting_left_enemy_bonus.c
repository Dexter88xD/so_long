/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_right_player.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:10:19 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/01 17:10:20 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_it_right_enemy_four(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i - 1][(*data).len.j] == '1' && array[(*data).len.i
		+ 1][(*data).len.j] == '1' && array[(*data).len.i][(*data).len.j - 1] != '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.two.img_u_d, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i + 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.two.img_l_r, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i - 1][(*data).len.j] == '1' && array[(*data).len.i
		+ 1][(*data).len.j] == '1' && array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] == '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.inside.img_shad, (*data).len.b, (*data).len.a);
	else
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.inside.img, (*data).len.b, (*data).len.a);
}

void	is_it_right_enemy_three(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] == '1' && array[(*data).len.i + 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.three.img_u, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] != '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] == '1' && array[(*data).len.i + 1][(*data).len.j] == '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.three.img_r, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] == '1' && array[(*data).len.i + 1][(*data).len.j] == '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.three.img_l, (*data).len.b, (*data).len.a);
	else
		is_it_right_enemy_four(array, data, mlx);
}

void	is_it_right_enemy_two(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i + 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.one.img_l, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i + 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.one.img_r, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i + 1][(*data).len.j] == '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.three.img_d, (*data).len.b, (*data).len.a);
	else
		is_it_right_enemy_three(array, data, mlx);
}

void	is_it_right_enemy_one(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i + 1][(*data).len.j] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.cor.img_r_d, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i - 1][(*data).len.j] == '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1' && (array[(*data).len.i][(*data).len.j - 1] != '1'
			|| array[(*data).len.i][(*data).len.j + 1] != '1'))
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.one.img_u, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i + 1][(*data).len.j] == '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i][(*data).len.j - 1] != '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.one.img_d, (*data).len.b, (*data).len.a);
	else
		is_it_right_enemy_two(array, data, mlx);
}

void	is_it_right_enemy(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i - 1][(*data).len.j] == '1' && array[(*data).len.i][(*data).len.j
		- 1] == '1' && array[(*data).len.i][(*data).len.j + 1] != '1'
		&& array[(*data).len.i + 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.cor.img_l_u, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i - 1][(*data).len.j] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.cor.img_r_u, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i + 1][(*data).len.j] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.e_left.cor.img_l_d, (*data).len.b, (*data).len.a);
	else
		is_it_right_enemy_one(array, data, mlx);
}

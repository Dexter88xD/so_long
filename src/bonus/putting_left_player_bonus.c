/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_left_player.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:08:11 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/01 17:08:21 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_it_left_player_four(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i - 1][(*data).len.j] == '1' && array[(*data).len.i
		+ 1][(*data).len.j] == '1' && array[(*data).len.i][(*data).len.j
		- 1] != '1' && array[(*data).len.i][(*data).len.j + 1] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.two.img_u_d, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.two.img_l_r, (*data).len.b, (*data).len.a);
	else
		mlx_put_image_to_window(mlx.ptr, mlx.win, (*data).pic.p_left.inside.img,
			(*data).len.b, (*data).len.a);
}

void	is_it_left_player_three(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] == '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.three.img_u, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] != '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] == '1' && array[(*data).len.i
		+ 1][(*data).len.j] == '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.three.img_r, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] == '1' && array[(*data).len.i
		+ 1][(*data).len.j] == '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.three.img_l, (*data).len.b, (*data).len.a);
	else
		is_it_left_player_four(array, data, mlx);
}

void	is_it_left_player_two(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win, (*data).pic.p_left.one.img_l,
			(*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win, (*data).pic.p_left.one.img_r,
			(*data).len.b, (*data).len.a);
	else if (array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1' && array[(*data).len.i
		+ 1][(*data).len.j] == '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.three.img_d, (*data).len.b, (*data).len.a);
	else
		is_it_left_player_three(array, data, mlx);
}

void	is_it_left_player_one(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i + 1][(*data).len.j] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.cor.img_r_d, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i - 1][(*data).len.j] == '1'
		&& array[(*data).len.i + 1][(*data).len.j] != '1'
		&& (array[(*data).len.i][(*data).len.j - 1] != '1'
			|| array[(*data).len.i][(*data).len.j + 1] != '1'))
		mlx_put_image_to_window(mlx.ptr, mlx.win, (*data).pic.p_left.one.img_u,
			(*data).len.b, (*data).len.a);
	else if (array[(*data).len.i + 1][(*data).len.j] == '1'
		&& array[(*data).len.i - 1][(*data).len.j] != '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win, (*data).pic.p_left.one.img_d,
			(*data).len.b, (*data).len.a);
	else
		is_it_left_player_two(array, data, mlx);
}

void	is_it_left_player(char **array, t_data *data, t_ptr mlx)
{
	if (array[(*data).len.i - 1][(*data).len.j] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.cor.img_l_u, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i - 1][(*data).len.j] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] != '1' && array[(*data).len.i
		+ 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.cor.img_r_u, (*data).len.b, (*data).len.a);
	else if (array[(*data).len.i + 1][(*data).len.j] == '1'
		&& array[(*data).len.i][(*data).len.j - 1] == '1'
		&& array[(*data).len.i][(*data).len.j + 1] != '1' && array[(*data).len.i
		- 1][(*data).len.j] != '1')
		mlx_put_image_to_window(mlx.ptr, mlx.win,
			(*data).pic.p_left.cor.img_l_d, (*data).len.b, (*data).len.a);
	else
		is_it_left_player_one(array, data, mlx);
}

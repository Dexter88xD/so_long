/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting_animation_background_bonus.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 20:29:50 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/25 15:21:44 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	load_frames(t_cleanup *all)
{
	all->mid_keys[0] = all->data->pic.key.f1.middle.img;
	all->mid_keys[1] = all->data->pic.key.f2.middle.img;
	all->mid_keys[2] = all->data->pic.key.f3.middle.img;
	all->mid_keys[3] = all->data->pic.key.f4.middle.img;
	all->mid_keys[4] = all->data->pic.key.f5.middle.img;
	all->mid_keys[5] = all->data->pic.key.f6.middle.img;
	all->mid_keys[6] = all->data->pic.key.f7.middle.img;
	all->mid_keys[7] = all->data->pic.key.f8.middle.img;
	all->enemy[0] = all->data->pic.e_right.f1.inside.img;
	all->enemy[1] = all->data->pic.e_right.f2.inside.img;
	all->enemy[2] = all->data->pic.e_right.f3.inside.img;
	all->enemy[3] = all->data->pic.e_right.f4.inside.img;
	all->exit[0] = all->data->pic.exit.f1.middle.img;
	all->exit[1] = all->data->pic.exit.f2.middle.img;
	all->exit[2] = all->data->pic.exit.f3.middle.img;
	all->exit[3] = all->data->pic.exit.f4.middle.img;
	all->exit[4] = all->data->pic.exit.f5.middle.img;
}

int	assign_point_moves(t_assets *moves, void *mlx_ptr)
{
	int	x;
	int	y;

	moves->moves.ptr = "assets/M/background.xpm";
	moves->moves.img = mlx_xpm_file_to_image(mlx_ptr, moves->moves.ptr, &x, &y);
	return (1);
}

void	destroy_moves_images(t_ptr mlx, t_data *data)
{
	if ((*data).pic.moves.img)
		mlx_destroy_image(mlx.ptr, (*data).pic.moves.img);
}

void	which_char(t_cleanup *all, int i, int j)
{
	if (all->mc->coll == all->map->collectible)
		mlx_loop_hook(all->mlx->ptr, display_exit, all);
	if (all->map->buffer[i][j] == 'C')
		mlx_put_image_to_window(all->mlx->ptr, all->mlx->win,
			all->mid_keys[all->key_frame], all->data->len.b, all->data->len.a);
	if (all->map->buffer[i][j] == 'N')
		mlx_put_image_to_window(all->mlx->ptr, all->mlx->win,
			all->enemy[all->enemy_frame], all->data->len.b, all->data->len.a);
}

int	animation_frames(void *param)
{
	static int	frame_count = 0;
	t_cleanup	*all;
	int			i;
	int			j;

	all = (t_cleanup *)param;
	if (frame_count++ < FRAME_DELAY)
		return (0);
	frame_count = 0;
	all->key_frame = (all->key_frame + 1) % 8;
	all->enemy_frame = (all->enemy_frame + 1) % 4;
	i = 0;
	while (i < all->map->height)
	{
		j = 0;
		while (j < all->map->width)
		{
			all->data->len.a = i * 32;
			all->data->len.b = j * 32;
			which_char(all, i, j);
			j++;
		}
		i++;
	}
	return (0);
}

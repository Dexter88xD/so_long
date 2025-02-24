/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_player_how_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:09:17 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/22 22:28:23 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	putting_moves(t_ptr *mlx, t_move_coll *mc, t_assets *moves)
{
	char	*nbr;
	char	*mv_nbr;

	mv_nbr = ft_itoa(mc->move);
	nbr = ft_strjoin("Move Number: ", mv_nbr);
	mlx_put_image_to_window(mlx->ptr, mlx->win, moves->moves.img, 0, 0);
	mlx_string_put(mlx->ptr, mlx->win, 10, 10, 0xFFFFFF, nbr);
	free(nbr);
	free(mv_nbr);
	return (1);
}

void	move_up_how(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	if (map->buffer[map->player.height - 1][map->player.width] == 'C')
		mc->coll++;
	if (map->buffer[map->player.height][map->player.width] == 'e')
	{
		map->buffer[map->player.height][map->player.width] = 'E';
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.exit.f1.middle.img, (*data).len.b, (*data).len.a);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		is_it_road(map->buffer, data, *(mlx));
	}
	map->buffer[map->player.height - 1][map->player.width] = 'P';
	map->player.height--;
	update_position_data(data, map);
	is_it_right_player(map->buffer, data, *(mlx));
	++mc->move;
	putting_moves(mlx, mc, &data->pic);
}

void	move_down_how(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	if (map->buffer[map->player.height + 1][map->player.width] == 'C')
		mc->coll++;
	if (map->buffer[map->player.height][map->player.width] == 'e')
	{
		map->buffer[map->player.height][map->player.width] = 'E';
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.exit.f1.middle.img, (*data).len.b, (*data).len.a);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		is_it_road(map->buffer, data, *(mlx));
	}
	map->buffer[map->player.height + 1][map->player.width] = 'P';
	map->player.height++;
	update_position_data(data, map);
	is_it_right_player(map->buffer, data, *(mlx));
	++mc->move;
	putting_moves(mlx, mc, &data->pic);
}

void	move_left_how(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	if (map->buffer[map->player.height][map->player.width - 1] == 'C')
		mc->coll++;
	if (map->buffer[map->player.height][map->player.width] == 'e')
	{
		map->buffer[map->player.height][map->player.width] = 'E';
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.exit.f1.middle.img, (*data).len.b, (*data).len.a);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		is_it_road(map->buffer, data, *(mlx));
	}
	map->buffer[map->player.height][map->player.width - 1] = 'P';
	map->player.width--;
	update_position_data(data, map);
	is_it_left_player(map->buffer, data, *(mlx));
	++mc->move;
	putting_moves(mlx, mc, &data->pic);
}

void	move_right_how(t_map *map, t_move_coll *mc, t_data *data, t_ptr *mlx)
{
	if (map->buffer[map->player.height][map->player.width + 1] == 'C')
		mc->coll++;
	if (map->buffer[map->player.height][map->player.width] == 'e')
	{
		map->buffer[map->player.height][map->player.width] = 'E';
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			(*data).pic.exit.f1.middle.img, (*data).len.b, (*data).len.a);
	}
	else
	{
		map->buffer[map->player.height][map->player.width] = '0';
		is_it_road(map->buffer, data, *(mlx));
	}
	map->buffer[map->player.height][map->player.width + 1] = 'P';
	map->player.width++;
	update_position_data(data, map);
	is_it_right_player(map->buffer, data, *(mlx));
	++mc->move;
	putting_moves(mlx, mc, &data->pic);
}

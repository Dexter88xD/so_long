/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:11:35 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/26 00:09:37 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include "mlx.h"
# include <X11/keysym.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_ptr
{
	void			*ptr;
	void			*win;
}					t_ptr;

typedef struct s_num
{
	int				coll;
	int				exit;
}					t_num;

typedef struct s_location
{
	int				width;
	int				height;
}					t_location;

typedef struct s_map
{
	char			**buffer;
	int				height;
	int				width;
	int				collectible;
	int				exit;
	t_location		player;
}					t_map;

typedef struct s_dim
{
	int				i;
	int				j;
	int				a;
	int				b;
	int				x;
	int				y;
}					t_dim;

typedef struct s_inside_wall
{
	void			*img;
	char			*ptr;
	void			*img_shad;
	char			*ptr_shad;
}					t_inside_wall;

typedef struct s_middle
{
	void			*img;
	char			*ptr;
}					t_middle;

typedef struct s_end
{
	void			*img;
	char			*ptr;
}					t_end;

typedef struct s_side_one
{
	void			*img_d;
	char			*ptr_d;
	void			*img_l;
	char			*ptr_l;
	void			*img_r;
	char			*ptr_r;
	void			*img_u;
	char			*ptr_u;
}					t_side_one;

typedef struct s_side_two
{
	void			*img_l_r;
	char			*ptr_l_r;
	void			*img_u_d;
	char			*ptr_u_d;
}					t_side_two;

typedef struct s_side_three
{
	void			*img_d;
	char			*ptr_d;
	void			*img_l;
	char			*ptr_l;
	void			*img_r;
	char			*ptr_r;
	void			*img_u;
	char			*ptr_u;
}					t_side_three;

typedef struct s_corner
{
	void			*img_l_d;
	char			*ptr_l_d;
	void			*img_l_u;
	char			*ptr_l_u;
	void			*img_r_d;
	char			*ptr_r_d;
	void			*img_r_u;
	char			*ptr_r_u;
}					t_corner;

typedef struct s_places
{
	t_inside_wall	inside;
	t_middle		middle;
	t_side_one		one;
	t_side_two		two;
	t_side_three	three;
	t_corner		cor;
	t_end			end;

}					t_places;

typedef struct s_assets
{
	t_places		wall;
	t_places		road;
	t_places		key;
	t_places		exit;
	t_places		e_left;
	t_places		e_right;
	t_places		p_left;
	t_places		p_right;
}					t_assets;

typedef struct s_data
{
	t_dim			len;
	t_location		size;
	t_assets		pic;
}					t_data;

typedef struct s_move_coll
{
	int				coll;
	int				move;
}					t_move_coll;

typedef struct s_cleanup
{
	t_ptr			*mlx;
	t_data			*data;
	t_map			*map;
	t_location		*dim;
	t_move_coll		*mc;
}					t_cleanup;

int					check_ber(char *str);
int					how_many_lines(char *path);
int					initialise_nd_mapping(int fd, t_num *count, t_map *map,
						char *map_path);
int					checking_map(t_map *map);
int					recopying_map(char *map_path, t_map *map);
int					mapping(int fd, t_num *count, t_map *map);
int					checking_wall(int x, int y, char **buffer);
int					checking_length(int y, int *x, char **buffer);
int					copying_map(int fd, int *height, char **buffer);
int					checking_path(t_map *map, t_num *count, int y, int x);
int					checking_char(int x, int y, char **buffer);
int					checking_collectibles(int x, int y, char **buffer);
int					checking_exit(int x, int y, char **buffer);
int					checking_player(int x, int y, t_location *location,
						char **buffer);
int					putting_map(t_map *map);
int					putting_images(char **array, t_location *dim, t_ptr *mlx,
						t_data *data);
int					close_window(void *param);
void				buffer_freeing(t_map *map);
int					capture_keys(t_ptr *mlx, t_data *data, t_map *map,
						t_location *dim);

void				start_destroying(t_ptr mlx, t_data *data);
void				destroy_exit_side_wall_images(t_ptr mlx, t_data *data);
void				destroy_corner_wall_road_images(t_ptr mlx, t_data *data);
void				destroy_side_mid_road_images(t_ptr mlx, t_data *data);
void				destroy_rest_player_r_images(t_ptr mlx, t_data *data);
void				destroy_player_r_images(t_ptr mlx, t_data *data);
void				destroy_rest_player_l_images(t_ptr mlx, t_data *data);
void				destroy_player_l_images(t_ptr mlx, t_data *data);
void				destroy_key_images(t_ptr mlx, t_data *data);
void				destroy_rest_key_images(t_ptr mlx, t_data *data);

void				assign_wall_exit(t_places *wall, t_places *exit);
void				assign_road(t_places *road);
void				assign_collectible(t_places *key);
void				assign_right_p_middle_corner(t_places *p_r);
void				assign_right_p_side(t_places *p_r);
void				assign_left_p_middle_corner(t_places *p_l);
void				assign_left_p_side(t_places *p_l);

void				point_wall(t_places *wall, void *mlx_ptr, int *x, int *y);
void				point_side_road(t_places *road, void *mlx_ptr, int *x,
						int *y);
void				point_corner_middle_road(t_places *road, void *mlx_ptr,
						int *x, int *y);
void				point_side_collectible(t_places *key, void *mlx_ptr, int *x,
						int *y);
void				point_mid_cor_coll_exit(t_assets *a, void *mlx_ptr, int *x,
						int *y);
void				point_r_p_middle_corner(t_places *p_r, void *mlx_ptr,
						int *x, int *y);
void				point_r_p_side(t_places *p_r, void *mlx_ptr, int *x,
						int *y);
void				point_l_p_middle_corner(t_places *p_l, void *mlx_ptr,
						int *x, int *y);
void				point_l_p_side(t_places *p_l, void *mlx_ptr, int *x,
						int *y);
void				assigning_paths_pointers(t_assets *pic, void *mlx_ptr,
						int *x, int *y);

void				is_it_wall(t_data *data, t_ptr mlx, t_location *dim);
void				is_it_rest_wall(t_data *data, t_ptr mlx, t_location *dim);

void				is_it_road(char **array, t_data *data, t_ptr mlx);
void				is_it_rest_road_one(char **array, t_data *data, t_ptr mlx);
void				is_it_rest_road_two(char **array, t_data *data, t_ptr mlx);
void				is_it_rest_road_three(char **array, t_data *data,
						t_ptr mlx);
void				is_it_rest_road_four(char **array, t_data *data, t_ptr mlx);

void				is_it_right_player(char **array, t_data *data, t_ptr mlx);
void				is_it_right_player_one(char **array, t_data *data,
						t_ptr mlx);
void				is_it_right_player_two(char **array, t_data *data,
						t_ptr mlx);
void				is_it_right_player_three(char **array, t_data *data,
						t_ptr mlx);
void				is_it_right_player_four(char **array, t_data *data,
						t_ptr mlx);

void				is_it_left_player(char **array, t_data *data, t_ptr mlx);
void				is_it_left_player_one(char **array, t_data *data,
						t_ptr mlx);
void				is_it_left_player_two(char **array, t_data *data,
						t_ptr mlx);
void				is_it_left_player_three(char **array, t_data *data,
						t_ptr mlx);
void				is_it_left_player_four(char **array, t_data *data,
						t_ptr mlx);

void				is_it_collectible(char **array, t_data *data, t_ptr mlx);
void				is_it_collectible_one(char **array, t_data *data,
						t_ptr mlx);
void				is_it_collectible_two(char **array, t_data *data,
						t_ptr mlx);
void				is_it_collectible_three(char **array, t_data *data,
						t_ptr mlx);
void				is_it_collectible_four(char **array, t_data *data,
						t_ptr mlx);

void				move_up(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_down(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_left(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_right(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_up_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_down_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_left_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_right_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				update_position_data(t_data *data, t_map *map);

#endif

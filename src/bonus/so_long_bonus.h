/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:11:35 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/07 22:08:58 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
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

typedef struct s_frames
{
	t_places		f1;
	t_places		f2;
	t_places		f3;
	t_places		f4;
	t_places		f5;
	t_places		f6;
	t_places		f7;
	t_places		f8;
}					t_frames;

typedef struct s_assets
{
	t_places		wall;
	t_places		road;
	t_frames		exit;
	t_frames		key;
	t_frames		e_left;
	t_frames		e_right;
	t_frames		p_left;
	t_frames		p_right;
	t_end			moves;
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
	void			*mid_keys[8];
	void			*enemy[4];
	void			*exit[5];
	t_ptr			*mlx;
	t_data			*data;
	t_map			*map;
	t_location		*dim;
	t_move_coll		*mc;
	int				key_frame;
	int				enemy_frame;
	int				exit_frame;
}					t_cleanup;

void				which_char(t_cleanup *all, int i, int j);
int					check_ber(char *str);
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
int					assign_point_check_moves(t_assets *moves, void *mlx_ptr);
int					putting_moves(t_ptr *mlx, t_move_coll *mc, t_assets *moves);
void				which_image(char **array, t_location *dim, t_data *data,
						t_ptr mlx);
void				load_frames(t_cleanup *all);
int					animation_frames(void *param);
int					close_window(void *param);
void				buffer_freeing(t_map *map);
int					capture_keys(t_ptr *mlx, t_data *data, t_map *map,
						t_location *dim);

void				start_destroying(t_ptr mlx, t_data *data);
void				destroy_moves_images(t_ptr mlx, t_data *data);
void				destroy_side_wall_images(t_ptr mlx, t_data *data);
void				destroy_exit_images(t_ptr mlx, t_data *data);
void				destroy_corner_wall_road_images(t_ptr mlx, t_data *data);
void				destroy_side_mid_road_images(t_ptr mlx, t_data *data);
void				destroy_player_r_images(t_ptr mlx, t_data *data);
void				destroy_player_r_1_images(t_ptr mlx, t_data *data);
void				destroy_player_r_2_images(t_ptr mlx, t_data *data);
void				destroy_player_r_3_images(t_ptr mlx, t_data *data);
void				destroy_player_r_4_images(t_ptr mlx, t_data *data);
void				destroy_player_r_5_images(t_ptr mlx, t_data *data);
void				destroy_player_r_6_images(t_ptr mlx, t_data *data);
void				destroy_player_r_7_images(t_ptr mlx, t_data *data);
void				destroy_player_l_images(t_ptr mlx, t_data *data);
void				destroy_player_l_1_images(t_ptr mlx, t_data *data);
void				destroy_player_l_2_images(t_ptr mlx, t_data *data);
void				destroy_player_l_3_images(t_ptr mlx, t_data *data);
void				destroy_player_l_4_images(t_ptr mlx, t_data *data);
void				destroy_player_l_5_images(t_ptr mlx, t_data *data);
void				destroy_player_l_6_images(t_ptr mlx, t_data *data);
void				destroy_player_l_7_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_1_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_2_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_3_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_4_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_5_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_6_images(t_ptr mlx, t_data *data);
void				destroy_enemy_r_7_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_1_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_2_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_3_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_4_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_5_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_6_images(t_ptr mlx, t_data *data);
void				destroy_enemy_l_7_images(t_ptr mlx, t_data *data);
void				destroy_key_images(t_ptr mlx, t_data *data);
void				destroy_key_1_images(t_ptr mlx, t_data *data);
void				destroy_key_2_images(t_ptr mlx, t_data *data);
void				destroy_key_3_images(t_ptr mlx, t_data *data);
void				destroy_key_4_images(t_ptr mlx, t_data *data);
void				destroy_key_5_images(t_ptr mlx, t_data *data);
void				destroy_key_6_images(t_ptr mlx, t_data *data);
void				destroy_key_7_images(t_ptr mlx, t_data *data);
void				destroy_key_8_images(t_ptr mlx, t_data *data);
void				destroy_key_9_images(t_ptr mlx, t_data *data);
void				destroy_key_10_images(t_ptr mlx, t_data *data);
void				destroy_key_11_images(t_ptr mlx, t_data *data);
void				destroy_key_12_images(t_ptr mlx, t_data *data);
void				destroy_key_13_images(t_ptr mlx, t_data *data);
void				destroy_key_14_images(t_ptr mlx, t_data *data);
void				destroy_key_15_images(t_ptr mlx, t_data *data);

void				assign_wall_exit(t_places *wall, t_frames *exit);
void				assign_road(t_places *road);
void				assign_collectible_fone(t_places *key);
void				assign_collectible_ftwo(t_places *key);
void				assign_collectible_fthree(t_places *key);
void				assign_collectible_ffour(t_places *key);
void				assign_collectible_ffive(t_places *key);
void				assign_collectible_fsix(t_places *key);
void				assign_collectible_fseven(t_places *key);
void				assign_collectible_feight(t_places *key);
void				assign_right_p_middle_corner_fone(t_places *p_r);
void				assign_right_p_side_fone(t_places *p_r);
void				assign_left_p_middle_corner_fone(t_places *p_l);
void				assign_left_p_side_fone(t_places *p_l);
void				assign_right_p_middle_corner_ftwo(t_places *p_r);
void				assign_right_p_side_ftwo(t_places *p_r);
void				assign_left_p_middle_corner_ftwo(t_places *p_l);
void				assign_left_p_side_ftwo(t_places *p_l);
void				assign_right_p_middle_corner_fthree(t_places *p_r);
void				assign_right_p_side_fthree(t_places *p_r);
void				assign_left_p_middle_corner_fthree(t_places *p_l);
void				assign_left_p_side_fthree(t_places *p_l);
void				assign_right_p_middle_corner_ffour(t_places *p_r);
void				assign_right_p_side_ffour(t_places *p_r);
void				assign_left_p_middle_corner_ffour(t_places *p_l);
void				assign_left_p_side_ffour(t_places *p_l);

void				assign_right_e_middle_corner_fone(t_places *e_r);
void				assign_right_e_side_fone(t_places *e_r);
void				assign_left_e_middle_corner_fone(t_places *e_l);
void				assign_left_e_side_fone(t_places *e_l);
void				assign_right_e_middle_corner_ftwo(t_places *e_r);
void				assign_right_e_side_ftwo(t_places *e_r);
void				assign_left_e_middle_corner_ftwo(t_places *e_l);
void				assign_left_e_side_ftwo(t_places *e_l);
void				assign_right_e_middle_corner_fthree(t_places *e_r);
void				assign_right_e_side_fthree(t_places *e_r);
void				assign_left_e_middle_corner_fthree(t_places *e_l);
void				assign_left_e_side_fthree(t_places *e_l);
void				assign_right_e_middle_corner_ffour(t_places *e_r);
void				assign_right_e_side_ffour(t_places *e_r);
void				assign_left_e_middle_corner_ffour(t_places *e_l);
void				assign_left_e_side_ffour(t_places *e_l);

void				assign_enemy(t_assets *pic, void *mlx_ptr, int *x, int *y);
void				point_enemy(t_assets *pic, void *mlx_ptr, int *x, int *y);

void				point_wall_exit(t_assets *a, void *mlx_ptr, int *x, int *y);
void				point_side_road_exit(t_assets *a, void *mlx_ptr, int *x,
						int *y);
void				point_corner_middle_road(t_places *road, void *mlx_ptr,
						int *x, int *y);
void				point_side_collectible(t_places *key, void *mlx_ptr, int *x,
						int *y);
void				point_mid_cor_coll(t_places *key, void *mlx_ptr, int *x,
						int *y);
void				point_r_p_middle_corner(t_places *p_r, void *mlx_ptr,
						int *x, int *y);
void				point_r_p_side(t_places *p_r, void *mlx_ptr, int *x,
						int *y);
void				point_l_p_middle_corner(t_places *p_l, void *mlx_ptr,
						int *x, int *y);
void				point_l_p_side(t_places *p_l, void *mlx_ptr, int *x,
						int *y);
void				point_r_e_middle_corner(t_places *e_r, void *mlx_ptr,
						int *x, int *y);
void				point_r_e_side(t_places *e_r, void *mlx_ptr, int *x,
						int *y);
void				point_l_e_middle_corner(t_places *e_l, void *mlx_ptr,
						int *x, int *y);
void				point_l_e_side(t_places *e_l, void *mlx_ptr, int *x,
						int *y);
void				assigning_paths_pointers(t_assets *pic, void *mlx_ptr,
						int *x, int *y);
void				pointing_path_pointers(t_assets *pic, void *mlx_ptr, int *x,
						int *y);

int					check_wall_exit_pointer(t_assets *a);
int					check_side_road_pointer(t_places *road);
int					check_exit_corner_middle_road_pointer(t_assets *a);
int					check_side_collectible_pointer(t_places *key);
int					check_mid_cor_coll_pointer(t_places *key);
int					check_r_p_middle_corner_pointer(t_places *p_r);
int					check_r_p_side_pointer(t_places *p_r);
int					check_l_p_middle_corner_pointer(t_places *p_l);
int					check_l_p_side_pointer(t_places *p_l);

int					check_r_e_middle_corner_pointer(t_places *e_r);
int					check_r_e_side_pointer(t_places *e_r);
int					check_l_e_middle_corner_pointer(t_places *e_l);
int					check_l_e_side_pointer(t_places *e_l);

int					checking_pointers(t_assets *pic, t_ptr *mlx);
int					checking_rest_pointers(t_assets *pic);
int					checking_key_pointers(t_assets *pic);
int					checking_rest_key_pointers(t_assets *pic);
int					checking_enemy_pointers(t_assets *pic);
int					checking_rest_enemy_pointers(t_assets *pic);
void				assig_point_key_paths_pointers(t_assets *pic, void *mlx_ptr,
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

void				is_it_right_enemy(char **array, t_data *data, t_ptr mlx);
void				is_it_right_enemy_one(char **array, t_data *data,
						t_ptr mlx);
void				is_it_right_enemy_two(char **array, t_data *data,
						t_ptr mlx);
void				is_it_right_enemy_three(char **array, t_data *data,
						t_ptr mlx);
void				is_it_right_enemy_four(char **array, t_data *data,
						t_ptr mlx);

void				is_it_left_enemy(char **array, t_data *data, t_ptr mlx);
void				is_it_left_enemy_one(char **array, t_data *data, t_ptr mlx);
void				is_it_left_enemy_two(char **array, t_data *data, t_ptr mlx);
void				is_it_left_enemy_three(char **array, t_data *data,
						t_ptr mlx);
void				is_it_left_enemy_four(char **array, t_data *data,
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

void				move_up(t_cleanup *all);
void				move_down(t_cleanup *all);
void				move_left(t_cleanup *all);
void				move_right(t_cleanup *all);
void				move_up_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_down_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_left_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_right_exit(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_up_how(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_down_how(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_left_how(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
void				move_right_how(t_map *map, t_move_coll *mc, t_data *data,
						t_ptr *mlx);
int					display_exit(t_cleanup *all);
void				update_position_data(t_data *data, t_map *map);

#endif

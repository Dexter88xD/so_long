/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:11:35 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 05:37:08 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../include/ft_libc/ft_printf/ft_printf.h"
# include "../include/ft_libc/get_next_line/get_next_line.h"
# include "../lib/minilibx-linux/mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

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
int					putting_images(char **array, int rows, int cols,
						void *mlx_ptr);

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

int					check_wall_pointer(t_places *wall);
int					check_side_road_pointer(t_places *road);
int					check_corner_middle_road_pointer(t_places *road);
int					check_side_collectible_pointer(t_places *key);
int					check_mid_cor_coll_exit_pointer(t_assets *a);
int					check_r_p_middle_corner_pointer(t_places *p_r);
int					check_r_p_side_pointer(t_places *p_r);
int					check_l_p_middle_corner_pointer(t_places *p_l);
int					check_l_p_side_pointer(t_places *p_l);
int					checking_pointers(t_assets *pic);
#endif

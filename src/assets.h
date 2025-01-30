/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assets.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:17:29 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 11:17:30 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSETS_H
# define ASSETS_H

# include "so_long.h"

typedef struct s_places
{
	t_inside_wall	inside;
	t_middle		middle;
	t_side_one		one;
	t_side_two		two;
	t_side_three	three;
	t_corner		cor;

}					t_places;

typedef struct s_inside_wall
{
	void			*img;
	char			*ptr;
	void			*img_shadows;
	char			*ptr_shadows;
}					t_inside_wall;

typedef struct s_middle
{
	void			*img;
	char			*ptr;
}					t_middle;

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

#endif
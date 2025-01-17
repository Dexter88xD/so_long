/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:11:35 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/17 11:45:20 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# include "../include/ft_libc/get_next_line/get_next_line.h"
# include "../include/ft_libc/ft_printf/ft_printf.h"

int	mapping(int fd, int *height, int *width, char **buffer);
int	copying_map(int fd, int *height, char **buffer);
int	checking_length(int y, int *x, char **buffer);
int	checking_map(int *x, int *y, char **buffer);
int	checking_player(int x, int y, char **buffer);
int	checking_exit(int x, int y, char **buffer);
int	checking_wall(int x, int y, char **buffer);
int	checking_collectibles(int x, int y, char **buffer);

#endif

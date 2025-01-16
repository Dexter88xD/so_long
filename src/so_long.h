/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:11:35 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/16 11:20:07 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SO_LONG_H
# define SO_LONG_H

#include "../include/ft_libc/get_next_line/get_next_line.h"
#include "../include/ft_libc/ft_printf/ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int checking_map(int len, char **buffer);
int copying_map(int fd, char **buffer);

# endif

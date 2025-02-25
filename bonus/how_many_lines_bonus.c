/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_many_lines_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:08:10 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/22 22:10:35 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	how_many_lines(char *path)
{
	int		fd;
	int		num;
	char	*lines;

	fd = open(path, O_RDWR);
	num = 0;
	lines = ft_strdup("");
	while (lines)
	{
		free(lines);
		lines = get_next_line(fd);
		num++;
	}
	free(lines);
	close (fd);
	return (num);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:57 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/16 11:16:47 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	copying_map(int fd, char **buffer)
{
	int	i;

	i = 0;
	buffer[i] = get_next_line(fd);
	while (buffer[i] != NULL)
	{
		printf("line %d: %s", i + 1, buffer[i]);
		i++;
		buffer[i] = get_next_line(fd);
	}
	return (i);
}

int	checking_map(int len, char **buffer)
{
	int	i;
	int	j;
	int	l;


	if (len == 0)
		return (0);
	i = 0;
	l = 0;
	while (buffer[l][i] != '\n')
		i++;
	l++;
	while (buffer[l] != NULL)
	{
		j = i;
		if (i != j)
			return (0);
		i = 0;
		while (buffer[l][i] != '\n' && buffer[l][i] != '\0')
			i++;
		l++;
	}
	return (1);
}

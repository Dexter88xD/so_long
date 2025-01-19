/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:17:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/19 20:08:44 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	int			fd;
	int			check;
	int	c;
	int	e;
	t_map		map;

	fd = open("../maps/map1.ber", O_RDWR);
	if (fd == -1)
		return (printf("error openning file!\n"), -1);
	map.buffer = (char **)malloc(BUFFER_SIZE * sizeof(t_map *));
	if (!map.buffer)
		return (free(map.buffer), -1);
	map.width = 0;
	map.height = 0;
	check = mapping(fd, &c, &e, &map);
	if (map.collectible == c && e == 1 && check == 1)
		ft_printf("The Map is valid with %d collectibles!\n", map.collectible);
	else
		ft_printf("The Map is NOT valid!\n");
	map.height = 0;
	while (map.buffer[map.height] != NULL)
	{
		free(map.buffer[map.height]);
		map.height++;
	}
	return (free(map.buffer), 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:17:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/20 09:36:11 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	buffer_freeing(t_map *map)
{
	while ((*map).buffer[(*map).height] != NULL)
	{
		free((*map).buffer[(*map).height]);
		(*map).height++;
	}
	free((*map).buffer);
}

void	initialise(t_num *count, t_map *map)
{
	(*count).coll = 0;
	(*count).exit = 0;
	(*map).width = 0;
	(*map).height = 0;
	(*map).collectible = 0;
}

int	main(void)
{
	int			fd;
	int			check;
	t_num		count;
	t_map		map;

	fd = open("../maps/map2.ber", O_RDWR);
	if (fd == -1)
		return (printf("error openning file!\n"), -1);
	map.buffer = (char **)malloc(BUFFER_SIZE * sizeof(t_map *));
	if (!map.buffer)
		return (free(map.buffer), -1);
	initialise(&count, &map);
	check = mapping(fd, &count, &map);
	if (map.collectible == count.coll && count.exit == 1 && check == 1)
		ft_printf("The Map is valid with %d collectibles!\n", map.collectible);
	else
		ft_printf("The Map is NOT valid!\n");
	map.height = 0;
	buffer_freeing(&map);
	return (0);
}

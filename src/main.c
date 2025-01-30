/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:17:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/30 05:40:08 by sohamdan         ###   ########.fr       */
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

void	putting_map(t_map *map)
{
	void	*mlx_ptr;

	mlx_ptr = mlx_init();
	putting_images((*map).buffer, (*map).height, (*map).width, mlx_ptr);
	mlx_loop(mlx_ptr);
}

int	main(int argc, char **argv)
{
	int			fd;
	int			check;
	t_num		count;
	t_map		map;

	if (argc != 2)
		return (ft_printf("so_long: must provide a file\n"), -1);
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
		return (ft_printf("Error\n"), perror("Reason: "), -1);
	map.buffer = (char **)malloc(BUFFER_SIZE * sizeof(t_map *));
	if (!map.buffer)
		return (free(map.buffer), -1);
	initialise(&count, &map);
	check = mapping(fd, &count, &map);
	
	putting_map(&map);
	/*
	if (map.collectible != count.coll)
		return (ft_printf("Error:\n") \
		, ft_printf("The player must reach all collectibles and exit"), 0);
	else if (check != 1)
		exit(EXIT_FAILURE);
	else
		putting_map(&map);
	*/
	map.height = 0;
	buffer_freeing(&map);
	exit(EXIT_SUCCESS);
}

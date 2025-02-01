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

int	initialise_nd_mapping(int fd, t_num *count, t_map *map, char *map_path)
{
	int	check;

	(*count).coll = 0;
	(*count).exit = 0;
	(*map).width = 0;
	(*map).height = 0;
	(*map).collectible = 0;
	(*map).exit = 0;
	check = mapping(fd, count, map);
	if ((*map).collectible != (*count).coll || (*map).exit != (*count).exit)
		return (ft_printf("Error:\n"),
			ft_printf("The player must reach all collectibles and exit\n"), -1);
	else if (check != 1)
		return (-1);
	else
		check = recopying_map(map_path, map);
	return (check);
}

int	putting_map(t_map *map)
{
	t_ptr		mlx;
	t_location	dim;
	int			check;

	mlx.ptr = mlx_init();
	dim.height = (*map).height;
	dim.width = (*map).width;
	check = putting_images((*map).buffer, &dim, &mlx);
	if (check == 0)
		return (0);
	mlx_loop(mlx.ptr);
	return (1);
}

int	recopying_map(char *map_path, t_map *map)
{
	int	fd;

	fd = open(map_path, O_RDWR);
	if (fd == -1)
		return (ft_printf("Error\n"), perror("Reason: "), -1);
	buffer_freeing(map);
	(*map).height = 0;
	copying_map(fd, &(*map).height, (*map).buffer);
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		check;
	char	*map_path;
	t_num	count;
	t_map	map;

	if (argc != 2)
		return (ft_printf("so_long: must provide a file\n"), -1);
	map_path = argv[1];
	fd = open(map_path, O_RDWR);
	if (fd == -1)
		return (ft_printf("Error\n"), perror("Reason: "), -1);
	map.buffer = (char **)malloc(BUFFER_SIZE * sizeof(t_map *));
	if (!map.buffer)
		return (free(map.buffer), -1);
	check = initialise_nd_mapping(fd, &count, &map, map_path);
	close(fd);
	if (check == -1)
		exit(EXIT_FAILURE);
	else
		putting_map(&map);
	map.height = 0;
	buffer_freeing(&map);
	exit(EXIT_SUCCESS);
}

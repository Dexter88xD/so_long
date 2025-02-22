/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:17:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/22 22:11:59 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	buffer_freeing(t_map *map)
{
	int	i;

	if ((*map).buffer == NULL)
		return ;
	i = 0;
	while ((*map).buffer[i] != NULL)
	{
		free((*map).buffer[i]);
		i++;
	}
	free((*map).buffer);
	(*map).buffer = NULL;
}

int	putting_map(t_map *map)
{
	t_data		data;
	t_ptr		mlx;
	t_location	dim;
	int			check;

	ft_memset(&mlx, 0, sizeof(t_ptr));
	mlx.ptr = mlx_init();
	ft_memset(&data, 0, sizeof(t_data));
	dim.height = (*map).height;
	dim.width = (*map).width;
	check = putting_images((*map).buffer, &dim, &mlx, &data);
	if (check != 1)
		return (0);
	capture_keys(&mlx, &data, map, &dim);
	return (1);
}

int	initialise_nd_mapping(int fd, t_num *count, t_map *map, char *map_path)
{
	int	check;

	check = mapping(fd, count, map);
	if (check != 1 && ((*map).collectible == (*count).coll
			|| (*map).exit == (*count).exit))
		return (buffer_freeing(map), -1);
	else if ((*map).collectible != (*count).coll
		|| (*map).exit != (*count).exit)
		return (ft_printf("Error:\n"),
			ft_printf("The player must reach all collectibles and exit\n"),
			buffer_freeing(map), -1);
	else
	{
		buffer_freeing(map);
		check = recopying_map(map_path, map);
	}
	return (check);
}

int	recopying_map(char *map_path, t_map *map)
{
	int	fd;

	fd = open(map_path, O_RDWR);
	if (fd == -1)
		return (ft_printf("Error\n"), perror("Reason: "), -1);
	(*map).buffer = (char **)malloc(BUFFER_SIZE * sizeof(t_map *));
	if (!(*map).buffer)
		return (free((*map).buffer),
			ft_printf("Error: Memory allocation failed\n"), -1);
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
	if (fd == -1 || !check_ber(map_path))
		return (ft_printf("Error\nFile not valid or not found\n"), -1);
	ft_memset(&map, 0, sizeof(t_map));
	ft_memset(&count, 0, sizeof(t_num));
	map.buffer = (char **)malloc(how_many_lines(map_path) * sizeof(t_map *));
	if (!map.buffer)
		return (free(map.buffer),
			ft_printf("Error\nMemory allocation failed\n"), -1);
	check = initialise_nd_mapping(fd, &count, &map, map_path);
	close(fd);
	if (check == -1)
		exit(EXIT_FAILURE);
	else
		putting_map(&map);
	exit(EXIT_SUCCESS);
}

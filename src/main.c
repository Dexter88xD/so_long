/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:06:36 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/16 15:48:03 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	int		i;
	int		fd;
	char	**buffer;

	fd = open("../maps/map1.ber", O_RDWR);
	if (fd == -1)
		return (printf("error openning file!\n"), -1);
	buffer = (char **)malloc(1);
	if (!buffer)
		return (free(buffer), -1);
	i = \<F12>copying_map(fd, buffer);
	if ()
	return (0);
}

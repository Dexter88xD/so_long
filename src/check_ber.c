/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <sohamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:49:04 by sohamdan          #+#    #+#             */
/*   Updated: 2025/02/04 12:25:46 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	if (!str1 || !str2)
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	check_ber(char *str)
{
	char	*extension;

	extension = ft_strrchr(str, '.');
	if (!extension)
		return (0);
	if (extension == str)
		return (0);
	else if (*(extension - 1) == '/')
		return (0);
	else if (!ft_strcmp(extension, ".ber"))
		return (1);
	return (0);
}

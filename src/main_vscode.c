/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vscode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:17:00 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/19 21:38:15 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*****************************CHECKING_MAP*************

int	checking_wall(int x, int y, char **buffer)
{
	int	width;
	int	height;

	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (width == 0 || width == x - 1 || height == 0 || height == y - 1)
			{
				if (buffer[height][width] != '1')
					return (0);
			}
			width++;
		}
		height++;
	}
	return (1);
}

int	checking_player(int x, int y, t_location *location, char **buffer)
{
	int	width;
	int	height;
	int	p;

	p = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] == 'P')
			{
				(*location).width = width;
				(*location).height = height;
				p++;
			}
			if (p > 1)
				return (0);
			width++;
		}
		height++;
	}
	return (p);
}

int	checking_exit(int x, int y, t_location *location, char **buffer)
{
	int	width;
	int	height;
	int	e;

	e = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] == 'E')
			{
				(*location).width = width;
				(*location).height = height;
				e++;
			}
			if (e > 1)
				return (0);
			width++;
		}
		height++;
	}
	return (e);
}

int	checking_collectibles(int x, int y, char **buffer)
{
	int	width;
	int	height;
	int	c;

	c = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] == 'C')
				c++;
			width++;
		}
		height++;
	}
	return (c);
}

int	checking_char(int x, int y, char **buffer)
{
	int	width;
	int	height;

	width = 0;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			if (buffer[height][width] != 'E' &&
					buffer[height][width] != 'C' &&
					buffer[height][width] != 'P' &&
					buffer[height][width] != '1' &&
					buffer[height][width] != '0')
				return (0);
			width++;
		}
		height++;
	}
	return (1);
}

******************************************/

/*****************************MAPPING*************

int	checking_path(t_map *map, t_num *count, int y, int x)
{
	if ((*map).buffer[y][x] == '1' || (*map).buffer[y][x] == 'X')
		return ((*count).coll);
	if ((*map).buffer[y][x] != '0' && (*map).buffer[y][x] != 'C'
			&& (*map).buffer[y][x] != 'E' && (*map).buffer[y][x] != 'P')
		return ((*count).coll);
	if ((*map).buffer[y][x] == 'C')
	{
		(*count).coll++;
		(*map).buffer[y][x] = 'c';
	}
	else if ((*map).buffer[y][x] == '0')
		(*map).buffer[y][x] = 'X';
	else if ((*map).buffer[y][x] == 'E')
	{
		(*map).buffer[y][x] = 'e';
		(*count).exit = 1;
	}
	checking_path(map, count, y, x + 1);
	checking_path(map, count, y, x - 1);
	checking_path(map, count, y + 1, x);
	checking_path(map, count, y - 1, x);
	return ((*count).coll);
}

int	checking_map(t_map *map)
{
	int	p;
	int	e;
	int	w;
	int	c;

	if (checking_char((*map).width, (*map).height, (*map).buffer) != 1)
		return (0);
	p = checking_player((*map).width, (*map).height,
			&((*map).player), (*map).buffer);
	if (p != 1)
		return (0);
	e = checking_exit((*map).width, (*map).height,
			&((*map).exit), (*map).buffer);
	if (e != 1)
		return (0);
	w = checking_wall((*map).width, (*map).height, (*map).buffer);
	if (w != 1)
		return (0);
	c = checking_collectibles((*map).width, (*map).height, (*map).buffer);
	if (c <= 0)
		return (0);
	(*map).collectible = c;
	return (c);
}

int	checking_length(int y, int *x, char **buffer)
{
	int	width;
	int	height;

	width = 0;
	height = 0;
	while (buffer[height][width] != '\n' && buffer[height][width] != '\0')
		width++;
	height++;
	(*x) = width;
	while (height < y)
	{
		width = 0;
		while (buffer[height][width] != '\n' && buffer[height][width] != '\0')
			width++;
		if (width != (*x))
			return (0);
		height++;
	}
	return (1);
}

int	copying_map(int fd, int *height, char **buffer)
{
	buffer[(*height)] = get_next_line(fd);
	while (buffer[(*height)] != NULL)
	{
		(*height)++;
		buffer[(*height)] = get_next_line(fd);
	}
	return (1);
}

int	mapping(int fd, t_num *count, t_map *map)
{
	int	check;

	copying_map(fd, &((*map).height), (*map).buffer);
	if (((*map).height) == 0)
		return (0);
	checking_length(((*map).height), &((*map).width), (*map).buffer);
	if (((*map).width) == 0)
		return (0);
	check = checking_map(map);
	if (check == 0)
		return (0);
	(*count).coll = 0;
	checking_path(map, count, (*map).player.height, (*map).player.width);
	if ((*count).exit != 1)
		return (0);
	return ((*count).exit);
}

******************************************/

/*****************************GET_NEXT_LINE*************
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dest;
	const char	*ptr_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	while (n > 0)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
		n--;
	}
	return (dest);
}

char	*ft_strndup(const char *s, size_t len)
{
	char	*buffer;

	if (s == NULL)
		return (NULL);
	if (len == 0)
		len = ft_strlen(s);
	buffer = (char *)malloc((len + 1) * sizeof(*s));
	if (buffer == NULL)
		return (NULL);
	buffer = ft_memcpy(buffer, s, len);
	buffer[len] = '\0';
	return (buffer);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strndup(s2, 0));
	else if (s2 == NULL)
		return (ft_strndup(s1, 0));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	ft_memcpy(s, s1, len1);
	ft_memcpy(s + len1, s2, len2);
	s[len1 + len2] = '\0';
	return (s);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i + 1]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i + 1]);
	return (NULL);
}

static char	*line_extract(char **buffer)
{
	char	*line;
	char	*temp;
	size_t	i;

	i = 0;
	line = NULL;
	if (!(*buffer))
		return (NULL);
	while ((*buffer)[i] != '\0' && (*buffer)[i] != '\n')
		i++;
	if ((*buffer)[i] == '\n')
	{
		line = ft_strndup(*buffer, i + 1);
		temp = ft_strndup(*buffer + i + 1, 0);
		free(*buffer);
		*buffer = temp;
	}
	else
	{
		line = ft_strndup(*buffer, 0);
		free(*buffer);
		*buffer = NULL;
	}
	return (line);
}

static char	*join_buffer(char **temp_buffer, char **buffer, char *temp)
{
	if (!*buffer)
		temp = ft_strndup("", 0);
	else
	{
		temp = ft_strndup(*buffer, 0);
		free(*buffer);
	}
	if (!temp)
		return (NULL);
	*buffer = ft_strjoin(temp, *temp_buffer);
	free(*temp_buffer);
	return (temp);
}

ssize_t	line_read(char **buffer, int fd)
{
	char	*temp;
	char	*temp_buffer;
	ssize_t	bytes_read;

	bytes_read = 0;
	while (!ft_strchr(*buffer, '\n'))
	{
		temp_buffer = (char *)malloc((size_t)BUFFER_SIZE + 1);
		if (!temp_buffer)
			return (-1);
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			free(temp_buffer);
			break ;
		}
		temp_buffer[bytes_read] = '\0';
		temp = join_buffer(&temp_buffer, buffer, temp);
		if (!temp)
			return (-1);
		free(temp);
	}
	return (bytes_read);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	ssize_t		bytes_read;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = NULL;
	bytes_read = line_read(&buffer, fd);
	if (bytes_read == -1)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}	
	else if (bytes_read <= 0 && (!buffer || buffer[0] == '\0'))
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	line = line_extract(&buffer);
	return (line);
}
******************************************/

/*****************************FT_PRINTF*************
int	ft_puthex(unsigned long n, char c, int f)
{
	char	*hex_s;
	int		num;

	num = 0;
	hex_s = "0123456789abcdef";
	if (c == 'X')
		hex_s = "0123456789ABCDEF";
	else if (c == 'p' && f == 0)
		return (num += write(1, "(nil)", 5));
	else if (c == 'p' && f == 1)
		num += write(1, "0x", 2);
	if (n < 16)
		num += write(1, &hex_s[n], 1);
	else
	{
		num += ft_puthex(n / 16, c, 2);
		num += ft_puthex(n % 16, c, 2);
	}
	return (num);
}

int	ft_putnbr(long n)
{
	char	n_out;
	int		num;

	num = 0;
	if (n < 0)
	{
		num += write(1, "-", 1);
		num += ft_putnbr(-n);
	}
	else if (n >= 0 && n <= 9)
	{
		n_out = n + '0';
		num += write(1, &n_out, 1);
	}
	else
	{
		n_out = n % 10 + '0';
		n /= 10;
		num += ft_putnbr(n);
		num += write(1, &n_out, 1);
	}
	return (num);
}

int	ft_putstr(const char *s, const char c, int n)
{
	int	num;
	int	i;

	if (!s && n == 0)
		return (write(1, "(null)", 6));
	num = 0;
	if (n == 1)
		return (num += write(1, &c, 1));
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			num += write(1, &s[i], 1);
			i++;
		}
	}
	return (num);
}

int	what_identifier(char pitta, va_list agrippa)
{
	int				num;
	unsigned long	ptr;

	num = 0;
	if (pitta == 'c')
		num += ft_putstr(0, va_arg(agrippa, int), 1);
	else if (pitta == 's')
		num += ft_putstr(va_arg(agrippa, char *), 0, 0);
	else if (pitta == 'p')
	{
		ptr = va_arg(agrippa, unsigned long);
		if (!ptr)
			num += ft_puthex(ptr, pitta, 0);
		else
			num += ft_puthex(ptr, pitta, 1);
	}
	else if (pitta == 'd' || pitta == 'i')
		num += ft_putnbr(va_arg(agrippa, int));
	else if (pitta == 'u')
		num += ft_putnbr(va_arg(agrippa, unsigned int));
	else if (pitta == 'x' || pitta == 'X')
		num += ft_puthex(va_arg(agrippa, unsigned int), pitta, 2);
	else if (pitta == '%')
		num += ft_putstr(0, '%', 1);
	return (num);
}

int	ft_printf(const char *s, ...)
{
	va_list	agrippa;
	int		i;
	int		num;

	if (!s)
		return (-1);
	va_start(agrippa, s);
	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			num += ft_putstr(0, s[i], 1);
		else
		{
			i++;
			if (s[i] == '\0')
				return (va_end(agrippa), -1);
			num += what_identifier(s[i], agrippa);
		}
		i++;
	}
	return (va_end(agrippa), num);
}
******************************************/

void	buffer_freeing(t_map *map)
{
	while ((*map).buffer[(*map).height] != NULL)
	{
		free((*map).buffer[(*map).height]);
		(*map).height++;
	}
	free((*map).buffer);
}

int	main(void)
{
	int			fd;
	int			check;
	t_num		count;
	t_map		map;

	fd = open("../maps/map1.ber", O_RDWR);
	if (fd == -1)
		return (printf("error openning file!\n"), -1);
	map.buffer = (char **)malloc(BUFFER_SIZE * sizeof(t_map *));
	if (!map.buffer)
		return (free(map.buffer), -1);
	map.width = 0;
	map.height = 0;
	check = mapping(fd, &count, &map);
	if (map.collectible == count.coll && count.exit == 1 && check == 1)
		ft_printf("The Map is valid with %d collectibles!\n", map.collectible);
	else
		ft_printf("The Map is NOT valid!\n");
	map.height = 0;
	buffer_freeing(&map);
	return (0);
}

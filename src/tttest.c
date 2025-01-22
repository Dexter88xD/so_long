#include "../lib/minilibx-linux/mlx.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define Z 512
#define Y 512

int	main(void)
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		*img_ground;
	int		*img_upper_wall;
	int		*img_side_wall;
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	char	*ptr_ = "../assets/map_parts/";
	int		x;
	int		y;
	//int		i;
	int		a;
	int		b;

	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, Z, Y, "POP!");
	
	img_ground = mlx_xpm_file_to_image(mlx_ptr, ptr_ground, &x, &y);
	a = 0;
	b = 0;
	while (a < Y)
	{
		while (b < Z)
		{
			mlx_put_image_to_window(mlx_ptr, mlx_win, img_ground, a, b);
			b += 32;
		}
		b = 0;
		a += 32;
	}
	
	img_upper_wall = mlx_xpm_file_to_image(mlx_ptr, ptr_upper_wall, &x, &y);
	img_side_wall = mlx_xpm_file_to_image(mlx_ptr, ptr_side_wall, &x, &y);
	b = 0;
	while (b < Y)
	{
		a = 0;
		while (a < Z)
		{
			if (a + x >= Z || a == 0)
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_wall, a, b);
			if (b == 0 || b + y >= Y)
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_upper_wall, a, b);
			if ((a == 0 && b == 0) || (b == 0 && a + x >= Z))
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_wall, a, b);
			a += x;
		}
		b += y;
	}	
	/*
	i = 0;
	while(i < 10000)
	{
		img = mlx_xpm_file_to_image(mlx_ptr, path, &x, &y);
		mlx_put_image_to_window(mlx_ptr, mlx_win, img, Z/2, Y/2);
		mlx_destroy_image(mlx_ptr, img);
		img = mlx_xpm_file_to_image(mlx_ptr, path2, &x, &y);
		mlx_put_image_to_window(mlx_ptr, mlx_win, img, Z/2, Y/2);
		i++;
	}*/
	mlx_loop(mlx_ptr);
}


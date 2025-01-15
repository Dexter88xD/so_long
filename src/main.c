#include "../lib/minilibx-linux/mlx.h"
#include <unistd.h>
#include <stdio.h>

#define Z 512
#define Y 512

int	main(void)
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		*img;
	//char	*path = "../assets/top_down_adventure/slime/slime_1.xpm";
	//char	*path2 = "../assets/top_down_adventure/slime/slime_2.xpm";
	//char	*path3 = "../assets/top_down_adventure/background/topDown_baseTiles.xpm";
	char	*path4 = "../assets/The_Fantasy_Tileset/to_be_used/wall.xpm";
	char	*path5 = "../assets/The_Fantasy_Tileset/to_be_used/Tileset_Road.xpm";
	int		x;
	int		y;
	//int		i;
	int		a;
	int		b;

	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, Z, Y, "POP!");
	img = mlx_xpm_file_to_image(mlx_ptr, path5, &x, &y);
	a = 0;
	b = 0;
	while (a < Y)
	{
		while (b < Z)
		{
			mlx_put_image_to_window(mlx_ptr, mlx_win, img, a, b);
			b += 32;
		}
		b = 0;
		a += 32;
	}	
	img = mlx_xpm_file_to_image(mlx_ptr, path4, &x, &y);
	b = 0;
	while (b < Y)
	{
		a = 0;
		while (a < Z)
		{
			if (b == 0 || b + y >= Y || a == 0 || a + x >= Z)
				mlx_put_image_to_window(mlx_ptr, mlx_win, img, a, b);

			a += x;
		}
		b += y;
	}	
	/*i = 0;
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


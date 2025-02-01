#include "../lib/minilibx-linux/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define Z 512
#define Y 512

int	main(void)
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		*img_inside_road;
	char	*ptr_inside_road;
	int		*img_corner_left_up;
	char	*ptr_corner_left_up;
	int		*img_corner_left_down;
	char	*ptr_corner_left_down;
	int		*img_corner_right_up;
	char	*ptr_corner_right_up;
	int		*img_corner_right_down;
	char	*ptr_corner_right_down;
	int		*img_road_corner_left_up;
	char	*ptr_road_corner_left_up;
	int		*img_road_corner_left_down;
	char	*ptr_road_corner_left_down;
	int		*img_road_corner_right_down;
	char	*ptr_road_corner_right_down;
	int		*img_road_corner_right_up;
	char	*ptr_road_corner_right_up;
	int		*img_side_left;
	char	*ptr_side_left;
	int		*img_road_side_down;
	char	*ptr_road_side_down;
	int		*img_road_side_up;
	char	*ptr_road_side_up;
	int		*img_road_side_left;
	char	*ptr_road_side_left;
	int		*img_road_side_right;
	char	*ptr_road_side_right;
	int		*img_side_right;
	char	*ptr_side_right;
	int		*img_side_up;
	char	*ptr_side_up;
	int		*img_side_down;
	char	*ptr_side_down;
	int		x;
	int		y;
	int		a;
	int		b;

	ptr_inside_road = "../assets/map_parts/road/inside_road.xpm";
	// int		*img_inside_road_shadows;
	// char	*ptr_inside_road_shadows = "../assets/map_parts/inside_road_shadows.xpm";
	ptr_corner_left_up = "../assets/map_parts/outside/left_up.xpm";
	ptr_corner_left_down = "../assets/map_parts/outside/left_down.xpm";
	ptr_corner_right_up = "../assets/map_parts/outside/right_up.xpm";
	ptr_corner_right_down = "../assets/map_parts/outside/right_down.xpm";
	ptr_road_corner_left_up = "../assets/map_parts/road/corner/left_up.xpm";
	ptr_road_corner_left_down = "../assets/map_parts/road/corner/left_down.xpm";
	ptr_road_corner_right_down = "../assets/map_parts/road/corner/right_down.xpm";
	ptr_road_corner_right_up = "../assets/map_parts/road/corner/right_up.xpm";
	ptr_side_left = "../assets/map_parts/outside/left.xpm";
	ptr_road_side_down = "../assets/map_parts/road/side/one/down.xpm";
	ptr_road_side_up = "../assets/map_parts/road/side/one/up.xpm";
	ptr_road_side_left = "../assets/map_parts/road/side/one/left.xpm";
	ptr_road_side_right = "../assets/map_parts/road/side/one/right.xpm";
	ptr_side_right = "../assets/map_parts/outside/right.xpm";
	ptr_side_up = "../assets/map_parts/outside/up.xpm";
	ptr_side_down = "../assets/map_parts/outside/down.xpm";
	a = 0;
	b = 0;
	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, Z, Y, "POP!");
	img_inside_road = mlx_xpm_file_to_image(mlx_ptr, ptr_inside_road, &x, &y);
	img_corner_left_up = mlx_xpm_file_to_image(mlx_ptr, ptr_corner_left_up, &x,
			&y);
	img_corner_right_up = mlx_xpm_file_to_image(mlx_ptr, ptr_corner_right_up,
			&x, &y);
	img_corner_left_down = mlx_xpm_file_to_image(mlx_ptr, ptr_corner_left_down,
			&x, &y);
	img_corner_right_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_corner_right_down, &x, &y);
	img_road_corner_left_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_left_down, &x, &y);
	img_road_corner_left_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_left_up, &x, &y);
	img_road_corner_right_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_right_down, &x, &y);
	img_road_corner_right_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_right_up, &x, &y);
	img_side_left = mlx_xpm_file_to_image(mlx_ptr, ptr_side_left, &x, &y);
	img_side_right = mlx_xpm_file_to_image(mlx_ptr, ptr_side_right, &x, &y);
	img_side_up = mlx_xpm_file_to_image(mlx_ptr, ptr_side_up, &x, &y);
	img_side_down = mlx_xpm_file_to_image(mlx_ptr, ptr_side_down, &x, &y);
	img_road_side_down = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_down, &x,
			&y);
	img_road_side_up = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_up, &x, &y);
	img_road_side_left = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_left, &x,
			&y);
	img_road_side_right = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_right,
			&x, &y);
	while (a <= Y)
	{
		while (b <= Z)
		{
			if (a == 0 && b == 0) // left upper corner
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_corner_left_up, a,
					b);
			else if (a == x && b == y) // left upper road corner
				mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_road_corner_left_up, a, b);
			else if (b == 0 && a != 0 && a + x != Y) // upper side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_up, a, b);
			else if (b == y && a != x && a != 0 && a + x * 2 != Y && a + x != Y)
				// upper road side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_road_side_up, a,
					b);
			else if (b + y == Z && a != 0 && a + x != Y) // lower side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_down, a, b);
			else if (b + y * 2 == Z && a != x && a != 0 && a + x * 2 != Y && a
				+ x != Y) // lower road side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_road_side_down, a,
					b);
			else if (a == 0 && b != 0 && b + y != Z) // left side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_left, a, b);
			else if (a == x && b != y && b + y * 2 != Z && b != 0 && b + y != Z)
				// left road side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_road_side_left, a,
					b);
			else if (a + x == Y && b != 0 && b + y != Z) // right side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_right, a, b);
			else if (a + x * 2 == Y && b != 0 && b + y != Z && b != y && b + y
				* 2 != Z) // right road side
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_road_side_right,
					a, b);
			else if (a == 0 && b + y == Z) // left lower corner
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_corner_left_down,
					a, b);
			else if (a == x && b + 2 * y == Z) // left lower road corner
				mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_road_corner_left_down, a, b);
			else if (a + x == Y && b == 0) // right upper corner
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_corner_right_up,
					a, b);
			else if (a + x * 2 == Y && b == y) // right upper road corner
				mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_road_corner_right_up, a, b);
			else if (a + x == Y && b + y == Z) // right lower corner
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_corner_right_down,
					a, b);
			else if (a + x * 2 == Y && b + y * 2 == Z)
				// right lower road corner
				mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_road_corner_right_down, a, b);
			else // simple road
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_inside_road, a,
					b);
			b += y;
		}
		b = 0;
		a += x;
	}
	/*
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
	i = 0;
	while(i < 10000)
	{
		img = mlx_xpm_file_to_image(mlx_ptr, path, &x, &y);
		mlx_put_image_to_window(mlx_ptr, mlx_win, img, Z/2, Y/2);
		mlx_destroy_image(mlx_ptr, img);
		img = mlx_xpm_file_to_image(mlx_ptr, path2, &x, &y);
		mlx_put_image_to_window(mlx_ptr, mlx_win, img, Z/2, Y/2);
		i++;
	}
	*/
	mlx_loop(mlx_ptr);
}

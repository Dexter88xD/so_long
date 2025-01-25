#include "so_long.h"

void	putting_images(char **array, int rows, int cols, void *mlx_ptr)
{
	int		i;
	int		j;
	int		a;
	int		b;
	int		x;
	int		y;
	int		Y;
	int		X;
	void	*mlx_win;
	int		*img_corner_left_up;
	char	*ptr_corner_left_up;
	int		*img_corner_left_down;
	char	*ptr_corner_left_down;
	int		*img_corner_right_up;
	char	*ptr_corner_right_up;
	int		*img_corner_right_down;
	char	*ptr_corner_right_down;
	int		*img_side_left;
	char	*ptr_side_left;
	int		*img_side_right;
	char	*ptr_side_right;
	int		*img_side_up;
	char	*ptr_side_up;
	int		*img_side_down;
	char	*ptr_side_down;
	int		*img_road_corner_left_up;
	char	*ptr_road_corner_left_up;
	int		*img_road_side_up;
	char	*ptr_road_side_up;
	int		*img_road_corner_right_up;
	char	*ptr_road_corner_right_up;
	int		*img_road_side_right;
	char	*ptr_road_side_right;
	int		*img_road_corner_right_down;
	char	*ptr_road_corner_right_down;
	int		*img_road_side_down;
	char	*ptr_road_side_down;
	int		*img_road_corner_left_down;
	char	*ptr_road_corner_left_down;
	int		*img_road_side_left;
	char	*ptr_road_side_left;
	int		*img_road_side_up_down;
	char	*ptr_road_side_up_down;
	int		*img_road_side_left_right;
	char	*ptr_road_side_left_right;
	int		*img_inside_road;
	char	*ptr_inside_road;
	int		*img_road_three_side_up;
	char	*ptr_road_three_side_up;

	/**********************ASSIGNING IMAGES TO THE MAP*********************/
	a = 0;
	b = 0;
	i = 0;
	j = 0;
	Y = rows * 32;
	X = cols * 32;
	ptr_corner_left_up = "../assets/map_parts/outside/left_up.xpm";
	ptr_corner_left_down = "../assets/map_parts/outside/left_down.xpm";
	ptr_corner_right_up = "../assets/map_parts/outside/right_up.xpm";
	ptr_corner_right_down = "../assets/map_parts/outside/right_down.xpm";
	ptr_side_left = "../assets/map_parts/outside/left.xpm";
	ptr_side_right = "../assets/map_parts/outside/right.xpm";
	ptr_side_up = "../assets/map_parts/outside/up.xpm";
	ptr_side_down = "../assets/map_parts/outside/down.xpm";
	ptr_road_corner_left_up = "../assets/map_parts/road/corner/left_up.xpm";
	ptr_road_side_up = "../assets/map_parts/road/side/one/up.xpm";
	ptr_road_corner_right_up = "../assets/map_parts/road/corner/right_up.xpm";
	ptr_road_side_right = "../assets/map_parts/road/side/one/right.xpm";
	ptr_road_corner_right_down = "../assets/map_parts/road/corner/right_down.xpm";
	ptr_road_side_down = "../assets/map_parts/road/side/one/down.xpm";
	ptr_road_corner_left_down = "../assets/map_parts/road/corner/left_down.xpm";
	ptr_road_side_left = "../assets/map_parts/road/side/one/left.xpm";
	ptr_road_side_up_down = "../assets/map_parts/road/side/two/up_down.xpm";
	ptr_road_side_left_right = "../assets/map_parts/road/side/two/left_right.xpm";
	ptr_inside_road = "../assets/map_parts/road/inside_road.xpm";
	ptr_road_three_side_up = "../assets/map_parts/road/side/three/up.xpm";
	ptr_road_three_side_up = "../assets/map_parts/road/side/three/down.xpm";
	mlx_win = mlx_new_window(mlx_ptr, X, Y, "POP!");
	img_corner_left_up = mlx_xpm_file_to_image(mlx_ptr, ptr_corner_left_up, &x,
			&y);
	img_corner_right_up = mlx_xpm_file_to_image(mlx_ptr, ptr_corner_right_up,
			&x, &y);
	img_corner_left_down = mlx_xpm_file_to_image(mlx_ptr, ptr_corner_left_down,
			&x, &y);
	img_corner_right_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_corner_right_down, &x, &y);
	img_side_left = mlx_xpm_file_to_image(mlx_ptr, ptr_side_left, &x, &y);
	img_side_right = mlx_xpm_file_to_image(mlx_ptr, ptr_side_right, &x, &y);
	img_side_up = mlx_xpm_file_to_image(mlx_ptr, ptr_side_up, &x, &y);
	img_side_down = mlx_xpm_file_to_image(mlx_ptr, ptr_side_down, &x, &y);
	img_road_corner_left_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_left_up, &x, &y);
	img_road_side_up = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_up, &x, &y);
	img_road_corner_right_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_right_up, &x, &y);
	img_road_side_right = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_right,
			&x, &y);
	img_road_corner_right_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_right_down, &x, &y);
	img_road_side_down = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_down, &x,
			&y);
	img_road_corner_left_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_corner_left_down, &x, &y);
	img_road_side_left = mlx_xpm_file_to_image(mlx_ptr, ptr_road_side_left, &x,
			&y);
	img_road_side_up_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_side_up_down, &x, &y);
	img_road_side_left_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_side_left_right, &x, &y);
	img_inside_road = mlx_xpm_file_to_image(mlx_ptr, ptr_inside_road, &x, &y);
	img_road_three_side_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_up, &x, &y);
	while (i < rows)
	{
		a = i * x;
		j = 0;
		b = 0;
		while (j < cols)
		{
			if (array[i][j] == '1')
			{
				if (i == 0 && j == 0) // Left upper corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_left_up, b, a);
				else if (i == 0 && j == cols - 1) // Right upper corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_right_up, b, a);
				else if (i == rows - 1 && j == 0) // Left lower corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_left_down, b, a);
				else if (i == rows - 1 && j == cols - 1) // Right lower corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_right_down, b, a);
				else if (i == 0) // Upper side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_up, b,
						a);
				else if (i == rows - 1) // Lower side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_down, b,
						a);
				else if (j == 0) // Left side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_left, b,
						a);
				else if (j == cols - 1) // Right side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_right, b,
						a);
			}
			else if (array[i][j] == '0')
			{
				if (array[i - 1][j] == '1' && array[i][j - 1] == '1' && array[i][j + 1] != '1')
					// Left upper corner of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_left_up, b, a);
				else if (array[i - 1][j] == '1' && array[i][j + 1] == '1' && array[i][j - 1] != '1')
					// Right upper corner of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_right_up, b, a);
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1')
					// Left lower corner of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_left_down, b, a);
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1')
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1' && array[i][j + 1] != '1')
					// Left lower corner of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_left_down, b, a);
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1' && array[i][j - 1] != '1')
					// Right lower corner of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_right_down, b, a);
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '0'
						&& (array[i][j - 1] != '1' || array[i][j + 1] != '1'))
					// Upper side of road
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_road_side_up,
						b, a);
				else if (array[i + 1][j] == '1' && array[i - 1][j] == '0'
						&& array [i][j - 1] == '0' && array[i][j + 1] == '0')
					// Lower side of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_down, b, a);
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '0')
					// Left side of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_left, b, a);
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '0')
					// Right side of road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_right, b, a);
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '0')
					// Three sides up
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_road_three_side_up, b, a);
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1')
					// Horizontal road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_up_down, b, a);
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '1')
					// Vertical road
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_left_right, b, a);
				else // Inside road
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_inside_road,
						b, a);
			}
			j++;
			b += y;
		}
		i++;
	}
	mlx_loop(mlx_ptr);
	/**********************************************************************/
}

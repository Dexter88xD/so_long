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
	void	*img_corner_left_up;
	char	*ptr_corner_left_up;
	void	*img_corner_left_down;
	char	*ptr_corner_left_down;
	void	*img_corner_right_up;
	char	*ptr_corner_right_up;
	void	*img_corner_right_down;
	char	*ptr_corner_right_down;
	void	*img_side_left;
	char	*ptr_side_left;
	void	*img_side_right;
	char	*ptr_side_right;
	void	*img_side_up;
	char	*ptr_side_up;
	void	*img_side_down;
	char	*ptr_side_down;
	void	*img_road_corner_left_up;
	char	*ptr_road_corner_left_up;
	void	*img_road_side_up;
	char	*ptr_road_side_up;
	void	*img_road_corner_right_up;
	char	*ptr_road_corner_right_up;
	void	*img_road_side_right;
	char	*ptr_road_side_right;
	void	*img_road_corner_right_down;
	char	*ptr_road_corner_right_down;
	void	*img_road_side_down;
	char	*ptr_road_side_down;
	void	*img_road_corner_left_down;
	char	*ptr_road_corner_left_down;
	void	*img_road_side_left;
	char	*ptr_road_side_left;
	void	*img_road_side_up_down;
	char	*ptr_road_side_up_down;
	void	*img_road_side_left_right;
	char	*ptr_road_side_left_right;
	void	*img_road_three_side_up;
	char	*ptr_road_three_side_up;
	void	*img_road_three_side_down;
	char	*ptr_road_three_side_down;
	void	*img_road_three_side_left;
	char	*ptr_road_three_side_left;
	void	*img_road_three_side_right;
	char	*ptr_road_three_side_right;
	void	*img_inside_road;
	char	*ptr_inside_road;
	void	*img_inside_wall;
	char	*ptr_inside_wall;
	void	*img_char_inside_road_1;
	char	*ptr_char_inside_road_1;
	void	*img_char_inside_road_2;
	char	*ptr_char_inside_road_2;
	void	*img_char_inside_road_3;
	char	*ptr_char_inside_road_3;
	void	*img_char_inside_road_4;
	char	*ptr_char_inside_road_4;
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
	ptr_road_three_side_down = "../assets/map_parts/road/side/three/down.xpm";
	ptr_road_three_side_up = "../assets/map_parts/road/side/three/up.xpm";
	ptr_road_three_side_right = "../assets/map_parts/road/side/three/right.xpm";
	ptr_road_three_side_left = "../assets/map_parts/road/side/three/left.xpm";
	ptr_inside_road = "../assets/map_parts/road/inside_road.xpm";
	ptr_inside_wall = "../assets/map_parts/inside_wall.xpm";
	ptr_char_inside_road_1 = "../assets/map_parts/character/inside_road/frame_1.xpm";
	ptr_char_inside_road_2 = "../assets/map_parts/character/inside_road/frame_2.xpm";
	ptr_char_inside_road_3 = "../assets/map_parts/character/inside_road/frame_3.xpm";
	ptr_char_inside_road_4 = "../assets/map_parts/character/inside_road/frame_4.xpm";

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
	img_road_three_side_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_up, &x, &y);
	img_road_three_side_down= mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_down, &x, &y);
	img_road_three_side_left= mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_left, &x, &y);
	img_road_three_side_right= mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_right, &x, &y);
	img_inside_road = mlx_xpm_file_to_image(mlx_ptr, ptr_inside_road, &x, &y);
	img_inside_wall = mlx_xpm_file_to_image(mlx_ptr, ptr_inside_wall, &x, &y);
	img_char_inside_road_1 = mlx_xpm_file_to_image(mlx_ptr, ptr_char_inside_road_1, &x, &y);
	img_char_inside_road_2 = mlx_xpm_file_to_image(mlx_ptr, ptr_char_inside_road_2, &x, &y);
	img_char_inside_road_3 = mlx_xpm_file_to_image(mlx_ptr, ptr_char_inside_road_3, &x, &y);
	img_char_inside_road_4 = mlx_xpm_file_to_image(mlx_ptr, ptr_char_inside_road_4, &x, &y);
	while (i < rows)
	{
		a = i * x;
		j = 0;
		b = 0;
		while (j < cols)
		{
			if (array[i][j] == '1')
			{
				if (i == 0 && j == 0) 					// Left upper corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_left_up, b, a);
				else if (i == 0 && j == cols - 1) 		// Right upper corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_right_up, b, a);
				else if (i == rows - 1 && j == 0) 		// Left lower corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_left_down, b, a);
				else if (i == rows - 1 && j == cols - 1) // Right lower corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_corner_right_down, b, a);
				else if (i == 0) 						// Upper side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_up, b,
						a);
				else if (i == rows - 1) 				// Lower side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_down, b,
						a);
				else if (j == 0) 						// Left side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_left, b,
						a);
				else if (j == cols - 1) 				// Right side
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_side_right, b,
						a);
				else									// Inside wall
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_inside_wall, b, a);
			}
			else if (array[i][j] == '0')
			{
					// Left upper corner of road
				if (array[i - 1][j] == '1' && array[i][j - 1] == '1'
						&& array[i][j + 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_left_up, b, a);
					// Right upper corner of road
				else if (array[i - 1][j] == '1' && array[i][j + 1] == '1'
						&& array[i][j - 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_right_up, b, a);
					// Left lower corner of road
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1'
						&& array[i][j + 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_left_down, b, a);
					// Right lower corner of road
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1'
						&& array[i][j - 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_corner_right_down, b, a);
					// Upper side of road
				else if (array[i - 1][j] == '1' && array[i + 1][j] != '1'
						&& (array[i][j - 1] != '1' || array[i][j + 1] != '1'))
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_road_side_up, b, a);
					// Lower side of road
				else if (array[i + 1][j] == '1' && array[i - 1][j] != '1'
						&& array [i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_down, b, a);
					// Left side of road
				else if (array[i][j - 1] == '1' && array[i][j + 1] != '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_left, b, a);
					// Right side of road
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_right, b, a);
					// One way up
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_road_three_side_down, b, a);
					// One way down
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_road_three_side_up, b, a);
					// One way left
				else if (array[i][j + 1] != '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_road_three_side_left, b, a);
					// One way right
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_road_three_side_right, b, a);
					// Horizontal road
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
						&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_up_down, b, a);
					// Vertical road
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_road_side_left_right, b, a);
					//inside road
				else if (array[i - 1][j] != '1' && array[i + 1][j] != '1'
						&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							img_inside_road, b, a);
			}
			j++;
			b += y;
		}
		i++;
	}
	a = 96; // Start position
    b = 416; // Fixed horizontal position
    int frame = 0;
    int prev_b = b; // Variable to store the previous position

    while (1)
    {
        // Clear the previous player position by drawing the background
        mlx_put_image_to_window(mlx_ptr, mlx_win, img_inside_road, prev_b, a);

        // Display the current animation frame at the new position
        if (frame % 4 == 0)
            mlx_put_image_to_window(mlx_ptr, mlx_win, img_char_inside_road_1, b, a);
        else if (frame % 4 == 1)
            mlx_put_image_to_window(mlx_ptr, mlx_win, img_char_inside_road_2, b, a);
        else if (frame % 4 == 2)
            mlx_put_image_to_window(mlx_ptr, mlx_win, img_char_inside_road_3, b, a);
        else if (frame % 4 == 3)
            mlx_put_image_to_window(mlx_ptr, mlx_win, img_char_inside_road_4, b, a);

        // Increment frame for animation
        frame++;

        // Update the player's position every 4 frames
        if (frame % 4 == 0)
        {
            prev_b = b;   // Store the current position as the previous position
            b += 32;      // Move down by 32 pixels
            if (b > 448)  // Reset if out of range
                b = 416;
        }

        // Delay for animation speed
        usleep(100000); // 100ms delay per frame
    }


/*
	a = 128;
	b = 448;
	int frame = 0;	
	while (1)
	{
    	if (frame % 4 == 0)
     		mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_char_inside_road_1, b, a);
    	else if (frame % 4 == 1)
			mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_char_inside_road_2, b, a);
		else if (frame % 4 == 2)
			mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_char_inside_road_3, b, a);
		else if (frame % 4 == 3)
			mlx_put_image_to_window(mlx_ptr, mlx_win,
					img_char_inside_road_4, b, a);
   		frame++;
    	usleep(100000); // Adjust delay for animation speed
	}
*/
	mlx_loop(mlx_ptr);
	/**********************************************************************/
}

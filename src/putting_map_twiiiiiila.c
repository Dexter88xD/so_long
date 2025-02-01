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
	char	*ptr_side_right;
	void	*img_side_up;
	char	*ptr_side_up;
	void	*img_side_down;
	char	*ptr_side_down;
	void	*img_inside_wall;
	char	*ptr_inside_wall;
	void	*img_road_corner_left_up;
	char	*ptr_road_corner_left_up;
	void	*img_road_corner_left_down;
	char	*ptr_road_corner_left_down;
	void	*img_road_corner_right_up;
	char	*ptr_road_corner_right_up;
	void	*img_road_corner_right_down;
	char	*ptr_road_corner_right_down;
	void	*img_road_side_up;
	char	*ptr_road_side_up;
	void	*img_road_side_right;
	char	*ptr_road_side_right;
	void	*img_road_side_down;
	char	*ptr_road_side_down;
	void	*img_road_side_left;
	char	*ptr_road_side_left;
	void	*img_road_side_up_down;
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
	void	*img_inside_road_shadows;
	char	*ptr_inside_road_shadows;
	void	*img_char_inside_road;
	char	*ptr_char_inside_road;
	void	*img_char_corner_left_down;
	char	*ptr_char_corner_left_down;
	void	*img_char_corner_left_up;
	char	*ptr_char_corner_left_up;
	void	*img_char_corner_right_down;
	char	*ptr_char_corner_right_down;
	void	*img_char_corner_right_up;
	char	*ptr_char_corner_right_up;
	void	*img_char_side_one_down;
	char	*ptr_char_side_one_down;
	void	*img_char_side_one_left;
	char	*ptr_char_side_one_left;
	void	*img_char_side_one_right;
	void	*img_char_side_one_up;
	char	*ptr_char_side_one_up;
	void	*img_char_side_three_down;
	char	*ptr_char_side_three_down;
	void	*img_char_side_three_left;
	char	*ptr_char_side_three_left;
	void	*img_char_side_three_right;
	char	*ptr_char_side_three_right;
	void	*img_char_side_three_up;
	char	*ptr_char_side_three_up;
	void	*img_char_side_two_left_right;
	char	*ptr_char_side_two_left_right;
	void	*img_char_side_two_up_down;
	char	*ptr_char_side_two_up_down;
	void	*img_enemy_inside_road;
	char	*ptr_enemy_inside_road;
	void	*img_enemy_inside_road_shadows;
	char	*ptr_enemy_inside_road_shadows;
	void	*img_enemy_corner_left_down;
	char	*ptr_enemy_corner_left_down;
	void	*img_enemy_corner_left_up;
	char	*ptr_enemy_corner_left_up;
	void	*img_enemy_corner_right_down;
	char	*ptr_enemy_corner_right_down;
	void	*img_enemy_corner_right_up;
	char	*ptr_enemy_corner_right_up;
	void	*img_enemy_side_one_down;
	char	*ptr_enemy_side_one_down;
	void	*img_enemy_side_one_left;
	void	*img_enemy_side_one_right;
	char	*ptr_enemy_side_one_right;
	void	*img_enemy_side_one_up;
	char	*ptr_enemy_side_one_up;
	void	*img_enemy_side_three_down;
	char	*ptr_enemy_side_three_down;
	void	*img_enemy_side_three_left;
	char	*ptr_enemy_side_three_left;
	void	*img_enemy_side_three_right;
	char	*ptr_enemy_side_three_right;
	void	*img_enemy_side_three_up;
	char	*ptr_enemy_side_three_up;
	void	*img_enemy_side_two_left_right;
	char	*ptr_enemy_side_two_left_right;
	void	*img_enemy_side_two_up_down;
	char	*ptr_enemy_side_two_up_down;
	void	*img_key_inside_road;
	char	*ptr_key_inside_road;
	void	*img_key_corner_left_down;
	char	*ptr_key_corner_left_down;
	void	*img_key_corner_left_up;
	char	*ptr_key_corner_left_up;
	void	*img_key_corner_right_down;
	char	*ptr_key_corner_right_down;
	void	*img_key_corner_right_up;
	char	*ptr_key_corner_right_up;
	void	*img_key_side_one_down;
	char	*ptr_key_side_one_down;
	void	*img_key_side_one_left;
	char	*ptr_key_side_one_left;
	void	*img_key_side_one_right;
	void	*img_key_side_one_up;
	char	*ptr_key_side_one_up;
	void	*img_key_side_three_down;
	char	*ptr_key_side_three_down;
	void	*img_key_side_three_left;
	char	*ptr_key_side_three_left;
	void	*img_key_side_three_right;
	char	*ptr_key_side_three_right;
	void	*img_key_side_three_up;
	char	*ptr_key_side_three_up;
	void	*img_key_side_two_left_right;
	char	*ptr_key_side_two_left_right;
	void	*img_key_side_two_up_down;
	char	*ptr_key_side_two_up_down;
	char	*ptr_gate;

	/*******************      WALL      ************************/
	void *img_side_right; // DONE
	/*******************************************/
	/*******************      PATH      ************************/
	char *ptr_road_side_up_down; // DONE
	/*******************************************/
	/*******************      PLAYER      ************************/
	char *ptr_char_side_one_right; // DONE
	/*******************************************/
	/*******************      ENEMY      ************************/
	char *ptr_enemy_side_one_left; // DONE
	/*******************************************/
	/*******************      COLLECTIBLE      ************************/
	char *ptr_key_side_one_right; // DONE
	/*******************************************/
	/*******************      GATE      ************************/
	void *img_gate; // DONE
	/*******************************************/
	/**********************ASSIGNING IMAGES TO THE MAP*********************/
	a = 0;
	b = 0;
	i = 0;
	j = 0;
	Y = rows * 32;
	X = cols * 32;
	ptr_corner_left_up = "../assets/1/left_up.xpm";
	ptr_corner_left_down = "../assets/1/left_down.xpm";
	ptr_corner_right_up = "../assets/1/right_up.xpm";
	ptr_corner_right_down = "../assets/1/right_down.xpm";
	ptr_side_left = "../assets/1/left.xpm";
	ptr_side_right = "../assets/1/right.xpm";
	ptr_side_up = "../assets/1/up.xpm";
	ptr_side_down = "../assets/1/down.xpm";
	ptr_road_corner_left_up = "../assets/0/corner/left_up.xpm";
	ptr_road_corner_left_down = "../assets/0/corner/left_down.xpm";
	ptr_road_corner_right_up = "../assets/0/corner/right_up.xpm";
	ptr_road_corner_right_down = "../assets/0/corner/right_down.xpm";
	ptr_road_side_up = "../assets/0/side/one/up.xpm";
	ptr_road_side_right = "../assets/0/side/one/right.xpm";
	ptr_road_side_down = "../assets/0/side/one/down.xpm";
	ptr_road_side_left = "../assets/0/side/one/left.xpm";
	ptr_road_side_up_down = "../assets/0/side/two/up_down.xpm";
	ptr_road_side_left_right = "../assets/0/side/two/left_right.xpm";
	ptr_road_three_side_down = "../assets/0/side/three/down.xpm";
	ptr_road_three_side_up = "../assets/0/side/three/up.xpm";
	ptr_road_three_side_right = "../assets/0/side/three/right.xpm";
	ptr_road_three_side_left = "../assets/0/side/three/left.xpm";
	ptr_inside_road = "../assets/0/inside_road.xpm";
	ptr_inside_road_shadows = "../assets/0/inside_road_shadows.xpm";
	ptr_inside_wall = "../assets/1/inside_wall.xpm";
	ptr_char_inside_road = "../assets/P/look_r/inside_road/frame_1.xpm";
	ptr_char_corner_left_down = "../assets/sprites/look_right/character/corner/left_down/frame_1.xpm";
	ptr_char_corner_left_up = "../assets/sprites/look_right/character/corner/left_up/frame_1.xpm";
	ptr_char_corner_right_down = "../assets/sprites/look_right/character/corner/right_down/frame_1.xpm";
	ptr_char_corner_right_up = "../assets/sprites/look_right/character/corner/right_up/frame_1.xpm";
	ptr_char_side_one_down = "../assets/sprites/look_right/character/side/one/down/frame_1.xpm";
	ptr_char_side_one_left = "../assets/sprites/look_right/character/side/one/left/frame_1.xpm";
	ptr_char_side_one_right = "../assets/sprites/look_right/character/side/one/right/frame_1.xpm";
	ptr_char_side_one_up = "../assets/sprites/look_right/character/side/one/up/frame_1.xpm";
	ptr_char_side_three_down = "../assets/sprites/look_right/character/side/three/down/frame_1.xpm";
	ptr_char_side_three_left = "../assets/sprites/look_right/character/side/three/right/frame_1.xpm";
	ptr_char_side_three_right = "../assets/sprites/look_right/character/side/three/left/frame_1.xpm";
	ptr_char_side_three_up = "../assets/sprites/look_right/character/side/three/up/frame_1.xpm";
	ptr_char_side_two_up_down = "../assets/sprites/look_right/character/side/two/left_right/frame_1.xpm";
	ptr_char_side_two_left_right = "../assets/sprites/look_right/character/side/two/up_down/frame_1.xpm";
	ptr_enemy_inside_road = "../assets/sprites/look_right/enemy/inside_road/frame_1.xpm";
	ptr_enemy_inside_road_shadows = "../assets/sprites/look_right/enemy/inside_road_shadows/frame_1.xpm";
	ptr_enemy_corner_left_down = "../assets/sprites/look_right/enemy/corner/left_down/frame_1.xpm";
	ptr_enemy_corner_left_up = "../assets/sprites/look_right/enemy/corner/left_up/frame_1.xpm";
	ptr_enemy_corner_right_down = "../assets/sprites/look_right/enemy/corner/right_down/frame_1.xpm";
	ptr_enemy_corner_right_up = "../assets/sprites/look_right/enemy/corner/right_up/frame_1.xpm";
	ptr_enemy_side_one_down = "../assets/sprites/look_right/enemy/side/one/down/frame_1.xpm";
	ptr_enemy_side_one_left = "../assets/sprites/look_right/enemy/side/one/left/frame_1.xpm";
	ptr_enemy_side_one_right = "../assets/sprites/look_right/enemy/side/one/right/frame_1.xpm";
	ptr_enemy_side_one_up = "../assets/sprites/look_right/enemy/side/one/up/frame_1.xpm";
	ptr_enemy_side_three_down = "../assets/sprites/look_right/enemy/side/three/down/frame_1.xpm";
	ptr_enemy_side_three_left = "../assets/sprites/look_right/enemy/side/three/right/frame_1.xpm";
	ptr_enemy_side_three_right = "../assets/sprites/look_right/enemy/side/three/left/frame_1.xpm";
	ptr_enemy_side_three_up = "../assets/sprites/look_right/enemy/side/three/up/frame_1.xpm";
	ptr_enemy_side_two_up_down = "../assets/sprites/look_right/enemy/side/two/left_right/frame_1.xpm";
	ptr_enemy_side_two_left_right = "../assets/sprites/look_right/enemy/side/two/up_down/frame_1.xpm";
	ptr_key_inside_road = "../assets/key/inside_road/frame_1.xpm";
	ptr_key_corner_left_down = "../assets/key/corner/left_down/frame_1.xpm";
	ptr_key_corner_left_up = "../assets/key/corner/left_up/frame_1.xpm";
	ptr_key_corner_right_down = "../assets/key/corner/right_down/frame_1.xpm";
	ptr_key_corner_right_up = "../assets/key/corner/right_up/frame_1.xpm";
	ptr_key_side_one_down = "../assets/key/side/one/down/frame_1.xpm";
	ptr_key_side_one_left = "../assets/key/side/one/left/frame_1.xpm";
	ptr_key_side_one_right = "../assets/key/side/one/right/frame_1.xpm";
	ptr_key_side_one_up = "../assets/key/side/one/up/frame_1.xpm";
	ptr_key_side_three_down = "../assets/key/side/three/down/frame_1.xpm";
	ptr_key_side_three_left = "../assets/key/side/three/right/frame_1.xpm";
	ptr_key_side_three_right = "../assets/key/side/three/left/frame_1.xpm";
	ptr_key_side_three_up = "../assets/key/side/three/up/frame_1.xpm";
	ptr_key_side_two_up_down = "../assets/key/side/two/up_down/frame_1.xpm";
	ptr_key_side_two_left_right = "../assets/key/side/two/left_right/frame_1.xpm";
	ptr_gate = "../assets/gate/frame_1.xpm";
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
	img_road_three_side_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_down, &x, &y);
	img_road_three_side_left = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_left, &x, &y);
	img_road_three_side_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_road_three_side_right, &x, &y);
	img_inside_road = mlx_xpm_file_to_image(mlx_ptr, ptr_inside_road, &x, &y);
	img_inside_road_shadows = mlx_xpm_file_to_image(mlx_ptr,
			ptr_inside_road_shadows, &x, &y);
	img_inside_wall = mlx_xpm_file_to_image(mlx_ptr, ptr_inside_wall, &x, &y);
	img_char_corner_left_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_corner_left_down, &x, &y);
	img_char_corner_left_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_corner_left_up, &x, &y);
	img_char_corner_right_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_corner_right_down, &x, &y);
	img_char_corner_right_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_corner_right_up, &x, &y);
	img_char_inside_road = mlx_xpm_file_to_image(mlx_ptr, ptr_char_inside_road,
			&x, &y);
	img_char_side_one_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_one_down, &x, &y);
	img_char_side_one_left = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_one_left, &x, &y);
	img_char_side_one_up = mlx_xpm_file_to_image(mlx_ptr, ptr_char_side_one_up,
			&x, &y);
	img_char_side_one_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_one_right, &x, &y);
	img_char_side_three_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_three_down, &x, &y);
	img_char_side_three_left = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_three_left, &x, &y);
	img_char_side_three_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_three_right, &x, &y);
	img_char_side_three_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_three_up, &x, &y);
	img_char_side_two_left_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_two_left_right, &x, &y);
	img_char_side_two_up_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_char_side_two_up_down, &x, &y);
	img_enemy_corner_left_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_corner_left_down, &x, &y);
	img_enemy_corner_left_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_corner_left_up, &x, &y);
	img_enemy_corner_right_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_corner_right_down, &x, &y);
	img_enemy_corner_right_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_corner_right_up, &x, &y);
	img_enemy_inside_road = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_inside_road, &x, &y);
	img_enemy_inside_road_shadows = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_inside_road_shadows, &x, &y);
	img_enemy_side_one_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_one_down, &x, &y);
	img_enemy_side_one_left = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_one_left, &x, &y);
	img_enemy_side_one_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_one_up, &x, &y);
	img_enemy_side_one_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_one_right, &x, &y);
	img_enemy_side_three_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_three_down, &x, &y);
	img_enemy_side_three_left = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_three_left, &x, &y);
	img_enemy_side_three_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_three_right, &x, &y);
	img_enemy_side_three_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_three_up, &x, &y);
	img_enemy_side_two_left_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_two_left_right, &x, &y);
	img_enemy_side_two_up_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_enemy_side_two_up_down, &x, &y);
	img_key_corner_left_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_corner_left_down, &x, &y);
	img_key_corner_left_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_corner_left_up, &x, &y);
	img_key_corner_right_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_corner_right_down, &x, &y);
	img_key_corner_right_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_corner_right_up, &x, &y);
	img_key_inside_road = mlx_xpm_file_to_image(mlx_ptr, ptr_key_inside_road,
			&x, &y);
	img_key_side_one_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_one_down, &x, &y);
	img_key_side_one_left = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_one_left, &x, &y);
	img_key_side_one_up = mlx_xpm_file_to_image(mlx_ptr, ptr_key_side_one_up,
			&x, &y);
	img_key_side_one_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_one_right, &x, &y);
	img_key_side_three_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_three_down, &x, &y);
	img_key_side_three_left = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_three_left, &x, &y);
	img_key_side_three_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_three_right, &x, &y);
	img_key_side_three_up = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_three_up, &x, &y);
	img_key_side_two_left_right = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_two_left_right, &x, &y);
	img_key_side_two_up_down = mlx_xpm_file_to_image(mlx_ptr,
			ptr_key_side_two_up_down, &x, &y);
	img_gate = mlx_xpm_file_to_image(mlx_ptr, ptr_gate, &x, &y);
	while (i < rows)
	{
		a = i * x;
		j = 0;
		b = 0;
		while (j < cols)
		{
			if (array[i][j] == 'E')
				mlx_put_image_to_window(mlx_ptr, mlx_win, img_gate, b, a);
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
				else // Inside wall
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_inside_wall,
						b, a);
			}
			if (array[i][j] == '0')
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
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_road_side_up,
						b, a);
				// Lower side of road
				else if (array[i + 1][j] == '1' && array[i - 1][j] != '1'
					&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
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
				// inside road with walls around
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
					&& array[i][j - 1] == '1' && array[i][j + 1] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_inside_road_shadows, b, a);
				// inside road
				else
					mlx_put_image_to_window(mlx_ptr, mlx_win, img_inside_road,
						b, a);
			}
			if (array[i][j] == 'P')
			{
				// Left upper corner
				if (array[i - 1][j] == '1' && array[i][j - 1] == '1'
					&& array[i][j + 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_corner_left_up, b, a);
				// Right upper corner
				else if (array[i - 1][j] == '1' && array[i][j + 1] == '1'
					&& array[i][j - 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_corner_right_up, b, a);
				// Left lower corner
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1'
					&& array[i][j + 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_corner_left_down, b, a);
				// Right lower corner
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1'
					&& array[i][j - 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_corner_right_down, b, a);
				// Upper side of road
				else if (array[i - 1][j] == '1' && array[i + 1][j] != '1'
					&& (array[i][j - 1] != '1' || array[i][j + 1] != '1'))
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_one_up, b, a);
				// Lower side of road
				else if (array[i + 1][j] == '1' && array[i - 1][j] != '1'
					&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_one_down, b, a);
				// Left side of road
				else if (array[i][j - 1] == '1' && array[i][j + 1] != '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_one_left, b, a);
				// Right side of road
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_one_right, b, a);
				// One way up
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_three_down, b, a);
				// One way down
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_three_up, b, a);
				// One way left
				else if (array[i][j + 1] != '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_three_right, b, a);
				// One way right
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_three_left, b, a);
				// Horizontal road
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
					&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_two_up_down, b, a);
				// Vertical road
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_side_two_left_right, b, a);
				// inside road
				else
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_char_inside_road, b, a);
			}
			if (array[i][j] == 'N')
			{
				// Left upper corner
				if (array[i - 1][j] == '1' && array[i][j - 1] == '1'
					&& array[i][j + 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_corner_left_up, b, a);
				// Right upper corner
				else if (array[i - 1][j] == '1' && array[i][j + 1] == '1'
					&& array[i][j - 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_corner_right_up, b, a);
				// Left lower corner
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1'
					&& array[i][j + 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_corner_left_down, b, a);
				// Right lower corner
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1'
					&& array[i][j - 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_corner_right_down, b, a);
				// Upper side of road
				else if (array[i - 1][j] == '1' && array[i + 1][j] != '1'
					&& (array[i][j - 1] != '1' || array[i][j + 1] != '1'))
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_one_up, b, a);
				// Lower side of road
				else if (array[i + 1][j] == '1' && array[i - 1][j] != '1'
					&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_one_down, b, a);
				// Left side of road
				else if (array[i][j - 1] == '1' && array[i][j + 1] != '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_one_left, b, a);
				// Right side of road
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_one_right, b, a);
				// One way up
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_three_down, b, a);
				// One way down
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_three_up, b, a);
				// One way left
				else if (array[i][j + 1] != '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_three_right, b, a);
				// One way right
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_three_left, b, a);
				// Horizontal road
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
					&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_two_up_down, b, a);
				// Vertical road
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_side_two_left_right, b, a);
				// inside road with walls
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
					&& array[i][j - 1] == '1' && array[i][j + 1] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_inside_road_shadows, b, a);
				else
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_enemy_inside_road, b, a);
			}
			if (array[i][j] == 'C')
			{
				// Left upper corner
				if (array[i - 1][j] == '1' && array[i][j - 1] == '1'
					&& array[i][j + 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_corner_left_up, b, a);
				// Right upper corner
				else if (array[i - 1][j] == '1' && array[i][j + 1] == '1'
					&& array[i][j - 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_corner_right_up, b, a);
				// Left lower corner
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1'
					&& array[i][j + 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_corner_left_down, b, a);
				// Right lower corner
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1'
					&& array[i][j - 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_corner_right_down, b, a);
				// Upper side of road
				else if (array[i - 1][j] == '1' && array[i + 1][j] != '1'
					&& (array[i][j - 1] != '1' || array[i][j + 1] != '1'))
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_one_up, b, a);
				// Lower side of road
				else if (array[i + 1][j] == '1' && array[i - 1][j] != '1'
					&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_one_down, b, a);
				// Left side of road
				else if (array[i][j - 1] == '1' && array[i][j + 1] != '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_one_left, b, a);
				// Right side of road
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_one_right, b, a);
				// One way up
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_three_down, b, a);
				// One way down
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_three_up, b, a);
				// One way left
				else if (array[i][j + 1] != '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_three_right, b, a);
				// One way right
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_three_left, b, a);
				// Horizontal road
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
					&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_two_up_down, b, a);
				// Vertical road
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_side_two_left_right, b, a);
				// inside road
				else
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_inside_road, b, a);
			}
			j++;
			b = j * y;
		}
		i++;
	}
	mlx_loop(mlx_ptr);
	/**********************************************************************/
}

#include "so_long.h"
#include "assets.h"

void	putting_images(char **array, int rows, int cols, void *mlx_ptr)
{
	int			i;
	int			j;
	int			a;
	int			b;
	int			x;
	int			y;
	int			Y;
	int			X;
	void		*mlx_win;
	t_assets	pic;
	/**********************ASSIGNING IMAGES TO THE MAP*********************/
	a = 0;
	b = 0;
	i = 0;
	j = 0;
	x = 0;
	y = 0;
	Y = rows * 32;
	X = cols * 32;
/*******************************************/
	mlx_win = mlx_new_window(mlx_ptr, X, Y, "POP!");
	assign_wall_exit(&(pic.wall) , &(pic.exit));
	assign_road(&(pic.road));
	assign_collectible(&(pic.key));
	assign_right_p_middle_corner(&(pic.p_right));
	assign_right_p_side(&(pic.p_right));
	assign_left_p_middle_corner(&(pic.p_left));
	assign_left_p_side(&(pic.p_left));
	point_wall(&(pic.wall), mlx_ptr, &x, &y);
	point_side_road(&(pic.road), mlx_ptr, &x, &y);
	point_corner_middle_road(&(pic.road), mlx_ptr, &x, &y);
	point_side_collectible(&(pic.key), mlx_ptr, &x, &y);
	point_mid_cor_coll_exit(&pic, mlx_ptr, &x, &y);
	point_r_p_middle_corner(&(pic.p_right), mlx_ptr, &x, &y);
	point_r_p_side(&(pic.p_right), mlx_ptr, &x, &y);
	point_l_p_middle_corner(&(pic.p_left), mlx_ptr, &x, &y);
	point_l_p_side(&(pic.p_left), mlx_ptr, &x, &y);
	
	while (i < rows)
	{
		a = i * x;
		j = 0;
		b = 0;
		while (j < cols)
		{
			
			if (array[i][j] == 'E')
				mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.exit.middle.img, b, a);
			if (array[i][j] == '1')
			{
				if (i == 0 && j == 0) 					// Left upper corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.cor.img_l_u, b, a);
				else if (i == 0 && j == cols - 1) 		// Right upper corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.cor.img_r_u, b, a);
				else if (i == rows - 1 && j == 0) 		// Left lower corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.cor.img_l_d, b, a);
				else if (i == rows - 1 && j == cols - 1) // Right lower corner
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.cor.img_r_d, b, a);
				else if (i == 0) 						// Upper side
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.one.img_u, b, a);
				else if (i == rows - 1) 				// Lower side
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.one.img_d, b, a);
				else if (j == 0) 						// Left side
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.one.img_l, b, a);
				else if (j == cols - 1) 				// Right side
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.one.img_r, b, a);
				else									// Inside wall
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.wall.middle.img, b, a);
			}
			if (array[i][j] == '0')
			{
					// Left upper corner of road
				if (array[i - 1][j] == '1' && array[i][j - 1] == '1'
						&& array[i][j + 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.cor.img_l_u, b, a);
					// Right upper corner of road
				else if (array[i - 1][j] == '1' && array[i][j + 1] == '1'
						&& array[i][j - 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.cor.img_r_u, b, a);
					// Left lower corner of road
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1'
						&& array[i][j + 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.cor.img_l_d, b, a);
					// Right lower corner of road
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1'
						&& array[i][j - 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.cor.img_r_d, b, a);
					// Upper side of road
				else if (array[i - 1][j] == '1' && array[i + 1][j] != '1'
						&& (array[i][j - 1] != '1' || array[i][j + 1] != '1'))
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.one.img_u, b, a);
					// Lower side of road
				else if (array[i + 1][j] == '1' && array[i - 1][j] != '1'
						&& array [i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.one.img_d, b, a);
					// Left side of road
				else if (array[i][j - 1] == '1' && array[i][j + 1] != '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.one.img_l, b, a);
					// Right side of road
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.one.img_r, b, a);
					// One way up
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							pic.road.three.img_d, b, a);
					// One way down
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							pic.road.three.img_u, b, a);
					// One way left
				else if (array[i][j + 1] != '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							pic.road.three.img_l, b, a);
					// One way right
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							pic.road.three.img_r, b, a);
					// Horizontal road
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
						&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.two.img_u_d, b, a);
					// Vertical road
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.road.two.img_l_r, b, a);
					//inside road with walls around
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
						&& array[i][j - 1] == '1' && array[i][j + 1] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							pic.road.inside.img_shad, b, a);
					//inside road
				else
					mlx_put_image_to_window(mlx_ptr, mlx_win,
							pic.road.inside.img, b, a);
			}/*
			if (array[i][j] == 'P')
			{
				ft_printf("dkhal n p\n");
					// Left upper corner
				if (array[i - 1][j] == '1' && array[i][j - 1] == '1'
						&& array[i][j + 1] != '1' && array[i + 1][j] != '1')
						{
							ft_printf("zaad dkhal\n");
							if (pic.e_right.cor.img_l_u == NULL)
							{
								ft_printf("lkhraaaa\n");
								break;
							}
							mlx_put_image_to_window(mlx_ptr, mlx_win,
								pic.e_right.cor.img_l_u, b, a);
						}
			}
					 Right upper corner
				else if (array[i - 1][j] == '1' && array[i][j + 1] == '1'
						&& array[i][j - 1] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.cor.img_r_u, b, a);
					// Left lower corner
				else if (array[i + 1][j] == '1' && array[i][j - 1] == '1'
						&& array[i][j + 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.cor.img_l_d, b, a);
					// Right lower corner
				else if (array[i + 1][j] == '1' && array[i][j + 1] == '1'
						&& array[i][j - 1] != '1' && array[i - 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.cor.img_r_d, b, a);
					// Upper side of road
				else if (array[i - 1][j] == '1' && array[i + 1][j] != '1'
						&& (array[i][j - 1] != '1' || array[i][j + 1] != '1'))
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.one.img_u, b, a);
					// Lower side of road
				else if (array[i + 1][j] == '1' && array[i - 1][j] != '1'
						&& array [i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.one.img_d, b, a);
					// Left side of road
				else if (array[i][j - 1] == '1' && array[i][j + 1] != '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.one.img_l, b, a);
					// Right side of road
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.one.img_r, b, a);
					// One way up
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] != '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.three.img_u, b, a);
					// One way down
				else if (array[i][j + 1] == '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.three.img_d, b, a);
					// One way left
				else if (array[i][j + 1] != '1' && array[i][j - 1] == '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.three.img_l, b, a);
					// One way right
				else if (array[i][j + 1] == '1' && array[i][j - 1] != '1'
					&& array[i - 1][j] == '1' && array[i + 1][j] == '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.three.img_r, b, a);
					// Horizontal road
				else if (array[i - 1][j] == '1' && array[i + 1][j] == '1'
						&& array[i][j - 1] != '1' && array[i][j + 1] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.two.img_l_r, b, a);
					// Vertical road
				else if (array[i][j - 1] == '1' && array[i][j + 1] == '1'
						&& array[i - 1][j] != '1' && array[i + 1][j] != '1')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.two.img_u_d, b, a);
					//inside road
				else
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.inside.img, b, a);
			}
			else if (array[i][j] == 'T')
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						pic.e_right.end.img, b, a);
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
						&& array [i][j - 1] != '1' && array[i][j + 1] != '1')
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
					//inside road with walls
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
						&& array [i][j - 1] != '1' && array[i][j + 1] != '1')
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
					//inside road
				else
					mlx_put_image_to_window(mlx_ptr, mlx_win,
						img_key_inside_road, b, a);
			}
			*/
			j++;
			b = j * y;
		}
		i++;
	}
	mlx_loop(mlx_ptr);
	/**********************************************************************/
}

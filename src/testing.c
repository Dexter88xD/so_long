#include "assets.h"
#include "so_long.h"
#include <stdio.h>

void	point_r_p_middle_corner(t_places *p_r, void *mlx_ptr, int *x, int *y)
{
	(*p_r).cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr, (*p_r).cor.ptr_l_u, x,
			y);
}
void	assign_right_p_middle_corner(t_places *p_r)
{
	(*p_r).cor.ptr_l_u = "../assets/P/look_r/corner/left_up/frame_1.xpm";
}

int	main(void)
{
	void		*mlx_ptr;
	void		*mlx_win;
	int			x;
	int			y;
	t_assets	pic;

	/**********************ASSIGNING IMAGES TO THE MAP*********************/
	/*******************************************/
	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, 512, 512, "POP!");
	pic.e_right.cor.img_l_u = NULL;
	pic.e_right.cor.ptr_l_u = NULL;
	assign_right_p_middle_corner(&(pic.p_right));
	printf("%s\n", pic.p_right.cor.ptr_l_u);
	point_r_p_middle_corner(&(pic.p_right), mlx_ptr, &x, &y);
	// pic.e_right.cor.ptr_l_u = "../assets/P/look_r/corner/left_up/frame_1.xpm";
	// pic.e_right.cor.img_l_u = mlx_xpm_file_to_image(mlx_ptr,
	//		pic.e_right.cor.ptr_l_u, &x, &y);
	mlx_put_image_to_window(mlx_ptr, mlx_win, pic.p_right.cor.img_l_u, 32, 32);
	mlx_loop(mlx_ptr);
	/**********************************************************************/
}

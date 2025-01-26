a = 128;
    b = 448;
    int frame = 0;  
    while (1) 
    {   
        if (frame % 8 == 0)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_1, b, a); 
        else if (frame % 8 == 1)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_2, b, a); 
        else if (frame % 8 == 2)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_3, b, a); 
        else if (frame % 8 == 3)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_4, b, a); 
        else if (frame % 8 == 4)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_5, b, a); 
        else if (frame % 8 == 5)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_6, b, a); 
        else if (frame % 8 == 6)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_7, b, a); 
        else if (frame % 8 == 7)
            mlx_put_image_to_window(mlx_ptr, mlx_win,
                    img_key_inside_road_8, b, a); 
        frame++;
        usleep(100000); // Adjust delay for animation speed
    } 

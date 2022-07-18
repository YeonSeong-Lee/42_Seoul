/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:32:02 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/15 20: by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"
#include <stdio.h> //

int	main(int argc, char **argv)
{
	t_map	*map_info;
	void	*mlx;
	void	*win;
	t_data	img;
	int		i;
	int		j;
	int		weight;
	char	*path;
	int		size;

	if (argc != 2)
		exit(EXIT_FAILURE);

	path = file_path(argv[1]);
	map_info = (t_map *)malloc(sizeof(t_map));
	map_info = map_reader(map_info, "./maps/42.fdf");
	size = 1000;
	i = 0;
	j = 0;
	mlx = mlx_init();
	win = mlx_new_window(mlx, size, size, "map color practice");
	img.img = mlx_new_image(mlx, size , size);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);

	while (i < (map_info->height))
	{
		j = 0;
		while (j < (map_info->width))
		{
			if ((map_info->coordinate[i][j]).z >= 3)
				my_mlx_pixel_put(&img, (map_info->coordinate[i][j]).x, (map_info->coordinate[i][j]).y, BLUE);
			else if ((map_info->coordinate[i][j]).z >= -1)
				my_mlx_pixel_put(&img, (map_info->coordinate[i][j]).x, (map_info->coordinate[i][j]).y, BROWN);
			else
				my_mlx_pixel_put(&img, (map_info->coordinate[i][j]).x, (map_info->coordinate[i][j]).y, WHITE);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(mlx, win, img.img, 0, 0);
	mlx_loop(mlx);
}
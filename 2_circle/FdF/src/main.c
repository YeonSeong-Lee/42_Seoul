/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:32:02 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/15 20:22:56 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"
#include <stdio.h> //

int	main(void)
{
	t_map	*map_info;
	void	*mlx;
	void	*win;
	t_data	img;
	int		i;
	int		j;
	int		weight;

	map_info = map_reader(map_info, "./maps/pyra.fdf");
	i = 0;
	j = 0;
	weight = 10;
	mlx = mlx_init();
	win = mlx_new_window(mlx, (map_info->height) * weight, (map_info->width) * weight, "map color practice");
	img.img = mlx_new_image(mlx, map_info->height, map_info->width);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	
	while (i < (map_info->height))
	{
		j = 0;
		while (j < (map_info->width))
		{
			my_mlx_pixel_put(&img, i, j, WHITE);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(mlx, win, img.img, 0, 0);
	mlx_loop(mlx);
}
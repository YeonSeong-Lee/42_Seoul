/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:32:02 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/10 00:44:21 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include "../include/color.h"
#include <stdio.h>

int	main(void)
{
	void	*mlx;
	void	*win;
	t_data	img;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 1000;
	mlx = mlx_init();
	win = mlx_new_window(mlx, size, size, "key_event");
	printf("%s",get_next_line(1));
	img.img = mlx_new_image(mlx, size, size);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			my_mlx_pixel_put(&img, i, j, WHITE);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(mlx, win, img.img, 0, 0);
	mlx_hook(win, X_EVENT_KEY_PRESS, 0, key_press, (void *)(0));
	mlx_loop(mlx);
}
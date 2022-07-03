/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:15:09 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/03 16:36:06 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_controller.h"

static int	offset(int x, int y, int line_length, int bits_per_pixel)
{
	int	offset_result;

	offset_result = (y * line_length + x * (bits_per_pixel / 8));
	return (offset_result);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + offset(x, y, data->line_length, data->bits_per_pixel);
	*(unsigned int*)dst = color;
}
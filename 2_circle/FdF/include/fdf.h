/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:13:36 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/03 14:21:08 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FDF_H
# define FDF_H
#include "./lib/mlx/mlx.h"

typedef struct s_data
{
	void	*img;
	void	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);

#endif
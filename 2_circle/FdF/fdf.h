/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:13:36 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/14 21:59:46 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FDF_H
# define FDF_H
# include "mlx.h"
# include "get_next_line.h"
# include "mlx_controller.h"
# include "libft.h"
# include "color.h"

typedef struct s_map
{
	int	width;
	int	height;
	int **map;
}	t_map;

int		**map_reader(char *path);
size_t	get_height(char *path);
size_t	get_width(char *path);
int		open_map(char *path);


#endif
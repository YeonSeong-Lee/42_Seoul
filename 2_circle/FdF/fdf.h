/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:13:36 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/15 22:02:24 by seongyle         ###   ########seoul.kr  */
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

t_map	*map_reader(t_map *map_info, char *path);
size_t	get_height(char *path);
size_t	get_width(char *path);
int		open_map(char *path);
char	*file_path(char *file_name);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:54:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/15 19:06:07 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static	void set_map(t_map *map_info, char *path, size_t height, size_t width)
{
	int		fd;
	size_t	i;
	size_t	j;
	char	**splited;
	char	*temp;

	fd = open_map(path);
	i = 0;
	while (i < height)
	{
		temp = get_next_line(fd);
		splited = ft_split(temp, ' ');
		j = 0;
		while (j < width)
		{
			(map_info->map)[i][j] = ft_atoi(splited[j]);
			j++;
		}
		i++;
	}
	close(fd);
	map_info->height = height;
	map_info->width = width;
}

t_map	*map_reader(t_map *map_info, char *path)
{
	int 	fd;
	size_t	height;
	size_t	width;
	size_t	i;

	height = get_height(path);
	width = get_width(path);
	map_info->map = (int**)malloc(sizeof(int *) * height);
	(map_info->map)[0] = (int *)malloc(sizeof(int) * width * height);
	i = 1;
	while (i < height)
	{
		(map_info->map)[i] = (map_info->map)[i - 1] + width;
		i++;
	}
	set_map(map_info, path, height, width);
	return (map_info);
}
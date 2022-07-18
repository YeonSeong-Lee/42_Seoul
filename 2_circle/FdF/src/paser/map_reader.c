/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:54:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/18 21:56:18 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static	void set_gap(t_map *map_info)
{
	size_t	gap;
	gap = get_gap_between_dots(map_info);
	map_info->gap = gap;
}

static	void set_coordinate(t_map *map_info)
{
	size_t	x;
	size_t	y;
	size_t	i;

	(map_info->coordinate) = (t_coordinate **)malloc(sizeof(t_coordinate *) * map_info->height);
	if (!map_info->coordinate)
		exit(EXIT_FAILURE);
	(map_info->coordinate)[0] = (t_coordinate *)malloc(sizeof(t_coordinate) * map_info->width * map_info->height);
	if (!map_info->coordinate[0])
		exit(EXIT_FAILURE);
	i = 1;
	while (i < map_info->height)
	{
		(map_info->coordinate)[i] = (map_info->coordinate)[i - 1] + map_info->width;
		i++;
	}
	y = 0;
	while (y < map_info->height)
	{
		x = 0;
		while (x < map_info->width)
		{
			(map_info->coordinate[y][x]).x = x * map_info->gap;
			(map_info->coordinate[y][x]).y = y * map_info->gap;
			(map_info->coordinate[y][x]).z = map_info->map[y][x];
			x++;
		}
		y++;
	}
}

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
	(map_info->map) = (int **)malloc(sizeof(int *) * height);
	if (!map_info->map)
		exit(EXIT_FAILURE);
	(map_info->map)[0] = (int *)malloc(sizeof(int) * width * height);
	if (!map_info->map[0])
		exit(EXIT_FAILURE);
	i = 1;
	while (i < height)
	{
		(map_info->map)[i] = (map_info->map)[i - 1] + width;
		i++;
	}
	set_map(map_info, path, height, width);
	set_gap(map_info);
	set_coordinate(map_info);
	return (map_info);
}
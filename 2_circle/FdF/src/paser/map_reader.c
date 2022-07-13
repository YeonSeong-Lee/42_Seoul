/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:54:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/13 16:48:05 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static	void set_map(int **map, char *path, size_t height, size_t width)
{
	int		fd;
	size_t	i;
	size_t	j;
	char	**splited;
	char	*temp;

	fd = open_map(path);
	temp = get_next_line(fd);
	splited = ft_split(temp, ' ');
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			map[i][j] = ft_atoi(splited[j]);
			j++;
		}
		i++;
	}
	close(fd);
}

int	**map_reader(char *path)
{
	int 	fd;
	int		**map;
	size_t	height;
	size_t	width;
	size_t	i;

	height = get_height(path);
	width = get_width(path);
	map = (int**)malloc(sizeof(int) * height);
	map[0] = (int *)malloc(sizeof(int) * width * height);
	i = 0;
	while (i < height)
	{
		map[i] = map[i - 1] + width;
		i++;
	}
	set_map(map, path, height, width);
	return (map);
}
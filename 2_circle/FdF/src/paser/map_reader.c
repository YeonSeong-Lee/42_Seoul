/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:54:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/12 20:29:52 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../fdf.h"
#include <stdio.h> //

static int	open_map(char *path)
{
	int		fd;
	
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		write(2, "error can not open\n", 18);
		// error일 때 따로 처리해야함.
	}
	return (fd);
}

char	**map_reader(char *path)
{
	int 	fd;
	char	*temp;
	char	**map;
	char	**map_ptr;
	
	int height = 11;
	int	width = 50;

	map = (char**)malloc(sizeof(char) * height);
	map[0] = (char *)malloc(sizeof(char) * width * height);

	int	i = 0;
	while (i < height)
	{
		map[i] = map[i - 1] + width;
		i++;
	}
	map_ptr = map;
	fd = open_map(path);

	i = 0;
	while (temp = get_next_line(fd))
	{
		map[i] = temp;
		i++;
	}
	return (map);
}
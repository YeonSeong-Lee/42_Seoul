/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:54:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/10 22:06:11 by seongyle         ###   ########seoul.kr  */
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
	
	map = (char**)malloc(1000000);
	fd = open_map(path);
	while (temp = get_next_line(fd))
	{
		*map = temp;
		map++;
	}
	return (map);
	//원래 할당되었던 map의 주소를 반환해야함.
}
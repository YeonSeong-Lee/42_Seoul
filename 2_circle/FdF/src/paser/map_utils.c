/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:42:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/18 21:48:54 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../fdf.h"

size_t	get_height(char *path)
{
	char	*temp;	
	size_t	height;
	int		fd;
	
	height = 0;
	fd = open_map(path);
	temp = get_next_line(fd);
	while (temp)
	{
		temp = get_next_line(fd);
		height++;
	}
	close(fd);
	return (height);
}

size_t	get_width(char *path)
{
	char	*temp;
	char	**temp_splited;
	size_t	i;
	int		fd;

	fd = open_map(path);
	temp = get_next_line(fd);
	i = 0;
	temp_splited = ft_split(temp, ' ');
	while (*temp_splited)
	{
		i++;
		temp_splited++;
	}
	close(fd);
	return (i);			
}

int	open_map(char *path)
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

char	*file_path(char *file_name)
{
	char	*temp;

	temp = ft_strjoin("./maps/", file_name);
	return (temp);
}

size_t get_gap_between_dots(t_map *map_info)
{
	size_t	gap;

	gap = 35;
	return (gap);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:42:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/12 21:56:55 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static get_height(t_map *map, int fd)
{
	char	*temp;	
	int		height;

	height = 0;
	while (temp = get_next_line(fd))
		height++;
}

static	get_width(t_map *map, int fd)
{
	
}

void	set_map_size(t_map *map, int fd);
{
	map->height = get_height(fd);	
	map->width = get_width(fd);
}
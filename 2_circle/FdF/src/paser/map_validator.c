/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:56:18 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/12 20:42:07 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	map_validator(char *path)
{
	int		fd;
	int		i;
	t_map	map_size;	

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return ; // error handle
	get_map_size(map_size, fd);
	close(fd);
	if (map_size.width <= 0 || map_size.height <= 0)
		return ; // error handle
}
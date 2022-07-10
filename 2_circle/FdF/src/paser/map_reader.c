/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:54:38 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/10 21:24:57 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../fdf.h"

char	**read_map()
{
	int	fd;
	char	**temp;
	
	fd = open("./maps/42.fdf",  O_RDONLY);
	if (fd < 0)
	{
		write(2, "error can not open\n", 18);
		// error일 때 따로 처리해야함.
	}
	temp = ft_split(get_next_line(fd), ' ');
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:32:02 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/13 16:27:41 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"
#include <stdio.h> //

int	main(void)
{
	int	**temp;
	int i;
	int j;
	
	i = 0;
	j = 0;
	temp = map_reader("./maps/42.fdf");
	while (i < 50)
	{
		while (j < 50)
		{
			printf("%d", temp[i][j]);
			j++;
		}
		i++;
	}
}
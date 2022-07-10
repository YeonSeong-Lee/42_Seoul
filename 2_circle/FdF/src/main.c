/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:32:02 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/10 22:01:16 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"
#include <stdio.h> //

int	main(void)
{
	char	**temp;
	
	temp = map_reader("./maps/42.fdf");
	while (temp)
	{
		printf("%s", *temp);
		temp++;
	}
}
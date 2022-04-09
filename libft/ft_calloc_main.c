/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:23:29 by seongyle          #+#    #+#             */
/*   Updated: 2022/04/08 21:48:04 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("ft_calloc : %d",ft_calloc(SIZE_MAX, SIZE_MAX) == NULL);
	write(1, "\n", 1);
	return (0);
}

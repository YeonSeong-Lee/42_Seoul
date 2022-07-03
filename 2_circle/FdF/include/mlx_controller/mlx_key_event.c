/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_key_event.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:27:21 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/03 17:21:35 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_controller.h"
#include <stdio.h>
#include <stdlib.h>

int	key_press(int keycode)
{
	printf("KEY PRESS : %d\n", keycode);
	if (keycode == KEY_ESC)
		exit(EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_key_event.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:27:21 by seongyle          #+#    #+#             */
/*   Updated: 2022/07/03 17:55:18 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_controller.h"
#include <stdlib.h>
#include <stdio.h>

int		key_press(int keycode, void *param)
{
	if (keycode == KEY_ESC)
		exit(EXIT_SUCCESS);
	return (0);
}

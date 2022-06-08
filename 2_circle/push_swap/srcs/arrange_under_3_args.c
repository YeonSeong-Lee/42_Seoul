/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_under_3_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:16:36 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 16:22:17 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arrange_2_args(t_stack *stack_a)
{
	if (stack_a->size != 2)
		error_exit();
	if (stack_a->top->index > stack_a->bottom->index)
		swap_a(stack_a, 1);
}
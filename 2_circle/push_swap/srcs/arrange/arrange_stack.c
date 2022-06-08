/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:24:32 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 20:55:30 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	arrange_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
		arrange_2_args(stack_a);
	else if (stack_a->size == 3)
		arrange_3_args(stack_a);
}

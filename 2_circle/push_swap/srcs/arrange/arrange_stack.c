/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:24:32 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/09 19:57:22 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	arrange_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size <= 5)
		return (arrange_under_5_args(stack_a, stack_b));
	arrange_big_args(stack_a, stack_b);
}

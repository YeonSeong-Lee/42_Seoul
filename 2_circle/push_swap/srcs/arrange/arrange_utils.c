/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:48:12 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/09 19:48:56 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	identifty_case(t_stack *stack_a)
{
	t_node	*arg_1;
	t_node	*arg_2;
	t_node	*arg_3;

	arg_1 = stack_a->top;
	arg_2 = stack_a->top->next;
	arg_3 = stack_a->bottom;
	if (arg_1->index == 1 && arg_2->index == 0 && arg_3->index == 2)
		return (1);
	if (arg_1->index == 2 && arg_2->index == 1 && arg_3->index == 0)
		return (2);
	if (arg_1->index == 2 && arg_2->index == 0 && arg_3->index == 1)
		return (3);
	if (arg_1->index == 0 && arg_2->index == 2 && arg_3->index == 1)
		return (4);
	if (arg_1->index == 1 && arg_2->index == 2 && arg_3->index == 0)
		return (5);
	return (0);
}

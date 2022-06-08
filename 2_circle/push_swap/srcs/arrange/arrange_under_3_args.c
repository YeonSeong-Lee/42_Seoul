/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_under_3_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:16:36 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 20:19:31 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	arrange_2_args(t_stack *stack_a)
{
	if (stack_a->size != 2)
		error_exit();
	if (stack_a->top->index > stack_a->bottom->index)
		swap_a(stack_a, 1);
}

static	int	identifty_case(t_stack *stack_a)
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

void	arrange_3_args(t_stack *stack_a)
{
	int	case_num;

	if (stack_a->size != 3)
		error_exit();
	case_num = identifty_case(stack_a);
	if (case_num == 1)
		swap_a(stack_a, 1);
	else if (case_num == 2)
	{
		swap_a(stack_a, 1);
		rotate_reverse_a(stack_a, 1);
	}
	else if (case_num == 3)
		rotate_a(stack_a, 1);
	else if (case_num == 4)
	{
		swap_a(stack_a, 1);
		rotate_a(stack_a, 1);
	}
	else if (case_num == 5)
		rotate_reverse_a(stack_a, 1);
}

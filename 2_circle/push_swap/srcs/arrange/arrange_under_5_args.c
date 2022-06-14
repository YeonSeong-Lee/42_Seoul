/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_under_5_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:16:36 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/14 21:13:59 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	arrange_2_args(t_stack *stack_a)
{
	if (stack_a->size != 2)
		error_exit();
	if (stack_a->top->index > stack_a->bottom->index)
		swap_a(stack_a, 1);
}

static void	arrange_3_args(t_stack *stack_a)
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

static	void	arrange_4_args(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size != 4)
		error_exit();
	while (stack_a->top)
	{
		if (stack_a->top->index == 0)
		{
			push_b(stack_b, stack_a, 1);
			arrange_3_args(stack_a);
			push_a(stack_a, stack_b, 1);
			return ;
		}
		rotate_a(stack_a, 1);
	}
}

static	void	arrange_5_args(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size != 5)
		error_exit();
	while (stack_a->top)
	{
		if (stack_a->top->index == 0)
		{
			push_b(stack_b, stack_a, 1);
			break ;
		}
		rotate_a(stack_a, 1);
	}
	while (stack_a->top)
	{
		if (stack_a->top->index == 1)
		{
			push_b(stack_b, stack_a, 1);
			break ;
		}
		rotate_a(stack_a, 1);
	}
	arrange_3_args(stack_a);
	push_a(stack_a, stack_b, 1);
	push_a(stack_a, stack_b, 1);
}

void	arrange_under_5_args(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
		return (arrange_2_args(stack_a));
	if (stack_a->size == 3)
		return (arrange_3_args(stack_a));
	if (stack_a->size == 4)
		return (arrange_4_args(stack_a, stack_b));
	if (stack_a->size == 5)
		return (arrange_5_args(stack_a, stack_b));
}

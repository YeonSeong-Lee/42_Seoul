/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_big_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:49:06 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/11 20:48:23 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	get_smallest_index(t_stack *stack)
{
	t_node	*temp;
	int		i;

	i = 0;
	while (1)
	{
		temp = stack->top;
		while (temp)
		{
			if (temp->index == i)
				return (i);
			temp = temp->next;
		}
		i++;
	}
	return (-1);
}

static	void	move_smallest_a_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = get_smallest_index(stack_a);
	while (stack_a->top && i != -1)
	{
		if (stack_a->top->index == i)
			return (push_b(stack_b, stack_a, 1));
		rotate_a(stack_a, 1);
	}
}

void	arrange_big_args(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 0)
		move_smallest_a_to_b(stack_a, stack_b);
	while (stack_b->size > 0)
		push_a(stack_a, stack_b, 1);
}

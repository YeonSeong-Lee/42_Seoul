/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:21:25 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/04 21:52:11 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->size = 0;
	stack_a->top = NULL;
	stack_a->bottom = NULL;
	stack_b->size = 0;
	stack_b->top = NULL;
	stack_b->bottom = NULL;
}

void	insert_stack(t_stack *stack_a, int data)
{
	t_node	*node;

	node = new_node(data);
	if (stack_a->size == 0)
		stack_a->top = node;
	else
	{
		node->prev = last_node(stack_a);
		last_node(stack_a)->next = node;
	}
	stack_a->bottom = node;
	stack_a->size++;
}

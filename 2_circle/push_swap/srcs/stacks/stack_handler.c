/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:21:25 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/14 21:15:33 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	t_node	*temp;
	t_node	*node;

	temp = stack_a->top;
	node = new_node(data);
	while (temp)
	{
		if (temp->value == node->value)
			error_exit();
		temp = temp->next;
	}
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

void	push(t_stack *stack, t_node *node)
{
	node->prev = NULL;
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

t_node	*pop(t_stack *stack)
{
	t_node	*ret_node;

	if (stack->size == 0)
		return (NULL);
	ret_node = stack->top;
	if (stack->size >= 2)
		stack->top = stack->top->next;
	else
		stack->top = NULL;
	stack->size--;
	return (ret_node);
}

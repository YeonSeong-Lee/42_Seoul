/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:43:47 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 16:25:01 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_stack *stack_a, int is_print)
{
	t_node	*temp;

	if (stack_a->top == NULL || stack_a->top->next == NULL)
		return ;
	temp = stack_a->top;
	stack_a->top = temp->next;
	stack_a->top->prev = NULL;
	temp->next = stack_a->top->next;
	temp->prev = stack_a->top;
	stack_a->top->next = temp;
	if (is_print)
		write(1, "sa\n", 3);
}

void	swap_b(t_stack *stack_b, int is_print)
{
	t_node	*temp;

	if (stack_b->top == NULL || stack_b->top->next == NULL)
		return ;
	temp = stack_b->top;
	stack_b->top = temp->next;
	stack_b->top->prev = NULL;
	temp->next = stack_b->top->next;
	temp->prev = stack_b->top;
	stack_b->top->next = temp;
	if (is_print)
		write(1, "sb\n", 3);
}

void	swap_both(t_stack *stack_a, t_stack *stack_b)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	write(1, "ss\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:27:54 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 16:24:57 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_stack *stack_a, int is_print)
{
	if (stack_a->size <= 1)
		return ;
	stack_a->bottom = stack_a->top;
	stack_a->bottom->prev = last_node(stack_a);
	stack_a->top = stack_a->top->next;
	stack_a->bottom->next = NULL;
	stack_a->top->prev = NULL;
	if (is_print)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stack *stack_b, int is_print)
{
	if (stack_b->size <= 1)
		return ;
	stack_b->bottom = stack_b->top;
	stack_b->bottom->prev = last_node(stack_b);
	stack_b->top = stack_b->top->next;
	stack_b->bottom->next = NULL;
	stack_b->top->prev = NULL;
	if (is_print)
		write(1, "rb\n", 3);
}

void	rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size <= 1 || stack_a->size <= 1)
		return ;
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	write(1, "rr\n", 3);
}

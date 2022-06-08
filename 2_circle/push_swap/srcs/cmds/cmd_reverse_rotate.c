/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_reverse_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:05:15 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 16:25:55 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_reverse_a(t_stack *stack_a, int is_print)
{
	t_node	*temp_bottom;
	t_node	*temp_bottom_prev;

	if (stack_a->size <= 1)
		return ;
	temp_bottom = stack_a->bottom;
	temp_bottom_prev = stack_a->bottom->prev;
	temp_bottom->next = stack_a->top;
	temp_bottom->prev = NULL;
	stack_a->top = temp_bottom;
	stack_a->bottom = temp_bottom_prev;
	stack_a->bottom->next = NULL;
	if (is_print)
		write(1, "rra\n", 3);
}

void	rotate_reverse_b(t_stack *stack_b, int is_print)
{
	t_node	*temp_bottom;
	t_node	*temp_bottom_prev;

	if (stack_b->size <= 1)
		return ;
	temp_bottom = stack_b->bottom;
	temp_bottom_prev = stack_b->bottom->prev;
	temp_bottom->next = stack_b->top;
	temp_bottom->prev = NULL;
	stack_b->top = temp_bottom;
	stack_b->bottom = temp_bottom_prev;
	stack_b->bottom->next = NULL;
	if (is_print)
		write(1, "rrb\n", 3);
}

void	rotate_reverse_both(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size <= 1 || stack_a->size <= 1)
		return ;
	rotate_reverse_a(stack_a, 0);
	rotate_reverse_b(stack_b, 0);
	write(1, "rrr\n", 3);
}

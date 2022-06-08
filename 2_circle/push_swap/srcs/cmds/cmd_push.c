/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:52:47 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 16:24:48 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_stack *stack_a, t_stack *stack_b, int is_print)
{
	t_node	*temp;

	if (stack_b->size == 0)
		return ;
	temp = pop(stack_b);
	push(stack_a, temp);
	if (is_print)
		write(1, "pa\n", 3);
}

void	push_b(t_stack *stack_b, t_stack *stack_a, int is_print)
{
	t_node	*temp;

	if (stack_a->size == 0)
		return ;
	temp = pop(stack_a);
	push(stack_b, temp);
	if (is_print)
		write(1, "pb\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_cmd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:43:47 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/06 14:51:54 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack_a)
{
	t_node	*temp;

	if (stack_a->top == NULL || stack_a->top->next == NULL)
		return ;
	temp = stack_a->top;
	stack_a->top = temp->next;
	temp->next = stack_a->top->next;
	temp->prev = stack_a->top;
	stack_a->top->next = temp;
}
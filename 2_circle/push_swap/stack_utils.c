/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:48:13 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/04 21:52:33 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *new_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		error_exit();
	new_node->value = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

t_node *last_node(t_stack *stack)
{
	t_node	*node;

	node = stack->top;	
	while (node->next != NULL)
		node = node->next;
	return (node);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_big_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:49:06 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/09 20:49:50 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/*
static	t_node	*get_large_pivot(t_stack *stack)
{
	t_node	*temp;

	temp = stack->top;
	while (temp)
	{
		if (temp->index == stack->size * 2 / 3)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

static	t_node	*get_small_pivot(t_stack *stack)
{
	t_node	*temp;

	temp = stack->top;
	while (temp)
	{
		if (temp->index == stack->size / 3)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

static	void	move_a_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	ra_times;
	int	pb_times;
	int	rb_times;

	if (stack_a->size <= 5)
		return (arrange_under_5_args(stack_a, stack_b));
	i = -1;
	ra_times = 0;
	pb_times = 0;
	rb_times = 0;
	while (i++ <= stack_a->size)
	{
		if (stack_a->top->index >= get_large_pivot(stack_a)->index)
		{
			rotate_a(stack_a, 1);
			ra_times++; 
		}
		else
		{
			push_b(stack_b, stack_a, 1);
			pb_times++;
			if (stack_a->top->index >= get_small_pivot(stack_a)->index)
			{
				rotate_b(stack_b, 1);
				rb_times++;
			}
		}
	}
	i = -1;
	while (i++ <= ra_times + rb_times)
		rotate_reverse_both(stack_a, stack_b);
	move_a_to_b(ra_times);
}
*/

void	arrange_big_args(t_stack *stack_a, t_stack *stack_b)
{
	
}

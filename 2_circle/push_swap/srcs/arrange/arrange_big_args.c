/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_big_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:49:06 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/14 20:52:56 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	get_max_bits(t_stack *stack_a)
{
	t_node		*temp;
	size_t		max;
	int			max_bits;

	temp = stack_a->top;
	max = temp->index;
	max_bits = 0;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	arrange_big_args(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;
	int		i;
	int		j;
	int		max_bits;
	int		size;

	i = 0;
	temp = stack_a->top;
	max_bits = get_max_bits(stack_a);
	size = stack_a->size;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp = stack_a->top;
			if (((temp->index >> i) & 1) == 1)
				rotate_a(stack_a, 1);
			else
				push_b(stack_b, stack_a, 1);
		}
		while (stack_b->size > 0)
			push_a(stack_a, stack_b, 1);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:24:32 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/26 14:52:31 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_arranged(t_stack *stack_a)
{
	size_t	i;
	t_node	*temp;
	
	i = 0;
	temp = stack_a->top;
	while (temp)
	{
		if (i != temp->index)
			return (0);
		temp = temp->next;
		i++;
	}
	return (1);
}

void	arrange_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (is_arranged(stack_a))
		return ;
	if (stack_a->size <= 5)
		return (arrange_under_5_args(stack_a, stack_b));
	arrange_big_args(stack_a, stack_b);
}

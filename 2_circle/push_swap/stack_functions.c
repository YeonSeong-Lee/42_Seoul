/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:21:25 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/02 22:05:27 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // must delted
#include "push_swap.h"

static void extend_stacl(t_stack *ptr_stack)
{
	// memcpy로 기존 스택 복사
}

void	init_stack(t_stack *ptr_stack)
{
	ptr_stack->capacity = 100;
	ptr_stack->size = 0;
	ptr_stack->arr = (int *)malloc(sizeof(int) * ptr_stack->capacity);
}

void    push(t_stack *ptr_stack, int data)
{
	if (ptr_stack->capacity == ptr_stack->size)
	{
		//extend_stack
	}
	(ptr_stack->arr)[ptr_stack->size] = data;
	ptr_stack->size++;
}
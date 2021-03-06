/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:05:15 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/14 20:53:30 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	arg_validator(argc, argv);
	init_stacks(&stack_a, &stack_b);
	arg_parser(argc, argv, &stack_a);
	arg_indexer(&stack_a);
	arrange_stack(&stack_a, &stack_b);
}

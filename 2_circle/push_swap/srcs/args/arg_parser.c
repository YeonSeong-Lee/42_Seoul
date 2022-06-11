/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:20:44 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/11 20:45:31 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	arg_parser(int argc, char **argv, t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	char	**splited;
	int		each_arg;

	i = 0;
	while (i < argc)
	{
		if (i >= 1)
		{
			splited = ft_split(argv[i], ' ');
			while (*splited)
			{
				each_arg = ft_atoi(*splited);
				insert_stack(stack_a, each_arg);
				splited++;
			}
		}
		i++;
	}
}

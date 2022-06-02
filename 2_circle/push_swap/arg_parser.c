/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:20:44 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/02 21:35:21 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // must delted
#include "push_swap.h"

int arg_parser(int argc, char **argv, t_stack stack_a)
{
    int     i;
    char    **splited;
    int     each_arg;
	
	i = 0;
    while (i < argc)
    {
        if (i >= 1)
        {
            splited = ft_split(argv[i], ' ');
            while (*splited)
            {
                each_arg = ft_atoi(*splited);
                push(&stack_a, each_arg);
                printf("size : %d\n", stack_a.size);
                splited++;
            }
        }
        i++;
    }
    return (1);
}
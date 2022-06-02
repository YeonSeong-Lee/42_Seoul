/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:05:15 by seongyle          #+#    #+#             */
/*   Updated: 2022/05/31 17:59:57 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv)
{
    int i;
    char **splited;
    char *each_arg;

    i = 0;
    while (i < argc)
    {
        if (i >= 1)
        {
            splited = ft_split(argv[i], ' ');
            while (*splited)
            {
                each_arg = *splited;
                if (!arg_validator(each_arg))
                    error_exit();
                printf("%s\n", each_arg);
                splited++;
            }
        }
        i++;
    }
}
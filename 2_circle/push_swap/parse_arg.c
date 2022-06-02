/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:04:17 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/02 12:02:40 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int digit_checker(char *str)
{
    if (*str == '+' || *str == '-')
        str++;
    while (*str)
    {
        if (!ft_isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

static int int_cheker(char *str)
{
    
}

int arg_validator(char *str)
{
    if (!digit_checker(str))
        return (0);
    return (1);
}
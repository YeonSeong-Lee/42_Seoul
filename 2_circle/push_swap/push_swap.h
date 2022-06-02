/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:09:29 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/02 21:25:26 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "./lib/libft.h"

typedef struct s_stack
{
    size_t  capacity;
    size_t  size;
    int     *arr;
}   t_stack;

int     arg_validator(int argc, char **argv);
void    error_exit(void);
int     arg_parser(int argc, char **argv, t_stack stack_al);
void    push(t_stack *ptr_stack, int data);
void	init_stack(t_stack *ptr_stack);

#endif
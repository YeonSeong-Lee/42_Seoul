/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:09:29 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/04 17:01:48 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_ARGS_SIZE 500

# include <unistd.h>
# include "./lib/libft.h"

typedef struct s_node
{
	int value;
	struct s_node  *prev;
	struct s_node  *next;
}	t_node;

typedef struct s_stack
{
    size_t  size;
    t_node  *top;
    t_node  *bottom;
}   t_stack;

void	arg_validator(int argc, char **argv);
void    error_exit(void);
void	init_stacks(t_stack *stack_a, t_stack *stack_b);
void	insert_stack(t_stack *stack_a, int data);
void	arg_parser(int argc, char **argv, t_stack *stack_a);


#endif
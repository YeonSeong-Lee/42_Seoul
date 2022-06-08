/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:09:29 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/08 20:26:35 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_ARGS_SIZE 500

# include <unistd.h>
# include "../lib/libft.h"

typedef struct s_node
{
	int				value;
	size_t			index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	size_t	size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

void	arg_validator(int argc, char **argv);
void	error_exit(void);
void	init_stacks(t_stack *stack_a, t_stack *stack_b);
void	insert_stack(t_stack *stack_a, int data);
void	arg_parser(int argc, char **argv, t_stack *stack_a, t_stack *stack_b);
void	arg_indexer(t_stack *stack_a);
t_node	*new_node(int data);
t_node	*last_node(t_stack *stack);
void	push(t_stack *stack, t_node *node);
t_node	*pop(t_stack *stack);
void	swap_a(t_stack *stack_a, int is_print);
void	swap_b(t_stack *stack_b, int is_print);
void	swap_both(t_stack *stack_a, t_stack *stack_b);
void	push_a(t_stack *stack_a, t_stack *stack_b, int is_print);
void	push_b(t_stack *stack_b, t_stack *stack_a, int is_print);
void	rotate_a(t_stack *stack_a, int is_print);
void	rotate_b(t_stack *stack_b, int is_print);
void	rotate_both(t_stack *stack_a, t_stack *stack_b);
void	rotate_reverse_a(t_stack *stack_a, int is_print);
void	rotate_reverse_b(t_stack *stack_b, int is_print);
void	rotate_reverse_both(t_stack *stack_a, t_stack *stack_b);
void	arrange_stack(t_stack *stack_a, t_stack *stack_b);
void	arrange_2_args(t_stack *stack_a);
void	arrange_3_args(t_stack *stack_a);

#endif
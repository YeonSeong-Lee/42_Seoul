/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:32 by seongyle          #+#    #+#             */
/*   Updated: 2022/05/31 18:00:07 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    error_exit(void)
{
    write(2, "error\n",6);
    exit(1);
}

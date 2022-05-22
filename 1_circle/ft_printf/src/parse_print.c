/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:57:16 by seongyle          #+#    #+#             */
/*   Updated: 2022/05/17 19:51:49 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	write_c(const char **str, va_list ap)
{
	char	temp;
	int		ret_len;

	ret_len = 0;
	(*str)++;
	temp = va_arg(ap, int);
	ret_len += write(1, &temp, 1);
	return (ret_len);
}

static int	write_percent(const char **str)
{
	(*str)++;
	return (write(1, "%", 1));
}

int	parse_print(const char **flag, va_list ap)
{
	char	*temp;

	temp = 0;
	if (**flag == 'c')
		return (write_c(flag, ap));
	else if (**flag == 's')
		return (write_string(flag, ap, temp));
	else if (**flag == '%')
		return (write_percent(flag));
	else if (**flag == 'd' || **flag == 'i')
		return (write_integer(flag, ap, temp));
	else if (**flag == 'X' || **flag == 'x')
		return (write_hex(flag, ap, temp));
	else if (**flag == 'p')
		return (write_ptr(flag, ap, temp));
	else if (**flag == 'u')
		return (write_unsinged(flag, ap, temp));
	return (-1);
}

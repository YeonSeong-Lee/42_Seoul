/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:47:08 by seongyle          #+#    #+#             */
/*   Updated: 2022/05/15 17:47:51 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	write_string(const char **str, va_list ap, char *temp)
{
	int	ret_len;

	(*str)++;
	ret_len = 0;
	temp = va_arg(ap, char *);
	if (!temp)
		ret_len += write(1, "(null)", 6);
	else
		ret_len += write(1, temp, ft_strlen(temp));
	return (ret_len);
}

int	write_integer(const char **str, va_list ap, char *temp)
{
	int	ret_len;

	(*str)++;
	ret_len = 0;
	temp = ft_itoa(va_arg(ap, int));
	ret_len += write(1, temp, ft_strlen(temp));
	free(temp);
	temp = 0;
	return (ret_len);
}

int	write_hex(const char **str, va_list ap, char *temp)
{
	int	ret_len;

	temp = ft_hextoa(va_arg(ap, unsigned int), **str);
	(*str)++;
	ret_len = 0;
	ret_len += write(1, temp, ft_strlen(temp));
	free(temp);
	temp = 0;
	return (ret_len);
}

int	write_ptr(const char **str, va_list ap, char *temp)
{
	int	ret_len;

	temp = ft_long_hextoa(va_arg(ap, unsigned long), **str);
	(*str)++;
	ret_len = 0;
	ret_len += write(1, "0x", 2);
	ret_len += write(1, temp, ft_strlen(temp));
	free(temp);
	temp = 0;
	return (ret_len);
}

int	write_unsinged(const char **str, va_list ap, char *temp)
{
	int	ret_len;

	(*str)++;
	ret_len = 0;
	temp = ft_utoa(va_arg(ap, unsigned int));
	ret_len += write(1, temp, ft_strlen(temp));
	free(temp);
	temp = 0;
	return (ret_len);
}

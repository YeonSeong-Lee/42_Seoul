/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:29:18 by seongyle          #+#    #+#             */
/*   Updated: 2022/05/15 18:01:44 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "./lib/libft.h"

int		ft_printf(const char *format, ...);
char	*ft_hextoa(unsigned int n, char type);
char	*ft_long_hextoa(unsigned long n, char type);
char	*ft_utoa(unsigned int n);
int		parse_print(const char **flag, va_list ap);
int		write_string(const char **str, va_list ap, char *temp);
int		write_integer(const char **str, va_list ap, char *temp);
int		write_hex(const char **str, va_list ap, char *temp);
int		write_ptr(const char **str, va_list ap, char *temp);
int		write_unsinged(const char **str, va_list ap, char *temp);

#endif

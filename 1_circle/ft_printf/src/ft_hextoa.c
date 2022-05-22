/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:40:45 by seongyle          #+#    #+#             */
/*   Updated: 2022/05/15 17:13:26 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static	unsigned int	hex_len(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

char	*ft_hextoa(unsigned int n, char type)
{
	char			*ret;
	unsigned int	len;
	unsigned int	captial;

	len = hex_len(n);
	captial = 0;
	if (type == 'X')
		captial = 16;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	while (--len > 0)
	{
		ret[len] = "0123456789abcdef0123456789ABCDEF"[(n % 16) + captial];
		n = (n / 16);
	}
	ret[0] = "0123456789abcdef0123456789ABCDEF"[(n % 16) + captial];
	return (ret);
}

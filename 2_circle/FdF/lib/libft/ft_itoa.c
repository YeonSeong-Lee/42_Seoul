/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:19:23 by seongyle          #+#    #+#             */
/*   Updated: 2022/03/28 21:35:00 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	size_t	integer_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static	size_t	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	len;
	size_t	positive;

	len = integer_len(n);
	if (n < 0)
		positive = 0;
	else
		positive = 1;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	while (--len > 0)
	{
		ret[len] = "0123456789"[ft_abs(n % 10)];
		n = ft_abs(n / 10);
	}
	if (!positive)
		ret[0] = '-';
	else
		ret[0] = "0123456789"[n % 10];
	return (ret);
}

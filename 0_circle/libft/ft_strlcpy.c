/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:31:53 by seongyle          #+#    #+#             */
/*   Updated: 2022/04/04 21:24:48 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t				ft_strlen(const char *s);

size_t	ft_strlcpy(char *restrict dst,
		const char *restrict src,
		size_t dst_size)
{
	size_t	i;

	i = 0;
	if (dst_size)
	{
		while (src != dst && src[i] && i < dst_size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

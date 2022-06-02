/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:29:55 by seongyle          #+#    #+#             */
/*   Updated: 2022/04/06 16:39:53 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	size;

	if (!s)
		return (NULL);
	size = 0;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		size = ft_strlen(s) + 1;
	else
		size = len + 1;
	new_str = (char *)malloc(sizeof(char) * size);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, size);
	return (new_str);
}

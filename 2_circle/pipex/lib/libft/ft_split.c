/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:17:51 by seongyle          #+#    #+#             */
/*   Updated: 2022/04/08 14:45:52 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

static	size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			cnt++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			cnt++;
		i++;
	}
	return (cnt);
}

static	size_t	measure_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	void	free_all(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**array_splited;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	array_splited = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!array_splited)
		return (NULL);
	while (j < count_word(s, c))
	{
		while (s[i] == c)
			i++;
		array_splited[j] = ft_substr(s, i, measure_word_len(&s[i], c));
		if (!array_splited[j++])
		{
			free_all(array_splited);
			return (array_splited = NULL);
		}
		i = i + measure_word_len(&s[i], c) + 1;
	}
	array_splited[j] = NULL;
	return (array_splited);
}

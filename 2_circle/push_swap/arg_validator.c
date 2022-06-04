/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:04:17 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/04 15:03:23 by seongyle         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	digit_checker(char *str)
{
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
	str++;
	}
	return (1);
}

static int	int_checker(char *str)
{
	long long	temp;

	temp = ft_atoll(str);
	if (temp >= -2147483648 && temp <= 2147483647)
		return (1);
	return (0);
}

static int	duplicate_checker(char **str)
{
	int	i;
	int	j;
	int	temp;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * MAX_ARGS_SIZE);
	if (!arr)
		error_exit();
	while (i <= MAX_ARGS_SIZE && *str)
	{
		j = 0;
		temp = ft_atoi(*str);
		while (j < i)
		{
			if (arr[j] == temp)
				error_exit();
			j++;
		}
		arr[i] = temp;
		i++;
		str++;
	}
	free(arr);
	return (1);
}

static	int	arg_checker(char *str)
{
	if (!digit_checker(str) || !int_checker(str))
		return (0);
	return (1);
}

void	arg_validator(int argc, char **argv)
{
	size_t	i;
	char	**splited;
	char	*each_arg;

	if (argc < 1 || !duplicate_checker(argv))
		error_exit();
	i = 0;
	while (i < argc)
	{
		if (i >= 1)
		{
			splited = ft_split(argv[i], ' ');
			while (*splited)
			{
				each_arg = *splited;
				if (!arg_checker(each_arg))
					error_exit();
				splited++;
			}
		}
		i++;
	}
}

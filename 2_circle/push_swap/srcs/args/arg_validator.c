/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:04:17 by seongyle          #+#    #+#             */
/*   Updated: 2022/06/14 21:12:59 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

static	int	white_space_checker(char *str)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = str;
	while (*temp)
	{
		if (*temp == ' ' || *temp == '\n' || *temp == '\r'
			|| *temp == '\t' || *temp == '\v' || *temp == '\f')
			i++;
		temp++;
	}
	if (i == ft_strlen(str))
		error_exit();
	return (1);
}

static	int	arg_checker(char *str)
{
	if (!int_checker(str) || !digit_checker(str))
		return (0);
	return (1);
}

void	arg_validator(int argc, char **argv)
{
	int		i;
	char	**splited;
	char	*each_arg;

	if (argc < 1)
		error_exit();
	i = 0;
	while (i < argc)
	{
		if (i >= 1)
		{
			white_space_checker(argv[i]);
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

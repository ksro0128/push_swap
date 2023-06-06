/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:02:53 by surkim            #+#    #+#             */
/*   Updated: 2023/06/06 11:29:31 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_white(char c)
{
	if (c == 32)
		return (1);
	else
		return (0);
}

long long	ft_atoi(const char *str)
{
	int			i;
	long long	ans;
	long long	flag;

	i = -1;
	flag = 1;
	ans = 0;
	while (str[++i])
		if (is_white(str[i]) == 0)
			break ;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (flag * ans);
		ans = ans * 10 + str[i++] - '0';
	}
	return (flag * ans);
}

int	cnt_num(char *str)
{
	int	i;
	int	cnt;

	i = -1;
	while (str[++i])
		if (is_white(str[i]) == 0)
			break ;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	cnt = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			cnt++;
		i++;
	}
	return (cnt);
}

int	check_num(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (is_white(str[i]) == 0)
			break ;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		print_error_exit();
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			print_error_exit();
		i++;
	}
	if (cnt_num(str) > 10)
		print_error_exit();
	return (1);
}

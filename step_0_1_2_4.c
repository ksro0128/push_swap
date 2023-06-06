/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_0_1_2_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:40:20 by surkim            #+#    #+#             */
/*   Updated: 2023/05/26 14:22:06 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	step_0(t_list *list)
{
	list->flag = 0;
	if (list->cnt == 1)
		list->flag = 1;
	else if (list->cnt == 2)
	{
		if (list->a[0] == 1)
			list->flag = 1;
		else
		{
			sa(list);
			list->flag = 1;
		}
	}
}

void	step_1(t_list *list)
{
	int	tmp;

	tmp = list->cnt / 3 * 2;
	while (list->cnta > tmp && list->cnta > 3)
	{
		if (list->a[0] > tmp && list->a[0] > 3)
			pb(list);
		else
			ra(list, 0);
	}
	tmp = list->cnt / 3;
	while (list->cnta > tmp && list->cnta > 3)
	{
		if (list->a[0] > tmp && list->a[0] > 3)
			pb(list);
		else
			ra(list, 0);
	}
	while (list->cnta > 3)
	{
		if (list->a[0] > 3)
			pb(list);
		else
			ra(list, 0);
	}
}

void	step_2(t_list *list)
{
	if (list->a[0] == 1 && list->a[1] == 2 && list->a[2] == 3)
		return ;
	else if (list->a[0] == 1 && list->a[1] == 3 && list->a[2] == 2)
	{
		sa(list);
		ra(list, 0);
	}
	else if (list->a[0] == 2 && list->a[1] == 1 && list->a[2] == 3)
		sa(list);
	else if (list->a[0] == 2 && list->a[1] == 3 && list->a[2] == 1)
		rra(list, 0);
	else if (list->a[0] == 3 && list->a[1] == 1 && list->a[2] == 2)
		ra(list, 0);
	else if (list->a[0] == 3 && list->a[1] == 2 && list->a[2] == 1)
	{
		sa(list);
		rra(list, 0);
	}
}

void	step_4(t_list *list)
{
	int	i;

	i = 0;
	while (i < list->cnta)
	{
		if (list->a[i] == 1)
			break ;
		i++;
	}
	if (i < list->cnt - i)
	{
		while (--i >= 0)
			ra(list, 0);
	}
	else
	{
		while (list->cnt - i > 0)
		{
			rra(list, 0);
			i++;
		}
	}
}

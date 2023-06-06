/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:41:25 by surkim            #+#    #+#             */
/*   Updated: 2023/05/26 15:02:10 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_idx(t_list *list, int target)
{
	int	i;

	i = 1;
	while (i < list->cnta)
	{
		if (list->a[i - 1] < target && list->a[i] > target)
			return (i);
		if (list->a[i - 1] < target && list->a[i] == 1)
			return (i);
		i++;
	}
	return (0);
}

void	input_b0(t_list *list, int idx)
{
	if (idx < list->cnta - idx)
	{
		while (idx > 0)
		{
			list->cnt_ra += 1;
			idx--;
		}
	}
	else
	{
		while (list->cnta - idx > 0)
		{
			list->cnt_rra += 1;
			idx++;
		}
	}
}

int	minb(t_list *list, int i)
{
	if (i < list->cntb - i)
		return (i);
	else
		return (list->cntb - i);
}

void	exec_cmd(t_list *list, int minidx)
{
	init_cntr(list);
	rotate_b(list, minidx);
	input_b0(list, find_idx(list, list->b[minidx]));
	exec_rr_rrr(list);
	exec_ra_rb_rra_rrb(list);
	pa(list);
}

void	step_3(t_list *list)
{
	int	i;
	int	cost_a;
	int	tmpcost;
	int	minidx;

	while (list->cntb > 0)
	{
		i = 0;
		tmpcost = list->cnt;
		while (i < list->cntb)
		{
			cost_a = find_idx(list, list->b[i]);
			if (cost_a > list->cnta - cost_a)
				cost_a = list->cnta - cost_a;
			if (tmpcost > cost_a + minb(list, i))
			{
				minidx = i;
				tmpcost = cost_a + minb(list, i);
			}
			i++;
		}
		exec_cmd(list, minidx);
	}
}

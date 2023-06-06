/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step3_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:02:27 by surkim            #+#    #+#             */
/*   Updated: 2023/05/26 15:02:41 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list *list, int minidx)
{
	if (minidx < list->cntb - minidx)
	{
		while (minidx > 0)
		{
			list->cnt_rb += 1;
			minidx--;
		}
	}
	else
	{
		while (list->cntb - minidx)
		{
			list->cnt_rrb += 1;
			minidx++;
		}
	}
}

void	init_cntr(t_list *list)
{
	list->cnt_ra = 0;
	list->cnt_rb = 0;
	list->cnt_rra = 0;
	list->cnt_rrb = 0;
}

void	exec_rr_rrr(t_list *list)
{
	while (list->cnt_ra > 0 && list->cnt_rb > 0)
	{
		rr(list);
		list->cnt_ra -= 1;
		list->cnt_rb -= 1;
	}
	while (list->cnt_rra > 0 && list->cnt_rrb > 0)
	{
		rrr(list);
		list->cnt_rra -= 1;
		list->cnt_rrb -= 1;
	}
}

void	exec_ra_rb_rra_rrb(t_list *list)
{
	while (list->cnt_ra > 0)
	{
		ra(list, 0);
		list->cnt_ra -= 1;
	}
	while (list->cnt_rb > 0)
	{
		rb(list, 0);
		list->cnt_rb -= 1;
	}
	while (list->cnt_rra > 0)
	{
		rra(list, 0);
		list->cnt_rra -= 1;
	}
	while (list->cnt_rrb > 0)
	{
		rrb(list, 0);
		list->cnt_rrb -= 1;
	}
}

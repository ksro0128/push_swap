/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb_ra_rb_rr_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:27:06 by surkim            #+#    #+#             */
/*   Updated: 2023/05/31 15:54:35 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa(t_list *list)
{
	int	i;

	if (list->cntb == 0)
		return ;
	i = list->cnta;
	while (i > 0)
	{
		list->a[i] = list->a[i - 1];
		i--;
	}
	list->a[0] = list->b[0];
	list->cnta += 1;
	i = 0;
	while (i < list->cntb - 1)
	{
		list->b[i] = list->b[i + 1];
		i++;
	}
	list->b[i] = 0;
	list->cntb -= 1;
}

void	pb(t_list *list)
{
	int	i;

	if (list->cnta == 0)
		return ;
	i = list->cntb;
	while (i > 0)
	{
		list->b[i] = list->b[i - 1];
		i--;
	}
	list->b[0] = list->a[0];
	list->cntb += 1;
	i = 0;
	while (i < list->cnta - 1)
	{
		list->a[i] = list->a[i + 1];
		i++;
	}
	list->a[i] = 0;
	list->cnta -= 1;
}

void	ra(t_list *list)
{
	int	i;
	int	tmp;

	if (list->cnta <= 1)
		return ;
	tmp = list->a[0];
	i = 0;
	while (i < list->cnta - 1)
	{
		list->a[i] = list->a[i + 1];
		i++;
	}
	list->a[i] = tmp;
}

void	rb(t_list *list)
{
	int	i;
	int	tmp;

	if (list->cntb <= 1)
		return ;
	tmp = list->b[0];
	i = 0;
	while (i < list->cntb - 1)
	{
		list->b[i] = list->b[i + 1];
		i++;
	}
	list->b[i] = tmp;
}

void	rr(t_list *list)
{
	ra(list);
	rb(list);
}

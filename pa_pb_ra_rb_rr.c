/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb_ra_rb_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:44:20 by surkim            #+#    #+#             */
/*   Updated: 2023/05/26 14:19:26 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *list)
{
	int	i;

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
	if (write(1, "pa\n", 3) == -1)
		exit(1);
}

void	pb(t_list *list)
{
	int	i;

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
	if (write(1, "pb\n", 3) == -1)
		exit(1);
}

void	ra(t_list *list, int flag)
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
	if (flag == 0 && write(1, "ra\n", 3) == -1)
		exit(1);
}

void	rb(t_list *list, int flag)
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
	if (flag == 0 && write(1, "rb\n", 3) == -1)
		exit(1);
}

void	rr(t_list *list)
{
	ra(list, 1);
	rb(list, 1);
	if (write(1, "rr\n", 3) == -1)
		exit(1);
}

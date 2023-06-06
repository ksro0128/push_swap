/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:42:51 by surkim            #+#    #+#             */
/*   Updated: 2023/05/26 14:20:03 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *list, int flag)
{
	int	i;
	int	tmp;

	if (list->cnta <= 1)
		return ;
	tmp = list->a[list->cnta - 1];
	i = list->cnta - 1;
	while (i > 0)
	{
		list->a[i] = list->a[i - 1];
		i--;
	}
	list->a[0] = tmp;
	if (flag == 0 && write(1, "rra\n", 4) == -1)
		exit(1);
}

void	rrb(t_list *list, int flag)
{
	int	i;
	int	tmp;

	if (list->cntb <= 1)
		return ;
	tmp = list->b[list->cntb - 1];
	i = list->cntb - 1;
	while (i > 0)
	{
		list->b[i] = list->b[i - 1];
		i--;
	}
	list->b[0] = tmp;
	if (flag == 0 && write(1, "rrb\n", 4) == -1)
		exit(1);
}

void	rrr(t_list *list)
{
	rra(list, 1);
	rrb(list, 1);
	if (write(1, "rrr\n", 4) == -1)
		exit(1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:24:57 by surkim            #+#    #+#             */
/*   Updated: 2023/05/24 17:25:35 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_list *list)
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
}

void	rrb(t_list *list)
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
}

void	rrr(t_list *list)
{
	rra(list);
	rrb(list);
}

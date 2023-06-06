/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:26:18 by surkim            #+#    #+#             */
/*   Updated: 2023/05/24 17:26:52 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_list *list)
{
	int	tmp;

	tmp = list->a[0];
	list->a[0] = list->a[1];
	list->a[1] = tmp;
}

void	sb(t_list *list)
{
	int	tmp;

	tmp = list->b[0];
	list->b[0] = list->b[1];
	list->b[1] = tmp;
}

void	ss(t_list *list)
{
	if (list->cnta >= 2)
		sa(list);
	if (list->cntb >= 2)
		sb(list);
}

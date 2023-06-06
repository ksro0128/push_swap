/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:40:13 by surkim            #+#    #+#             */
/*   Updated: 2023/05/23 15:33:47 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *list)
{
	int	tmp;

	tmp = list->a[0];
	list->a[0] = list->a[1];
	list->a[1] = tmp;
	if (write(1, "sa\n", 3) == -1)
		exit(1);
}

void	sb(t_list *list)
{
	int	tmp;

	tmp = list->b[0];
	list->b[0] = list->b[1];
	list->b[1] = tmp;
	if (write(1, "sb\n", 3) == -1)
		exit(1);
}

void	ss(t_list *list)
{
	if (list->cnta >= 2)
		sa(list);
	if (list->cntb >= 2)
		sb(list);
	if (write(1, "ss\n", 3) == -1)
		exit(1);
}

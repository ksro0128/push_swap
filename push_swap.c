/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:52:51 by surkim            #+#    #+#             */
/*   Updated: 2023/06/06 11:28:24 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_list *list)
{
	int	i;

	i = 0;
	while (i < list->cnta - 1)
	{
		if (list->a[i] > list->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	push_swap(t_list *list)
{
	step_0(list);
	if (list->flag == 1)
		exit(0);
	if (check_sort(list))
		exit(0);
	step_1(list);
	step_2(list);
	step_3(list);
	step_4(list);
}

int	main(int argc, char *argv[])
{
	t_list	list;

	if (argc < 2)
		exit(1);
	setlist(argc, argv, &list);
	check_list(&list);
	push_swap(&list);
	exit(0);
}

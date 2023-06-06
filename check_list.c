/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:42:05 by surkim            #+#    #+#             */
/*   Updated: 2023/05/23 14:42:40 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_list(t_list *list)
{
	int	i;
	int	j;

	i = 0;
	while (i < list->cnt)
	{
		j = 0;
		while (j < list->cnt)
		{
			if (i != j && list->a[i] == list->a[j])
				print_error_exit();
			j++;
		}
		i++;
	}
}

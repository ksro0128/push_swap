/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:57:02 by surkim            #+#    #+#             */
/*   Updated: 2023/05/26 14:36:56 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_arr_free(char **tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

int	count_number(int argc, char *argv[])
{
	int		i;
	int		j;
	char	**tmp;
	int		cnt;

	cnt = 0;
	i = 0;
	while (++i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		if (!tmp)
			continue ;
		j = -1;
		while (tmp[++j] != NULL)
		{
			if (check_num(tmp[j]))
				cnt++;
		}
		double_arr_free(tmp);
	}
	return (cnt);
}

void	push_num(int argc, char *argv[], t_list *list)
{
	int		i;
	int		j;
	char	**tmp;
	int		idx;

	i = 0;
	idx = -1;
	while (++i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		j = -1;
		while (tmp[++j] != NULL)
		{
			list->tmp = ft_atoi(tmp[j]);
			if (list->tmp < -2147483648 || list->tmp > 2147483647)
				print_error_exit();
			list->tmplist[++idx] = (int)list->tmp;
		}
		double_arr_free(tmp);
	}
}

void	change_num(t_list *list)
{
	int	i;
	int	j;
	int	cnt;

	list->a = (int *)malloc(sizeof (int) * list->cnt);
	if (list->a == NULL)
		exit(1);
	i = 0;
	while (i < list->cnt)
	{
		cnt = 0;
		j = 0;
		while (j < list->cnt)
		{
			if (list->tmplist[i] >= list->tmplist[j])
				cnt++;
			j++;
		}
		list->a[i] = cnt;
		i++;
	}
}

void	setlist(int argc, char *argv[], t_list *list)
{
	list->cnt = count_number(argc, argv);
	list->cnta = list->cnt;
	list->cntb = 0;
	list->tmplist = (int *)malloc(sizeof (int) * list->cnt);
	if (list->tmplist == NULL)
		exit(1);
	list->b = (int *)malloc(sizeof (int) * list->cnt);
	if (list->b == NULL)
		exit(1);
	push_num(argc, argv, list);
	change_num(list);
}

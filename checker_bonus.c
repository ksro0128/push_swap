/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:31:19 by surkim            #+#    #+#             */
/*   Updated: 2023/06/06 11:28:01 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	execcmd(t_list *list, char *cmd)
{
	if (ft_strcmp(cmd, "pa\n") == 0)
		pa(list);
	else if (ft_strcmp(cmd, "pb\n") == 0)
		pb(list);
	else if (ft_strcmp(cmd, "ra\n") == 0)
		ra(list);
	else if (ft_strcmp(cmd, "rb\n") == 0)
		rb(list);
	else if (ft_strcmp(cmd, "rr\n") == 0)
		rr(list);
	else if (ft_strcmp(cmd, "rra\n") == 0)
		rra(list);
	else if (ft_strcmp(cmd, "rrb\n") == 0)
		rrb(list);
	else if (ft_strcmp(cmd, "rrr\n") == 0)
		rrr(list);
	else if (ft_strcmp(cmd, "sa\n") == 0)
		sa(list);
	else if (ft_strcmp(cmd, "sb\n") == 0)
		sb(list);
	else if (ft_strcmp(cmd, "ss\n") == 0)
		pb(list);
	else
		print_error_exit();
}

void	read_cmd(t_list *list)
{
	char	*cmd;

	while (1)
	{
		cmd = get_next_line(0);
		if (!cmd)
			return ;
		execcmd(list, cmd);
		free(cmd);
	}
}

void	check_sort(t_list *list)
{
	int	i;

	i = 0;
	while (i < list->cnta - 1)
	{
		if (list->a[i] > list->a[i + 1])
		{
			write(1, "KO\n", 3);
			exit(0);
		}
		i++;
	}
	write(1, "OK\n", 3);
}

int	main(int argc, char *argv[])
{
	t_list	list;

	if (argc < 2)
		exit(1);
	setlist(argc, argv, &list);
	check_list(&list);
	read_cmd(&list);
	check_sort(&list);
	exit(0);
}

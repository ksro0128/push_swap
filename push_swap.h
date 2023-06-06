/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:53:48 by surkim            #+#    #+#             */
/*   Updated: 2023/05/26 15:03:32 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list{
	int			cnt;
	int			cnta;
	int			cntb;
	long long	tmp;
	int			*tmplist;
	int			*a;
	int			*b;
	int			flag;
	int			cnt_ra;
	int			cnt_rb;
	int			cnt_rra;
	int			cnt_rrb;
}t_list;

char			**ft_split(char const *s, char c);
void			print_error_exit(void);
long long		ft_atoi(const char *str);
int				check_num(char *str);
void			setlist(int argc, char *argv[], t_list *list);
void			sa(t_list *list);
void			sb(t_list *list);
void			ss(t_list *list);
void			pa(t_list *list);
void			pb(t_list *list);
void			ra(t_list *list, int flag);
void			rb(t_list *list, int flag);
void			rr(t_list *list);
void			rra(t_list *list, int flag);
void			rrb(t_list *list, int flag);
void			rrr(t_list *list);
void			check_list(t_list *list);
void			step_0(t_list *list);
void			step_1(t_list *list);
void			step_2(t_list *list);
void			step_3(t_list *list);
void			step_4(t_list *list);
void			rotate_b(t_list *list, int minidx);
void			init_cntr(t_list *list);
void			exec_rr_rrr(t_list *list);
void			exec_ra_rb_rra_rrb(t_list *list);

#endif
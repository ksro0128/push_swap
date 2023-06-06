/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:32:06 by surkim            #+#    #+#             */
/*   Updated: 2023/05/24 17:43:49 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

typedef struct s_list{
	int			cnt;
	int			cnta;
	int			cntb;
	long long	tmp;
	int			*tmplist;
	int			*a;
	int			*b;
	int			flag;
}t_list;

typedef struct s_gnl{
	int				fd;
	char			*str;
	struct s_gnl	*next;
}t_gnl;

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
void			ra(t_list *list);
void			rb(t_list *list);
void			rr(t_list *list);
void			rra(t_list *list);
void			rrb(t_list *list);
void			rrr(t_list *list);
void			check_list(t_list *list);
char			*get_next_line(int fd);
char			*ft_strchr(char *s, int c);
char			*ft_strjoin(char *s1, char *s2, size_t s1_len, size_t s2_len);
char			*ft_free(t_gnl **list, char **s1, char *s2, int fd);
void			remove_list(t_gnl **head, int fd);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *s);

#endif
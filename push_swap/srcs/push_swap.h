/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:06:40 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/30 09:01:44 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <stdio.h>

typedef struct		s_lstp
{
	int				data;
	struct s_lstp	*next;
	struct s_lstp	*prev;

}					t_stack;

typedef struct		s_data
{
	int				ac;
	char			**av;
	char			*line;
}					t_data;

void				ft_sa(t_stack **m_skt);
void				ft_pa(t_stack **a_stack, t_stack **b_stack);
void				ft_ra(t_stack **a_stack);
void				ft_rra(t_stack **a_stack);
void				ft_print(t_stack *a_stack);
void				ft_opc(char *s, t_stack **a_stk, t_stack **b_stk, int t);
void				ft_free_arr(char **str);
void				ft_free_ln(t_stack **stk);
int					lst_count(t_stack *m_skt);
int					if_sort(t_stack **a, t_stack **b);
int					if_sorta(t_stack **a);
int					if_minist(t_stack **a);
int					min_count(t_stack *m_skt);
int					if_ab_ra(t_stack **a, t_stack **b);
int					valid_ag(char *s);
int					isnum(char **av, int ac, t_stack **a_stk);
int					check_double(t_stack **a);
#endif

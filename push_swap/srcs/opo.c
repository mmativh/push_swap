/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opo.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:00:24 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/30 09:08:56 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_opo(char *s, t_stack **a_stk, t_stack **b_stk)
{
	if (!ft_strcmp(s, "sa"))
		ft_sa(a_stk);
	if (!ft_strcmp(s, "sb"))
		ft_sa(b_stk);
	if (!ft_strcmp(s, "ss"))
	{
		ft_sa(a_stk);
		ft_sa(b_stk);
	}
	if (!ft_strcmp(s, "pa"))
		ft_pa(a_stk, b_stk);
	if (!ft_strcmp(s, "pb"))
		ft_pa(b_stk, a_stk);
}

static void	ft_opo2(char *s, t_stack **a_stk, t_stack **b_stk)
{
	if (!ft_strcmp(s, "ra"))
		ft_ra(a_stk);
	if (!ft_strcmp(s, "rb"))
		ft_ra(b_stk);
	if (!ft_strcmp(s, "rr"))
	{
		ft_ra(a_stk);
		ft_ra(b_stk);
	}
	if (!ft_strcmp(s, "rra"))
		ft_rra(a_stk);
	if (!ft_strcmp(s, "rrb"))
		ft_rra(b_stk);
	if (!ft_strcmp(s, "rrr"))
	{
		ft_rra(a_stk);
		ft_rra(b_stk);
	}
}

void		ft_opc(char *s, t_stack **a, t_stack **b, int t)
{
	if (t)
		ft_putendl(s);
	if (if_sort(a, b))
		return ;
	if (s[0] == 'r')
		ft_opo2(s, a, b);
	else
		ft_opo(s, a, b);
}

int			check_double(t_stack **a)
{
	int		num;
	t_stack *a_s;
	t_stack *b;

	a_s = *a;
	while (a_s)
	{
		num = a_s->data;
		b = a_s;
		while (b->next)
		{
			b = b->next;
			if (b->data == num)
				return (1);
		}
		a_s = a_s->next;
	}
	return (0);
}

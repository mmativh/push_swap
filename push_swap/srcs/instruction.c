/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:33:23 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/28 14:07:12 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **a)
{
	size_t	tmp;
	t_stack	*m_stk;

	m_stk = *a;
	if (min_count(m_stk))
		return ;
	tmp = m_stk->next->data;
	m_stk->next->data = m_stk->data;
	m_stk->data = tmp;
}

void	a_sort(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *a;
	t_stack *b;

	a = *a_stk;
	b = *b_stk;
	if (lst_count(*b_stk) > 1)
		*b_stk = b->next;
	else
		*b_stk = NULL;
	*a_stk = b;
	b->next = a;
	b->prev = NULL;
	a->prev = b;
}

void	ft_pa(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *a;
	t_stack *b;

	a = *a_stk;
	b = *b_stk;
	if (lst_count(b) == 0)
		return ;
	if (a)
		a_sort(a_stk, b_stk);
	else
	{
		if (lst_count(*b_stk) > 1)
			*b_stk = b->next;
		else
			*b_stk = NULL;
		*a_stk = b;
		b->next = NULL;
		b->prev = NULL;
	}
}

void	ft_rra(t_stack **b)
{
	t_stack *tmp_last;
	t_stack *sec_l;
	t_stack *head;

	tmp_last = *b;
	sec_l = *b;
	head = *b;
	if (min_count(*b))
		return ;
	while (sec_l->next->next)
		sec_l = sec_l->next;
	tmp_last = sec_l->next;
	tmp_last->next = head;
	head->prev = tmp_last;
	sec_l->next = NULL;
	tmp_last->prev = NULL;
	*b = tmp_last;
}

void	ft_ra(t_stack **b)
{
	t_stack *tmp_last;
	t_stack *sec;
	t_stack *head;

	tmp_last = *b;
	head = *b;
	if (min_count(*b))
		return ;
	sec = (*b)->next;
	while (tmp_last->next)
		tmp_last = tmp_last->next;
	tmp_last->next = head;
	head->next = NULL;
	head->prev = tmp_last;
	sec->prev = NULL;
	*b = sec;
}

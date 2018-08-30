/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 09:20:22 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/28 09:55:28 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		lst_count(t_stack *m_stk)
{
	int i;

	i = 0;
	if (!m_stk)
		return (0);
	if (m_stk->next == NULL)
		return (1);
	while (m_stk)
	{
		i++;
		m_stk = m_stk->next;
	}
	return (i);
}

void	ft_print(t_stack *m_stk)
{
	fprintf(stderr, "print stack: \n");
	while (m_stk)
	{
		fprintf(stderr, "| %d ", m_stk->data);
		m_stk = m_stk->next;
	}
	fprintf(stderr, "\n");
}

int		min_count(t_stack *m_stk)
{
	int c;

	c = lst_count(m_stk);
	if (c == 0 || c == 1)
		return (1);
	else
		return (0);
}

int		if_sort(t_stack **a, t_stack **b)
{
	t_stack *stk;

	stk = *a;
	if (lst_count(*b) == 0)
	{
		if (min_count(*a))
			return (1);
		while (stk->next)
		{
			if (stk->next->data < stk->data)
				return (0);
			stk = stk->next;
		}
		return (1);
	}
	else
		return (0);
}

int		if_sorta(t_stack **a)
{
	t_stack *stk;

	stk = *a;
	if (min_count(*a))
		return (1);
	while (stk->next)
	{
		if (stk->next->data < stk->data)
			return (0);
		stk = stk->next;
	}
	return (1);
}

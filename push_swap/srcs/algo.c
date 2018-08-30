/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:10:06 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/30 08:09:21 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*last_s(t_stack **a)
{
	t_stack	*b_s;

	b_s = *a;
	while (b_s->next)
		b_s = b_s->next;
	return (b_s);
}

int		find_min(t_stack **a)
{
	t_stack	*b_s;
	int		i;

	b_s = *a;
	i = 0;
	while (b_s->next)
	{
		if (b_s->data == if_minist(a))
			break ;
		b_s = b_s->next;
		i++;
	}
	return (i);
}

void	sort(t_stack **a, t_stack **b, int c)
{
	t_stack	*a_lst;

	a_lst = *a;
	if (a_lst->data == if_minist(a))
		ft_opc("pb", a, b, 1);
	else if (a_lst->next->data == if_minist(a))
	{
		if (a_lst->data > last_s(a)->data)
			ft_opc("ra", a, b, 1);
		else
			ft_opc("sa", a, b, 1);
	}
	else if (last_s(a)->data == if_minist(a))
	{
		if (a_lst->data > a_lst->next->data)
			ft_opc("sa", a, b, 1);
		ft_opc("rra", a, b, 1);
	}
	else
	{
		if ((c / 2) > find_min(a))
			ft_opc("ra", a, b, 1);
		else
			ft_opc("rra", a, b, 1);
	}
}

int		if_ab_ra(t_stack **a, t_stack **b)
{
	int	c;

	if (if_sort(a, b))
		return (0);
	if (!(c = lst_count(*a)))
		return (0);
	if (!if_sorta(a))
		sort(a, b, c);
	else
		ft_opc("pa", a, b, 1);
	return (1);
}

int		if_minist(t_stack **a)
{
	t_stack	*b_s;
	int		min;

	b_s = *a;
	min = 2147483647;
	while (b_s)
	{
		if (min > b_s->data)
			min = b_s->data;
		b_s = b_s->next;
	}
	return (min);
}

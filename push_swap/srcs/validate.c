/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:00:24 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/30 09:20:50 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign(t_stack **a_stack, t_stack *nnode, t_stack **head)
{
	if (*a_stack)
	{
		while ((*a_stack)->next)
			(*a_stack) = (*a_stack)->next;
		(*a_stack)->next = nnode;
		nnode->prev = (*a_stack);
		*a_stack = (*a_stack)->next;
	}
	else
	{
		(*a_stack) = nnode;
		(*head) = (*a_stack);
	}
}

void	ft_astack(char **av, t_stack **a_stack)
{
	t_stack	*head;
	t_stack	*nnode;
	int		i;
	char	**ns;

	i = 0;
	ns = av;
	head = *a_stack;
	while (av[i])
	{
		nnode = (t_stack *)malloc(sizeof(t_stack));
		nnode->data = ft_atoi(av[i]);
		nnode->next = NULL;
		nnode->prev = NULL;
		assign(a_stack, nnode, &head);
		i++;
	}
	*a_stack = head;
	ft_free_arr(ns);
}

int		checknum(char **ch)
{
	int		c;
	char	*num;

	c = 0;
	while (ch[c])
	{
		num = ft_itoa(ft_atoi(ch[c]));
		if (ft_strcmp(num, ch[c]))
		{
			free(num);
			ft_free_arr(ch);
			return (0);
		}
		c++;
		free(num);
	}
	return (1);
}

int		isnum(char **av, int ac, t_stack **a_stk)
{
	int		i;
	char	**ch;

	i = 1;
	while (i < ac)
	{
		ch = ft_strsplit(av[i], ' ');
		if (!checknum(ch))
			return (0);
		ft_astack(ch, a_stk);
		i++;
	}
	if (check_double(a_stk))
		return (0);
	return (1);
}

int		valid_ag(char *s)
{
	if (!ft_strcmp(s, "sa") || !ft_strcmp(s, "sb") || !ft_strcmp(s, "ss"))
		return (1);
	if (!ft_strcmp(s, "pa") || !ft_strcmp(s, "pb") || !ft_strcmp(s, "ra"))
		return (1);
	if (!ft_strcmp(s, "rb") || !ft_strcmp(s, "rr") || !ft_strcmp(s, "rra"))
		return (1);
	if (!ft_strcmp(s, "rrb") || !ft_strcmp(s, "rrr"))
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:17:42 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/30 08:20:56 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_arr(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str[i]);
	free(str);
}

void	ft_free_ln(t_stack **t)
{
	t_stack *tmp;
	t_stack	*a;

	a = *t;
	while (a)
	{
		tmp = a;
		a = a->next;
		free(tmp);
	}
}

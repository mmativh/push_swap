/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:00:24 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/30 09:19:49 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack				*stk_a;
	t_stack				*stk_b;
	unsigned long int	i;

	stk_a = NULL;
	stk_b = NULL;
	i = 0;
	if (ac >= 2)
	{
		if (isnum(av, ac, &stk_a))
			while (if_ab_ra(&stk_a, &stk_b))
				i++;
	}
	ft_free_ln(&stk_a);
	return (0);
}

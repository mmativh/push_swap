/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:00:24 by mmathivh          #+#    #+#             */
/*   Updated: 2018/08/30 07:46:52 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check(t_stack **stk_a, t_stack **stk_b, t_data *data)
{
	char *line;

	line = data->line;
	if (isnum(data->av, data->ac, stk_a))
	{
		while (get_next_line(0, &line))
		{
			if (valid_ag(line))
				ft_opc(line, stk_a, stk_b, 0);
			else
			{
				write(2, "Error\n", 6);
				return ;
			}
			free(line);
		}
		if (if_sort(stk_a, stk_b))
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	else
		write(2, "Error\n", 6);
}

int		main(int ac, char **av)
{
	t_data	data;
	t_stack	*stk_a;
	t_stack	*stk_b;

	stk_a = NULL;
	stk_b = NULL;
	data.ac = ac;
	data.av = av;
	if (ac >= 2)
		check(&stk_a, &stk_b, &data);
	ft_free_ln(&stk_a);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:02:59 by saandria          #+#    #+#             */
/*   Updated: 2024/04/30 09:12:47 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(char **args, int i)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		value;

	value = ft_atoi(args[i]);
	stack = stack_new(value);
	i++;
	while (args[i])
	{
		value = ft_atoi(args[i]);
		tmp = stack_new(value);
		add_stack(&stack, tmp);
		i++;
	}
	return (stack);
}

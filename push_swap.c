/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:02:59 by saandria          #+#    #+#             */
/*   Updated: 2024/05/13 14:49:42 by saandria         ###   ########.fr       */
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

void	as_index(t_stack **stack, int *tab)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (i < stack_size(*stack))
	{
		tmp = (*stack);
		while (tmp)
		{
			if (tab[i] == tmp->value)
			{
				tmp->index = i;
				break ;
			}	
			tmp = tmp->next;
		}
		i++;
	}
}

void	a_to_b(t_stack **a, t_stack **b)
{
	int	*tab;
	int	chunk;
	int	size;

	size = stack_size(*a);
	tab = create_array(*a);
	buble_sort(tab, stack_size(*a));
	as_index(a, tab);
	if (stack_size(*a) <= 250)
		chunk = stack_size(*a) / 10;
	else
		chunk = stack_size(*a) / 20;
	while (stack_size(*b) < size)
	{
		push_min(a, b, chunk);
		free(tab);
		tab = create_array(*a);
		buble_sort(tab, stack_size(*a));
		as_index(a, tab);
	}
}
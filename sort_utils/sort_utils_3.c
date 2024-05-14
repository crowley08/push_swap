/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:10:01 by saandria          #+#    #+#             */
/*   Updated: 2024/05/14 13:49:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max_place(t_stack **stack)
{
	int		i;
	int		j;
	t_stack	*tmp;

	i = get_max(stack);
	tmp = (*stack);
	j = 1;
	while (tmp->value != i)
	{
		tmp = tmp->next;
		j++;
	}
	return (j);
}

void	max_to_top(t_stack **b)
{
	int	first;
	int	max;
	int	max_place;
	int	i;

	i = stack_size(*b);
	max = get_max(b);
	max_place = get_max_place(b);
	first = first_value(b);
	while (first != max)
	{
		if (max_place > (i / 2))
			rrb(b);
		else if (max_place <= (i / 2))
			rb(b);
		first = first_value(b);
	}
}

void	b_to_a(t_stack **a, t_stack **b)
{
	while (stack_size(*b) > 0)
	{
		max_to_top(b);
		pa(b, a);
	}
}

void	min_to_top(t_stack **a)
{
	int	first;
	int	min;
	int	min_place;
	int	i;

	i = stack_size(*a);
	min = get_min(a);
	min_place = get_min_place(a);
	first = first_value(a);
	while (first != min)
	{
		if (min_place > (i / 2))
			rra(a);
		else if (min_place <= (i / 2))
			ra(a);
		first = first_value(a);
	}
}

int	get_min_place(t_stack **stack)
{
	int		i;
	int		j;
	t_stack	*tmp;

	i = get_min(stack);
	tmp = (*stack);
	j = 1;
	while (tmp->value != i)
	{
		tmp = tmp->next;
		j++;
	}
	return (j);
}

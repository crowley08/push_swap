/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 09:19:44 by saandria          #+#    #+#             */
/*   Updated: 2024/05/08 11:33:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	first_value(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	return (tmp->value);
}
/*
int	second(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next;
	return (tmp->value);
}

int	third(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next->next;
	return (tmp->value);
}

int	fourth(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next->next->next;
	return (tmp->value);
}
*/
int	last_value(t_stack **stack)
{
	t_stack	*tmp;

	tmp = find_last(*stack);
	return (tmp->value);
}

int	get_min(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;
	int		i;

	i = stack_size(*stack);
	tmp1 = (*stack);
	tmp2 = (*stack);
	while(i > 0)
	{
		if (tmp1->value <= tmp2->value)
		{
			tmp1 = tmp1;
			tmp2 = tmp2->next;
		}
		else if (tmp1->value > tmp2->value)
		{
			tmp1 = tmp2;
			tmp2 = tmp2->next;
		}
		i--;
	}
	return (tmp1->value);
}

int	get_min_index(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;
	int		i;

	i = stack_size(*stack);
	tmp1 = (*stack);
	tmp2 = (*stack);
	while(i > 0)
	{
		if (tmp1->value <= tmp2->value)
		{
			tmp1 = tmp1;
			tmp2 = tmp2->next;
		}
		else if (tmp1->value > tmp2->value)
		{
			tmp1 = tmp2;
			tmp2 = tmp2->next;
		}
		i--;
	}
	return (tmp1->index);
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


void	min_to_top(t_stack **a)
{
	int	first;
	int	min;
	int min_place;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 09:19:44 by saandria          #+#    #+#             */
/*   Updated: 2024/05/14 13:49:44 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	first_value(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	return (tmp->value);
}

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
	while (i > 0)
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

int	get_max(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = (*stack);
	tmp2 = (*stack);
	while (tmp2)
	{
		if (tmp1->value >= tmp2->value)
			tmp2 = tmp2->next;
		else if (tmp1->value < tmp2->value)
		{
			tmp1 = tmp2;
			tmp2 = tmp2->next;
		}
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
	while (i > 0)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:41:14 by saandria          #+#    #+#             */
/*   Updated: 2024/05/14 13:49:31 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_min(t_stack **a, t_stack **b, int chunk)
{
	int	top;
	int	i;

	top = from_top(a, chunk);
	i = top;
	to_r(a, b, chunk, i);
}

int	get_val_top(t_stack **a, int chunk)
{
	t_stack	*tmp;

	tmp = (*a);
	while (tmp)
	{
		if (tmp->index < chunk)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (-1);
}

int	get_val_back(t_stack **a, int chunk)
{
	t_stack	*tmp;

	tmp = find_last(*a);
	while (tmp->prev)
	{
		if (tmp->index < chunk)
			return (tmp->value);
		tmp = tmp->prev;
	}
	return (-1);
}

int	from_top(t_stack **a, int chunk)
{
	int		i;
	t_stack	*tmp;

	tmp = (*a);
	i = 1;
	while (tmp)
	{
		if (tmp->index < chunk)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (-1);
}

int	from_back(t_stack **a, int chunk)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	tmp = find_last(*a);
	while (tmp->prev)
	{
		if (tmp->index < chunk)
			return (i);
		tmp = tmp->prev;
		i++;
	}
	return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:32:51 by saandria          #+#    #+#             */
/*   Updated: 2024/05/14 13:50:01 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_end(t_stack **a, t_stack **b, int chunk)
{
	if (stack_size(*b) == chunk - 1 && (*a)->index < chunk)
	{
		min_to_top(a);
		pb(a, b);
	}
}

void	to_r(t_stack **a, t_stack **b, int chunk, int i)
{
	int	top_val;
	int	median;

	median = chunk / 2;
	top_val = get_val_top(a, chunk);
	while (first_value(a) != top_val && i >= 1)
	{
		ra(a);
		i--;
	}
	pb(a, b);
	if ((*b)->index < median)
	{
		if (stack_size(*a) > 0 && (*a)->index > chunk)
			rr(a, b);
		else
			rb(b);
	}
}

void	to_rr(t_stack **a, t_stack **b, int chunk, int j)
{
	int	top_val;
	int	back_val;
	int	median;

	median = chunk / 2;
	top_val = get_val_top(a, chunk);
	back_val = get_val_back(a, chunk);
	while (first_value(a) != back_val && j >= 1)
	{
		rra(a);
		j--;
	}
	pb(a, b);
	if ((*b)->index < median)
	{
		rb(b);
	}
}

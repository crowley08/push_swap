/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:57:44 by saandria          #+#    #+#             */
/*   Updated: 2024/05/14 13:37:51 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*a)->value;
	n2 = (*a)->next->value;
	n3 = (*a)->next->next->value;
	if (n1 < n2 && n2 < n3)
		return ;
	else if (n1 < n2 && n2 > n3 && n3 > n1)
	{
		sa(a);
		ra(a);
	}
	else if (n1 > n2 && n2 < n3 && n3 > n1)
		sa(a);
	else if (n1 < n2 && n2 > n3 && n3 < n1)
		rra(a);
	else if (n1 > n2 && n2 > n3)
	{
		ra(a);
		sa(a);
	}
	else if (n1 > n2 && n2 < n3 && n3 < n1)
		ra(a);
}

void	ft_sort_five(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
	{
		min_to_top(a);
		pb(a, b);
	}
	sort_three(a);
	while (stack_size(*b) > 0)
		pa(b, a);
}

void	sort(t_stack *a, t_stack *b)
{
	if (stack_size(a) > 5)
	{
		a_to_b(&a, &b);
		b_to_a(&a, &b);
	}
	if (stack_size(a) == 3)
		sort_three(&a);
	else if (stack_size(a) == 4 || stack_size(a) == 5)
		ft_sort_five(&a, &b);
}

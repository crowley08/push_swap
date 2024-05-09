/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:04:39 by saandria          #+#    #+#             */
/*   Updated: 2024/05/08 11:50:16 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
}

void	sa(t_stack **a)
{
	swap(a);
//	as_index(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap(b);
//	as_index(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
//	as_index(a);
	swap(b);
//	as_index(b);
	write(1, "ss\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:09:19 by saandria          #+#    #+#             */
/*   Updated: 2024/05/09 14:46:44 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack *tmp;

	last = find_last(*stack);
	tmp = (*stack);
	tmp->prev = last;
	last->next = tmp;
	tmp->next->prev = NULL;
	*stack = tmp->next;
	tmp->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:02:25 by saandria          #+#    #+#             */
/*   Updated: 2024/05/08 11:50:05 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*tmp;

	tmp = *stack;
	last = find_last(*stack);
	last->next = tmp;
	last->prev->next = NULL;
	last->prev = NULL;
	tmp->prev = last;
	*stack = last;
}

void	rra(t_stack	**a)
{
	rev_rotate(a);
//	as_index(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
//	as_index(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
//	as_index(a);
	rev_rotate(b);
//	as_index(b);
	write(1, "rrr\n", 4);
}

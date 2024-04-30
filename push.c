/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:34:34 by saandria          #+#    #+#             */
/*   Updated: 2024/04/30 14:24:16 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	tmp = (*src);
	if (!(src))
		return ;
	if (!(tmp->next))
	{
		tmp->next = *dest;
		(*dest)->prev = tmp;
		*dest = tmp;
		*src = NULL;
		return ;
	}
	if (*dest)
		(*dest)->prev = tmp;
	*src = tmp->next;
	(*src)->prev = NULL;
	tmp->next = *dest;
	*dest = tmp;
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:57:44 by saandria          #+#    #+#             */
/*   Updated: 2024/04/30 15:13:54 by saandria         ###   ########.fr       */
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
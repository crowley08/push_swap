/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 09:19:44 by saandria          #+#    #+#             */
/*   Updated: 2024/04/27 17:18:40 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int	first(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	return (tmp->value);
}

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

int	last(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->prev;
	return (tmp->value);
}

int	get_min(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;
	int		i;

	i = stack_size(*stack);
	tmp1 = (*stack);
	tmp2 = (*stack)->next;
	while(i > 0)
	{
		if (tmp1->value < tmp2->value)
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

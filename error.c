/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:47:58 by saandria          #+#    #+#             */
/*   Updated: 2024/05/15 11:48:00 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(t_stack *stack)
{
	int		value;
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = stack;
	tmp2 = tmp1->next;
	while (tmp1)
	{
		value = tmp1->value;
		while (tmp2->next != NULL)
		{
			if (tmp2->value == value)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (0);
}

void	ft_error(void)
{
	printf("\033[1;91m[ERROR]\033[0m\n");
}

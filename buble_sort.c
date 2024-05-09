/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:11:59 by saandria          #+#    #+#             */
/*   Updated: 2024/05/09 03:58:11 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_array(t_stack *stack)
{
	int	tmp;
	int	j;
	int	size;
	int	*tab;

	tmp = 0;
	j = 0;
	size = stack_size(stack);
	tab = malloc(sizeof(int) * (size));
//	printf("\033[1;32m [CREATE]:\033[0m\n");
	while (j < size)
	{
		tab[j] = stack->value;
	//	printf("%d\n", tab[j]);
		stack = stack->next;
		j++;
	}
	//tab[j] = 0;
	return (tab);
}

void	buble_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	tmp = 0;
	while (j <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

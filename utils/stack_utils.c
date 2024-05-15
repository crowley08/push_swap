/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:13:29 by saandria          #+#    #+#             */
/*   Updated: 2024/05/14 13:50:06 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_stack	*find_last(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	add_stack(t_stack **root, t_stack *to_add)
{
	t_stack	*last;

	if (!to_add)
		return ;
	if (!(root) || !(*root))
	{
		(*root)->next = NULL;
		(*root)->prev = NULL;
		return ;
	}
	last = find_last(*root);
	if (!last)
		*root = to_add;
	last->next = to_add;
	to_add->next = NULL;
	to_add->prev = last;
	(*root)->prev = NULL;
}

int	stack_size(t_stack *stack)
{
	t_stack	*tmp;
	int		size;

	size = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}

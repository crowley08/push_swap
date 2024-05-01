/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:40:17 by saandria          #+#    #+#             */
/*   Updated: 2024/04/30 15:13:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		i;

	i = 0;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		i = 0;
	}
	else if (argc > 2)
	{
		args = argv;
		i = 1;
	}
	b = NULL;
	a = create_stack(args, i);
	printf("size a:%d\nsize b:%d\n" , stack_size(a), stack_size(b));
/*	//rra(&a);
	//sa(&a);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	printf("size a:%d\nsize b:%d\n" , stack_size(a), stack_size(b));*/
	if (stack_size(a) == 3)
		sort_three(&a);
	write(1, "a\n", 2);
	while (a)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
	write(1, "b\n", 2);
	while (b)
	{
		printf("%d\n", b->value);
		b = b->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:40:17 by saandria          #+#    #+#             */
/*   Updated: 2024/05/04 11:12:45 by saandria         ###   ########.fr       */
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
/*	printf("\033[1;93m MIN_PLACE : \033[0m %d\n", get_min_place(&a));
	printf("size a:%d\nsize b:%d\n" , stack_size(a), stack_size(b));
	//rra(&a);
	//sa(&a);
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	printf("size a:%d\nsize b:%d\n" , stack_size(a), stack_size(b));*/
	if (stack_size(a) == 3)
		sort_three(&a);
	else if (stack_size(a) == 4 || stack_size(a) == 5)
		ft_sort_five(&a, &b);
	quick_sort(&a, &b);
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
//	printf("\033[1;93m MIN: \033[0m %d\n", get_min(&a));*/
}

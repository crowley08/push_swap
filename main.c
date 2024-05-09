/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:40:17 by saandria          #+#    #+#             */
/*   Updated: 2024/05/09 03:58:14 by saandria         ###   ########.fr       */
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
	int	*tab;
	int	j;

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
//	i = 0;
	b = NULL;
	a = create_stack(args, i);
	printf("\033[1;93m [MIN A]: \033[0m %d    \033[\033[1;93m [INDEX] : \033[0m%d\n", get_min(&a), get_min_index(&a));
	//tab = malloc(sizeof(int) * stack_size(a));
	tab = create_array(a);
	buble_sort(tab, stack_size(a));
	j = 0;
	/*printf("\033[1;32m [SORTED]:\033[0m\n");
	while (j < stack_size(a))
	{
		printf("%d\n", tab[j]);
		j++;
	}*/
	if (stack_size(a) > 5)
		as_index(&a, tab);
	if (stack_size(a) == 3)
		sort_three(&a);
	else if (stack_size(a) == 4 || stack_size(a) == 5)
		ft_sort_five(&a, &b);
	push_min(&a, &b, 20);
	printf("\033[1;98m [BACK_MIN]: \033[0m%d\n", get_val_back(&a, 20));
	printf("\033[1;98m [BACK_MIN COUNt]: \033[0m%d\n", from_back(&a, 20));
	printf("\033[1;98m [TOP_MIN]: \033[0m%d\n", get_val_top(&a, 20));
	printf("\033[1;98m [TOP_MIN COUNt]: \033[0m%d\n", from_top(&a, 20));
//	push_min(&a, &b, 40);
//	push_b_by_chunk(tab, &a, &b);
	printf("\033[1;93m [SIZE A]: \033[0m%d\n\033[1;93m [SIZE B]: \033[0m%d\n" , stack_size(a), stack_size(b));
	printf("\033[1;91m ======A====== \033[0m\n");
	while (a)
	{
		printf("\033[1;92m [%d]   \033[0m %d\n", a->index, a->value);
		a = a->next;
	}
	printf("\033[1;91m ======B====== \033[0m\n");
	while (b)
	{
		printf("\033[1;92m [%d]   \033[0m %d\n", b->index, b->value);
		b = b->next;
	}
}

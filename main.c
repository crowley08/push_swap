/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:40:17 by saandria          #+#    #+#             */
/*   Updated: 2024/05/14 12:56:10 by saandria         ###   ########.fr       */
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
	sort(a, b);
}

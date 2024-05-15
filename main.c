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
	char	*arg;
	int		i;

	i = 0;
	if (argc == 1)
		return (0);
	arg = get_input(argv);
	args = ft_split(arg, ' ');
	free(arg);
	if (!check_input(args))
	{
		ft_error();
		return (0);
	}
	b = NULL;
	a = create_stack(args, i);
	free(args);
	if (is_sorted(a) == 1)
		return (0);
	else
		sort(a, b);
	return (0);
}

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

#include "../push_swap.h"

int	is_num(char *arg)
{
	int	i;

	i = 0;
	if (is_sign(arg[i]) && arg[i + 1] != '\0')
		i++;
	while (arg[i] && ft_isdigit(arg[i]))
		i++;
	if (arg[i] != '\0' && !ft_isdigit(arg[i]))
		return (0);
	return (1);
}

int	check_double(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[j])
		{
			if (j != i && ft_nbr_cmp(args[i], args[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_input(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (!is_num(args[i]))
			return (0);
		i++;
	}
	if (check_double(args))
		return (0);
	return (1);
}

void	ft_error(void)
{
	const char	*red_color;
	const char	*reset_color;

	reset_color = "\033[0m";
	red_color = "\033[0;91m";
	write(1, red_color, 7);
	write(1, "[ERROR]\n", 8);
	write(1, reset_color, 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:10:11 by saandria          #+#    #+#             */
/*   Updated: 2024/05/15 17:10:14 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_value(int value)
{
	if (value > 2147483647 || value < -2147483647)
	{
		ft_error();
		return ;
	}
}

int	ft_nbr_cmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[i] == '-' && s2[j] != '-')
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[i]);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:41:14 by saandria          #+#    #+#             */
/*   Updated: 2024/05/13 14:51:17 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_min(t_stack **a, t_stack **b, int chunk)
{
    int top;
    int back;
    int i;
    int j;
    int k;

    top = from_top(a, chunk);
    back = from_back(a, chunk);
    i = top;
    j = back;
    k = back;
  //  if (top < back)
    to_r(a, b, chunk, i);
//    if (top == back)
  //      to_r(a, b, chunk, k);
    //if (top > back)
      //  to_rr(a, b, chunk, j);
    //push_end(a, b, chunk);
}

int get_val_top(t_stack **a, int chunk)
{
    t_stack *tmp;

    tmp = (*a);
    while (tmp)
    {
        if (tmp->index < chunk)
            return (tmp->value);
        tmp = tmp->next;
    }
    return (-1);
}

int get_val_back(t_stack **a, int chunk)
{
    t_stack *tmp;

    tmp = find_last(*a);
    while (tmp->prev)
    {
        if (tmp->index < chunk)
            return (tmp->value);
        tmp = tmp->prev;
    }
    return (-1);
}

int from_top(t_stack **a, int chunk)
{
    int     i;
    t_stack *tmp;

    tmp = (*a);
    i = 1;
    while (tmp)
    {
        if (tmp->index < chunk)
            return (i);
        tmp = tmp->next;
        i++;
    }
    return (-1);
}

int from_back(t_stack **a, int chunk)
{
    int     i;
    t_stack *tmp;

    i = 1;
    tmp = find_last(*a);
    while (tmp->prev)
    {
        if (tmp->index < chunk)
            return (i);
        tmp = tmp->prev;
        i++;
    }
    return (-1);
}
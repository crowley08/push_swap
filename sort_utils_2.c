/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:41:14 by saandria          #+#    #+#             */
/*   Updated: 2024/05/09 03:49:47 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_min(t_stack **a, t_stack **b, int chunk)
{
    int top;
    int back;
    //int first;
    int top_val;
    int back_val;
    int i;
    int j;

    
    //first = first_value(a);
    top = from_top(a, chunk);
    i = top;
    back = from_back(a, chunk);
    j = back;
    top_val = get_val_top(a, chunk);
    back_val = get_val_back(a, chunk);
    if (top < back)
    {
        while (first_value(a) != top_val && i > 1)
        {
            ra(a);
            i--;
      //   first = first_value(a);
        }
        pb(a, b);
    }
    if (top > back)
    {
        while (first_value(a) != back_val && j > 1);
        {
            rra(a);
            j--;
        //    first = first_value(a);
        }
        pb(a, b);
    }
    if (stack_size(*b) == chunk - 1)
    {
        min_to_top(a);
        pb(a, b);
    }
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
    while (tmp->prev != NULL)
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
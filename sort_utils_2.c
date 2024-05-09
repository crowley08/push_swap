/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:41:14 by saandria          #+#    #+#             */
/*   Updated: 2024/05/09 02:31:57 by saandria         ###   ########.fr       */
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

/*
int find_index_to_move(t_stack *stack, int target)
{
    t_stack *tmp;
    int index;

    tmp = stack;
    index = 0;
    printf("\033[1;91m %d\033[0m\n", target);
    while (tmp)
    {
        if (tmp->value == target)
        {
            if (index <= stack_size(stack) - 1 / 2)
                return (index);
            else
                return (-index);
        }
        tmp = tmp->next;
        index++;
    }
    return (0);
}

int find_best_index_to_move(int *current_chunk, t_stack **a, int chunk_size)
{
    int min_cost;
    int index_to_move;
    int i;
    int cost;
    int index;

    i = 0;
    min_cost = stack_size(*a);
    while (i < chunk_size)
    {
        index = find_index_to_move(*a, current_chunk[i]);
        cost = index;
        if (index < 0)
            cost *= -1;
        
        if (cost < min_cost)
        {
            min_cost = cost;
            index_to_move = index;
        }
        i++;
    }
    return (index_to_move);
}

void    r_or_rr(t_stack **a, int index_to_move)
{
    int i;
    
    i = 0;
    if (index_to_move >= 0)
    {
        i = 0;
        while (i < index_to_move)
        {
            ra(a);
            i++;
        }
    }
    else
    {
        i = 0;
        while (i < -(index_to_move))
        {
            rra(a);
            i++;
        }
    }
}

void    push_b_by_chunk(int *tab, t_stack **a, t_stack **b)
{
    int chunk = 5;
    int chunk_size = stack_size(*a) / chunk;
    int i;
    int j;
    int index_to_move;
    int *current_chunk;

    i = 0;
    while (i < chunk)
    {
        j = 0;
        current_chunk = &tab[i * chunk];
        while (j < chunk_size)
        {
            index_to_move = find_best_index_to_move(current_chunk, a, chunk_size);
            printf("%d\n", index_to_move);
            r_or_rr(a, index_to_move);
            pb(a, b);
            j++;   
        }
        i++;
    }
}
*/
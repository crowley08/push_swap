/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:59:24 by saandria          #+#    #+#             */
/*   Updated: 2024/05/04 11:24:57 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct	s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

/*****swap*****/
void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
/*****rotate*****/
void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
/*****reverse_rotate*****/
void	rev_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
/*****push*****/
void	push(t_stack **src, t_stack **dest);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
/*****stack_utils*****/
t_stack	*stack_new(int value);
t_stack	*find_last(t_stack *stack);
void	add_stack(t_stack **root, t_stack *to_add);
t_stack	*create_stack(char **args, int i);
int		stack_size(t_stack *stack);
/*****sort*****/
void	sort_three(t_stack **a);
int		get_min(t_stack **stack);
int		get_min_place(t_stack **stack);
int		first_value(t_stack **stack);
int		last_value(t_stack **stack);
void	min_to_top(t_stack **a);
void	ft_sort_five(t_stack **a, t_stack **b);

#endif

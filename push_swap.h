/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:59:24 by saandria          #+#    #+#             */
/*   Updated: 2024/05/16 14:17:07 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
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
char	*get_input(char **argv);
void	free_stack(t_stack **a);
void	free_split(char **spl);
void	create_stack_loop(t_stack **stack, char **args, int i, long lvalue);
/*****error*****/
void	ft_error(void);
int		ft_nbr_cmp(char *s1, char *s2);
int		is_sign(char c);
int		is_num(char *arg);
int		check_input(char **args);
int		check_value(long value);
int		check_double(char **args);
/*****sort*****/
void	sort_three(t_stack **a);
int		get_min(t_stack **stack);
int		get_min_place(t_stack **stack);
int		first_value(t_stack **stack);
void	sort(t_stack *a, t_stack *b);
int		last_value(t_stack **stack);
void	min_to_top(t_stack **a);
int		is_sorted(t_stack *a);
void	b_to_a(t_stack **a, t_stack **b);
void	max_to_top(t_stack **a);
void	ft_sort(t_stack **a, t_stack **b);
void	as_index(t_stack **stack, int *tab);
int		get_min_index(t_stack **stack);
int		get_max_place(t_stack **stack);
void	a_to_b(t_stack **a, t_stack **b);
void	to_rr(t_stack **a, t_stack **b, int chunk, int j);
int		get_max(t_stack **stack);
void	to_r(t_stack **a, t_stack **b, int chunk, int i);
void	push_end(t_stack **a, t_stack **b, int chunk);
int		from_top(t_stack **a, int chunk);
int		from_back(t_stack **a, int chunk);
void	push_min(t_stack **a, t_stack **b, int chunk);
int		get_val_top(t_stack **a, int chunk);
int		get_val_back(t_stack **a, int chunk);
/*****buble_sort*****/
int		*create_array(t_stack *a);
void	buble_sort(int *tab, int size);

#endif

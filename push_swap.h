/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:32 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/21 17:49:43 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./utils/utils.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				order_pos;
	struct s_stack	*next;
}					t_stack;

void				init_stack(t_stack **a, char **num, int n_num);
t_stack				*stack_create(int value);
void				stack_add_bottom(t_stack **stack, t_stack *new_stack);
void				error(void);

//frees
void				free_all(void **str);
void				free_stack(t_stack *stack);
void				free_parse(char **char_nums, int *numbers);

//ksort
void				sort(t_stack **a, t_stack **b, int *numbers, int mode);
void				insertion_sort(int array[], int n);
void				ksort_move(t_stack **a, t_stack **b, int len, int x);
void				ksort_reverse(t_stack **a, t_stack **b, int len);
int					square_root(int number);
int					*parse(char **argv);
int					index_of(int n, int *arr);
int					count_r(t_stack *stack, int index);

//info_stack
t_stack				*get_last(t_stack *stack);
int					get_size(t_stack *stack);
t_stack				*get_max(t_stack *stack);
int					size_len(char **argv);

//algoritm
void				sort_three(t_stack **a);
void				stack_sorter(t_stack **a, t_stack **b, char **argv);
int					is_sorted(t_stack *stack);

//push
t_stack				*delete_first_node(t_stack **stack);
void				stack_push(t_stack **stack, t_stack *new_node);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);

// rotate
void				ra(t_stack **a);
void				rb(t_stack **b);

// reverse rotate
void				rra(t_stack **a);
void				rrb(t_stack **b);

// swap
void				sa(t_stack **a);

//DEBUGG
void				print_stack(t_stack *stack);

#endif
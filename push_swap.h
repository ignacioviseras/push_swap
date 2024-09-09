/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:32 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/08 18:35:53 by igvisera         ###   ########.fr       */
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
	int				pos;
	int				middle;
	int				cost_a;
	int				cost_b;
	int				is_cheapest;
	struct s_stack	*target;
	struct s_stack	*next;
}					t_stack;

void				init_stack(t_stack **a, char **num, int n_num);
t_stack				*stack_create(int value, int pos);
void				stack_add_bottom(t_stack **stack, t_stack *new_stack);
void				stack_add_top(t_stack **stack, t_stack *new_stack);
void				error(void);

//frees
void				free_all(void **str);
void				free_stack(t_stack *stack);

//machenical_turk
void				top_half(t_stack **a);
void				init_turk(t_stack **a, t_stack **b);

// count
void			cost_a(t_stack **a, t_stack **b);
void				set_cheapest(t_stack **stack);
void				init_a(t_stack **a, t_stack **b);
void			move_a_to_b(t_stack **a, t_stack **b);
void			move_b_to_a(t_stack **a, t_stack **b);
void			min_on_top(t_stack **a);


//move
void				r_both(t_stack **a, t_stack **b, t_stack *cheapest);
void				prep_push_a(t_stack **a, t_stack *cheapest);
void				prep_push_b(t_stack **b, t_stack *cheapest);


//init_b
void                set_target_b(t_stack **a, t_stack **b);
void				init_b(t_stack **a, t_stack **b);


//info_stack
t_stack				*get_last(t_stack *stack);
int					get_size(t_stack *stack);
t_stack				*get_max(t_stack *stack);
t_stack				*get_min(t_stack *stack);
t_stack     *get_cheapest(t_stack *stack);

//calculate
void                set_target_a(t_stack **a, t_stack **b);

//---------------
void				set_target_max_a(t_stack **a, t_stack **b);
void				set_target_max_b(t_stack **a, t_stack **b);
void				set_target_min_a(t_stack **a, t_stack **b);
void				set_target_min_b(t_stack **a, t_stack **b);

//algoritm
void				sort_three(t_stack **a);
void				stack_sorter(t_stack **a, t_stack **b);
int					is_sorted(t_stack *stack);
void				init_mechanical_turk(t_stack **a, t_stack **b);

//push
t_stack				*delete_first_node(t_stack **stack);
void				stack_push(t_stack **stack, t_stack *new_node);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);


// rotate
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);

// reverse rotate
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);

// swap
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);

//DEBUGG
void				print_stack(t_stack *stack);



#endif
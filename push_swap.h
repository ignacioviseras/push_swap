/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:32 by igvisera          #+#    #+#             */
/*   Updated: 2024/06/03 23:41:31 by igvisera         ###   ########.fr       */
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
	struct s_stack	*next;
}					t_stack;

void				init_stack(t_stack **a, char **num, int n_num);
t_stack				*stack_create(int value);
void				stack_add_bottom(t_stack **stack, t_stack *new_stack);
void				stack_add_top(t_stack **stack, t_stack *new_stack);
t_stack				*get_last(t_stack *stack);
int					get_size(t_stack *stack);
void				free_all(void **str);
void				free_stack(t_stack *stack);
void				error(void);

// push
void stack_push(t_stack **stack, t_stack *new_node);
t_stack *delete_first_node(t_stack **stack);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);


// rotate
void ra(t_stack **a);

// reverse rotate
void rra(t_stack **a);
void rrr(t_stack **a, t_stack **b);
// swap

//DEBUGG
void				print_stack(t_stack *stack);



#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:58:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/06/05 18:48:33 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

// generara erro rsi no existe stack
void stack_push(t_stack **stack, t_stack *new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->next = *stack;
	*stack = new_node;
}

// cambiar nombre no se entiende mucho lo q haces es 
// pillar el nodo lo eliminas del stack y lo retornas
// para q se pueda pushear al otro stack
t_stack *delete_first_node(t_stack **stack)
{
	if (!stack || !*stack)
		return NULL;
	t_stack *top_node;
	top_node = *stack;
	*stack = top_node->next;
	top_node->next = NULL;
	return (top_node);
}

void pa(t_stack **a, t_stack **b)
{
	if (!b || !*b)
		return ;
	t_stack *top_of_b;
	top_of_b = delete_first_node(b);
	stack_push(a, top_of_b);
}

void pb(t_stack **a, t_stack **b)
{
	if (!a || !*a)
		return ;
	t_stack *top_of_a;
	top_of_a = delete_first_node(a);
	stack_push(b, top_of_a);
}


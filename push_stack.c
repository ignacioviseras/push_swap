/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:58:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/20 18:13:41 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	stack_push(t_stack **stack, t_stack *new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->next = *stack;
	*stack = new_node;
}

t_stack	*delete_first_node(t_stack **stack)
{
	t_stack	*top_node;

	if (!stack || !*stack)
		return (NULL);
	top_node = *stack;
	*stack = top_node->next;
	top_node->next = NULL;
	return (top_node);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*top_of_b;

	if (!b || !*b)
		return ;
	top_of_b = delete_first_node(b);
	if (!top_of_b)
		return ;
	stack_push(a, top_of_b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*top_of_a;

	if (!a || !*a)
		return ;
	top_of_a = delete_first_node(a);
	if (!top_of_a)
		return ;
	stack_push(b, top_of_a);
	write(1, "pb\n", 3);
}

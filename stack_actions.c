/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:34:17 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/20 18:10:52 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

t_stack	*stack_create(int value)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->value = value;
	stack->order_pos = 0;
	stack->next = NULL;
	return (stack);
}

void	stack_add_bottom(t_stack **stack, t_stack *new_stack)
{
	t_stack	*iter;

	if (!*stack)
		*stack = new_stack;
	else
	{
		iter = *stack;
		while (iter->next != NULL)
			iter = iter->next;
		iter->next = new_stack;
	}
}

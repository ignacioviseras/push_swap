/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:34:17 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/22 17:58:46 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

t_stack *stack_create(int value, int pos)
{
	t_stack *stack;
	
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->value = value;
	stack->pos = pos;
	stack->middle = 0;
	stack->next = NULL;
	return (stack);
}

void stack_add_bottom(t_stack **stack, t_stack *new_stack)
{
	if (!*stack)
		*stack = new_stack;
	else
	{
		t_stack	*iter;

		iter = *stack;
		while (iter->next != NULL)
			iter = iter->next;
		iter->next = new_stack;
	}
}

void stack_add_top(t_stack **stack, t_stack *new_stack)
{
	if (stack)
	{
		if (*stack)
			new_stack->next = *stack;
		*stack = new_stack;
	}
}

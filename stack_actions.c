/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:34:17 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/30 20:44:44 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

t_stack *stack_create(int value)
{
	t_stack *stack;
	
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->value = value;
	stack->pos = 0;
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

t_stack *get_last(t_stack *stack)
{
	if (!stack)
		return (NULL);	
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

int get_size(t_stack *stack)
{
	int size;

	if (!stack)
		return (0);	
	while (stack->next != NULL)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

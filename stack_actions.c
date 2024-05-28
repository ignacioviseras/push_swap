/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:34:17 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/28 16:04:59 by igvisera         ###   ########.fr       */
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
	t_stack	*iter;

	if (stack)
	{
		if (*stack)
		{
			iter = *stack;
			while (iter->next != NULL)
				iter = iter->next;
			iter->next = new_stack;
		}
		else
			*stack = new_stack;
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
		return (NULL);	
	while (stack->next != NULL)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

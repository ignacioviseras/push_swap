/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:01:50 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/20 17:32:49 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

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

	size = 0;
	if (!stack)
		return (0);	
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

t_stack *get_max(t_stack *stack)
{
    t_stack *max_node;

    if (!stack)
		return (0);	
    max_node = stack;
    while (stack)
    {
        if (max_node->value < stack->value)
            max_node = stack;
        stack = stack->next;
    }
    return max_node;
}


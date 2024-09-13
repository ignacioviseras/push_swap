/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:03:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/13 17:21:20 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void                set_target_a(t_stack **a, t_stack **b)
{
    t_stack *stack_a;
    t_stack *stack_b;
    long is_min;

    stack_a = *a;
    stack_b = *b;
    is_min = LONG_MIN;
    while (stack_a)
    {
        while (stack_b->next != NULL)
        {
            if (stack_b->value < stack_a->value && stack_b->value > is_min)
            {
                stack_a->target = stack_b;
                is_min = stack_b->value;
            }
            stack_b = stack_b->next;
        }
        if (is_min == LONG_MIN)
            stack_a->target = get_max(stack_b);
		else
			stack_a->target = stack_b;
        stack_a = stack_a->next;
        stack_b = *b;
    }
}

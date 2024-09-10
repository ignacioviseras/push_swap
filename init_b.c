/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:39:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/10 15:08:01 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"


void                set_target_b(t_stack **a, t_stack **b)
{
    t_stack *stack_a;
    t_stack *stack_b;
    long is_max;

    stack_a = *a;
    stack_b = *b;
    is_max = LONG_MAX;
    while (stack_b)
    {
        while (stack_a->next != NULL)
        {
            if (stack_a->value > stack_b->value && stack_a->value < is_max)
            {
                stack_b->target = stack_a;
                is_max = stack_a->value;
            }
            stack_a = stack_a->next;
        }
        if (is_max == LONG_MAX)
            stack_b->target = get_min(stack_a);
        stack_b = stack_b->next;
        stack_a = *a;
    }
    print_stack(stack_b);
}



void init_b(t_stack **a, t_stack **b)
{
	top_half(a);
	top_half(b);
	set_target_b(a, b);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:54:17 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/21 15:41:57 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void rra(t_stack **a)
{
    if (!a || !(*a) || !(*a)->next)
        return;
    
    t_stack *last;
    t_stack *second_last;
    last = get_last(*a);
    if (!last)
        return;    
    second_last = *a;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
    second_last->next = NULL;
    last->next = *a;
    *a = last;
    write(1, "rra\n", 4);
}

void rrb(t_stack **b)
{
	if (!b || !(*b) || !(*b)->next)
        return;
    
	t_stack *last_b = get_last(*b);
	t_stack *second_last_b = *b;
	while (second_last_b->next->next != NULL)
		second_last_b = second_last_b->next;
	second_last_b->next = NULL;
	last_b->next = *b;
	*b = last_b;
    write(1, "rrb\n", 4);
}

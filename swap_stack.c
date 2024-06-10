/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:52:46 by igvisera          #+#    #+#             */
/*   Updated: 2024/06/10 22:32:46 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void sa(t_stack **a)
{
	if (!a || !(*a) || !(*a)->next)
        return;
    
    t_stack *first;
    t_stack *second;

	first = *a;
	second = (*a)->next;

    first->next = second->next;
    second->next = first;
    *a = second;
}

void sb(t_stack **b)
{
	if (!b || !(*b) || !(*b)->next)
		return ;

    t_stack *first;
    t_stack *second;

	first = *b;
	second = (*b)->next;

    first->next = second->next;
    second->next = first;
    *b = second;
}

void ss(t_stack **a, t_stack **b)
{
    if ((!a || !(*a) || !(*a)->next) && (!b || !(*b) || !(*b)->next))
		return ;

    if ((a && (*a) && (*a)->next) && (b && (*b) && (*b)->next))
    {
        t_stack *first_a;
        t_stack *second_a;
        t_stack *first_b;
        t_stack *second_b;

        first_b = *b;
        second_b = (*b)->next;
        first_a = *a;
        second_a = (*a)->next;

        first_b->next = second_b->next;
        second_b->next = first_b;
        *b = second_b;
        first_a->next = second_a->next;
        second_a->next = first_a;
        *a = second_a;
    }
}

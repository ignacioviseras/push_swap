/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:53:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/18 21:42:26 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

// tengo una lista y quiero mover el primer elemento 
// y colocarlo al final
// Ejmp -> 1 5 67 8 9 -> 5 67 8 9 1 
void ra(t_stack **a)
{
	if (!a || !(*a) || !(*a)->next)
        return ;
    t_stack *first;
    t_stack *new_first;
    t_stack *last;

	first = *a;
	new_first = (*a)->next;
	last = get_last(*a);
    if (!last)
        return;
    *a = new_first;
    last->next = first;
    first->next = NULL;
    write(1, "ra\n", 3);
}

void rb(t_stack **b)
{
	if (!b || !(*b) || !(*b)->next)
        return ;
    t_stack *first;
    t_stack *new_first;
    t_stack *last;

	first = *b;
	new_first = (*b)->next;
	last = get_last(*b);
    if (!last)
        return;    
    *b = new_first;  // Actualizamos el primer elemento de la pila
    last->next = first;  // Hacemos que el último apunte al primer elemento original
    first->next = NULL;  // El nuevo último elemento no apunta a nada
    write(1, "rb\n", 3);
}



void rr(t_stack **a, t_stack **b)
{
    if ((!a || !(*a) || !(*a)->next) && (!b || !(*b) || !(*b)->next))
        return;
    if (a && *a && (*a)->next) {
        t_stack *last_a = get_last(*a);
        t_stack *second_last_a = *a;
        while (second_last_a->next->next != NULL)
            second_last_a = second_last_a->next;
        second_last_a->next = NULL;
        last_a->next = *a;
        *a = last_a;
    }
    if (b && *b && (*b)->next) {
        t_stack *last_b = get_last(*b);
        t_stack *second_last_b = *b;
        while (second_last_b->next->next != NULL)
            second_last_b = second_last_b->next;
        second_last_b->next = NULL;
        last_b->next = *b;
        *b = last_b;
    }
    write(1, "rr\n", 3);
}


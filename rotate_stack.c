/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:53:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/18 19:38:46 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

// t_stack *delete_first_node(t_stack **stack)
// {
// 	if (!stack || !*stack)
// 		return NULL;
// 	t_stack *top_node;
// 	top_node = *stack;
// 	*stack = top_node->next;
// 	top_node->next = NULL;
// 	return (top_node);
// }
// tengo una lista y quiero mover el primer elemento 
//y colocarlo al final y el ultimo elemto colocarlo en el primero
// Ejmp -> 1 5 67 8 9 -> 9 5 67 8 1 
// t_stack *ra(t_stack **a)
// {
	// if (!a || !(*a) || !(*a)->next)//si no existe o no tiene mas de uno(pq no se podira rotar)
	// 	return ;
	// t_stack *first;
	// t_stack *last;
	// t_stack *new_first;
	// t_stack *second_last;

	// first = *a;
	// last = get_last(*a);
	// new_first = (*a)->next;
	// second_last = *a;
	// while (second_last->next->next != NULL)
	// 	second_last = second_last->next;
	// second_last->next = first;
	// *a = last;
	// last->next = new_first;
	// first->next = NULL;
// }

// tengo una lista y quiero mover el primer elemento 
//y colocarlo al final
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
    *a = new_first;  // Actualizamos el primer elemento de la pila
    last->next = first;  // Hacemos que el último apunte al primer elemento original
    first->next = NULL;  // El nuevo último elemento no apunta a nada
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


/*
	// if (!a || !(*a) || !(*a)->next)
    //     return;
	// if (!b || !(*b) || !(*b)->next)
    //     return;
    // t_stack *last_a;
    // t_stack *last_b;
    // t_stack *second_last_a;
    // t_stack *second_last_b;

    // last_a = get_last(*a);
	// last_b = get_last(*b);
    // second_last_a = *a;
    // second_last_b = *b;
    // while (second_last_a->next->next != NULL)
    //     second_last_a = second_last_a->next;
    // while (second_last_b->next->next != NULL)
    //     second_last_b = second_last_b->next;
    // second_last_a->next = NULL;    	// Apuntamos el último nodo al primer nodo original de la pila
	// second_last_b->next = NULL;		// Apuntamos el último nodo al primer nodo original de la pila
    // last_a->next = *a;    			// El último nodo se convierte en el nuevo tope de la pila
    // last_b->next = *b;    			// El último nodo se convierte en el nuevo tope de la pila
    // *a = last_a;
    // *b = last_b;

*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:53:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/06/03 23:04:56 by igvisera         ###   ########.fr       */
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
}

// void rra(t_stack **a)
// {
// 	if (!a || !(*a) || !(*a)->next)
//         return ;
//     t_stack *last;
// 	t_stack *second_last;

// 	last = get_last(*a);
// 	second_last = *a;
// 	while (second_last->next->next != NULL)
// 		second_last = second_last->next;
//     *a = last;
//     second_last->next = NULL;
// }

void rra(t_stack **a)
{
    if (!a || !(*a) || !(*a)->next)
        return;
    
    t_stack *last;
    t_stack *second_last;
    last = get_last(*a);
    second_last = *a;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
    // Desconectamos el último nodo de la pila
    second_last->next = NULL;    // Apuntamos el último nodo al primer nodo original de la pila
    last->next = *a;    // El último nodo se convierte en el nuevo tope de la pila
    *a = last;
}



// void rb()
// {

// }

// void rr()
// {

// }

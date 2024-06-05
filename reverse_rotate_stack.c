/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:54:17 by igvisera          #+#    #+#             */
/*   Updated: 2024/06/05 20:14:55 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

//todo ¿tengo que añadir algun write o algo para saber cual se ejecuta?? 

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
}

void rrr(t_stack **a, t_stack **b)
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
}

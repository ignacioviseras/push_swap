/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:53:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/06/02 17:50:02 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

t_stack *delete_first_node(t_stack **stack)
{
	if (!stack || !*stack)
		return NULL;
	t_stack *top_node;
	top_node = *stack;
	*stack = top_node->next;
	top_node->next = NULL;
	return (top_node);
}

t_stack *ra(t_stack **a)
{
    t_stack *go_top;
    t_stack *go_bottm;
    t_stack *new_a;
    t_stack *aux;

    aux = *a;
    go_bottm = *a;//premr elemento
    go_top = get_last(a);// ultimo elemento
    while (aux->next->next != NULL)
        aux = aux->next;
}

void rb()
{

}

void rr()
{

}

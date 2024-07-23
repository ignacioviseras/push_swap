/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:41:55 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/23 19:07:24 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

int is_sorted(t_stack *stack)
{
    if (!stack)
        return (1);
    if (stack->next == NULL)//SOLO 1 elemento
        return (0);
    while (stack->next != NULL)//MAS de 1 elemento
    {
        if (stack->value > stack->next->value)// comprueba si es mayor q el siguiente
            return (1);// si lo es significa q no esta ordenado
        stack = stack->next;
    }
    return (0);
}

void sort_three(t_stack **a)
{
    t_stack *max;

    max = get_max(*a);
    if (max == *a)
        ra(a);
    else if ((*a)->next == max)
        rra(a);
    if ((*a)->value > (*a)->next->value)
        sa(a);
}

void init_mechanical_turk(t_stack **a, t_stack **b)
{
    // move_cost(a, b);
    t_stack **debug;
    top_half(a);
    b = NULL;
    debug = b;
    b = debug;
}

void stack_sorter(t_stack **a, t_stack **b)
{
    if (get_size((*a)) == 0)
        return;
    else if (get_size((*a)) == 2)
        sa(a);
    else if (get_size((*a)) == 3)
        sort_three(a);
    else
    {
        init_mechanical_turk(a, b);
    }
    return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:41:55 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/13 17:21:36 by igvisera         ###   ########.fr       */
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

void init_turk(t_stack **a, t_stack **b)
{
    int len;
    len = get_size((*a));
    if (len-- > 3 && is_sorted((*a)) == 1)
        pb(a, b);
    if (len-- > 3 && is_sorted((*a)) == 1)
        pb(a, b);
    while (len-- > 3 && is_sorted((*a)))
    {
        init_a(a, b);
        move_a_to_b(a, b);
    }
    sort_three(a);
    while ((*b))
    {
        init_b(a, b);
        move_b_to_a(a, b);  
    }
    top_half(a);
    min_on_top(a);
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
        init_turk(a, b);
    return ;
}

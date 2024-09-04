/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:41:55 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/04 16:22:42 by igvisera         ###   ########.fr       */
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
    if (len-- > 3 && !is_sorted((*a)))
        pb(a, b);
    if (len-- > 3 && !is_sorted((*a)))
        pb(a, b);
    while (len-- > 3 && is_sorted((*a)))
    {
        init_a(a, b);
        // move_a_to_b();
    }
    sort_three(a);
    while ((*b))
    {
        // init_node_b();
        // move_b_to_a()        
    }
    // current_index(*a);
    // min_on_top(a);
    
    //----------------------------
    // top_half(a);
    // set_target_max_a(a, b);

    // printf("------ max A ------\n");
    // set_target_max_a(a, b);
    // print_stack((*a));
    // printf("------ max B ------\n");
    // set_target_max_b(a, b);
    // print_stack((*b));
    //set_target_max_a(a, b);
    //--------------------

    t_stack **debug;
    b = NULL;
    debug = b;
    b = debug;
    //--------------------
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

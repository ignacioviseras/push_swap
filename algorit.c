/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:41:55 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/18 19:46:06 by igvisera         ###   ########.fr       */
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

void sorter_three(t_stack **a)
{
    
}


void stack_sorter(t_stack **a, t_stack **b)
{
    b=a;//para q no me salte warning
    if (get_size((*a)) == 2)
        sa(a);
    else if (get_size((*a)) == 3)
        sorter_three(a);
    else
    {

    }
    print_stack((*a));

    return ;
}

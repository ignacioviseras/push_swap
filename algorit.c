/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:41:55 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/17 20:14:50 by igvisera         ###   ########.fr       */
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
        if (stack->value < stack->next->value)// comprueba si es menor q el siguiente
            return (1);// si no lo es es q no esta ordenado
        stack = stack->next;
    }
    return (0);
}


//t_stack stack_sorter(t_stack *a, t_stack *b)
void stack_sorter(t_stack *a, t_stack *b)
{
    // print_stack(a);
    // print_stack(b);
    a = b;
    ft_printf("Funcion de ordenar\n");
    return ;

}

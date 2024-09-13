/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mechanical_turk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:53:02 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/13 17:23:08 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void top_half(t_stack **a)
{
	int i = 0;
    int len_a = get_size(*a);
    int middle = len_a / 2;
    t_stack *temp = *a;

    while (temp)
    {
        if (i < middle)
            temp->middle = 1;  // Está en la parte superior
        else
            temp->middle = 0;  // Está en la parte inferior
        i++;
        temp = temp->next;
    }
}




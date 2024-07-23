/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mechanical_turk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:53:02 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/23 19:04:50 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void top_half(t_stack **a)
{
    int i;
	int len_a;
	int middle;
	t_stack *top_stack;
    
    top_stack = *a;
	if (!a)
		exit(1);
	i = 1;
	len_a = get_size((*a));
	middle = len_a / 2;
	if (len_a % 2)//pa calcular la mitad del stack si es par le sumo 1
		middle++;
	while ((*a))
	{
		if (i <= middle)//por encima de la mitad
			(*a)->middle = 1;
		else//por debajo de la mitad
			(*a)->middle = 0;
		i++;
		(*a) = (*a)->next;
	}
    *a = top_stack;
}




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:23:42 by igvisera          #+#    #+#             */
/*   Updated: 2024/08/29 19:07:18 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void print_stack(t_stack *stack)
{
	int i = 1;
	if (!stack)
		printf("Sin contenido\n");
	while (stack != NULL) {
		printf("%d. valor='%d' pos='%d' middle='%d'\n",
		 i, stack->value, stack->pos, stack->middle);
		if (stack->target != NULL) // Verificar que target no es NULL
        {
            printf("Target de %d:\n", i);
            printf("\tvalor='%d' pos='%d' middle='%d'\n",
                   stack->target->value, stack->target->pos, stack->target->middle);
        }
		stack = stack->next;
		i++;
	}
}

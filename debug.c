/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:23:42 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/22 18:59:36 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void print_stack(t_stack *stack)
{
	int i = 1;
	if (!stack)
		printf("Sin contenido\n");
	while (stack != NULL) {
		printf("%d. valor='%d' pos='%d' middle='%d'\n", i, stack->value, stack->pos, stack->middle);
		stack = stack->next;
		i++;
	}
}

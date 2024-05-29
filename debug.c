/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:23:42 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/29 21:06:44 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void print_stack(t_stack *stack)
{
	int i = 1;
	while (stack != NULL) {
		printf("%d. valor='%d' pos='%d'\n", i, stack->value, stack->pos);
		stack = stack->next;
		i++;
	}
}

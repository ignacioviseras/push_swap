/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:23:42 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/20 18:01:02 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	print_stack(t_stack *stack)
{
	int	i;

	i = 1;
	if (!stack)
		printf("Sin contenido\n");
	while (stack != NULL)
	{
		printf("%d. valor='%d, order_pos='%d\n", i, stack->value,
			stack->order_pos);
		stack = stack->next;
		i++;
	}
}

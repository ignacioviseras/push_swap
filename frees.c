/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:54:53 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/29 20:56:43 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"


void	free_all(void **str)
{
	void	**pointer_pos;

	pointer_pos = str;
	while (*str)
	{
		free(*str);
		str++;
	}
	free(pointer_pos);
}

void free_stack(t_stack *stack)
{
	t_stack *temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

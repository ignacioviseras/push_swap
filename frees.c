/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:54:53 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/17 10:33:06 by igvisera         ###   ########.fr       */
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

void free_parse(char **char_nums, int *numbers)
{
	free_all((void **)char_nums);
	free(numbers);
}

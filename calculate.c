/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:03:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/08/22 20:18:15 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

/*
target de a es el numero mas cercano mayor con el numero q estas
*/
void				set_target_max_a(t_stack **a, t_stack **b)
{
	t_stack **stack_a;
	t_stack **stack_b;
	t_stack *target;

	if (!a || !b)
		error();
	stack_a = a;
	stack_b = b;
	while ((*b)->next != NULL)
	{
		if ((*b)->value > (*a)->value)
		{
			if (!target)
				target = (*b);
			if ((*b)->value < target)
				target = (*b);
		}
		b = (*b)->next;
	}
	(*a)->target = target;
	a = stack_a;
	b = stack_b;
	
}


// t_stack				set_target_min_a(t_stack **a, t_stack **b)
// {

// }

/*
target de b numero menor mas cercano
*/
// t_stack				set_target_min_b(t_stack **a, t_stack **b)
// {

// }

// t_stack				set_target_max_b(t_stack **a, t_stack **b)
// {

// }
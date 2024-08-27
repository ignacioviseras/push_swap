/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:03:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/08/27 20:46:09 by igvisera         ###   ########.fr       */
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
	while ((*a)->next != NULL)
	{
		while ((*b)->next != NULL)
		{
			if ((*b)->value > (*a)->value)
			{
				if (!target)
					target = (*b);
				if ((*b)->value < target->value)
					target = (*b);
			}
			b = &(*b)->next;
		}
		(*a)->target = target;
		a = &(*a)->next;
	}
	a = stack_a;
	b = stack_b;
}

// t_stack				set_target_max_b(t_stack **a, t_stack **b)
// {

// }

// t_stack				set_target_min_a(t_stack **a, t_stack **b)
// {

// }

/*
target de b numero menor mas cercano
*/
void				set_target_min_b(t_stack **a, t_stack **b)
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
		while ((*a)->next != NULL)
		{
			if ((*a)->value > (*b)->value)
			{
				if (!target)
					target = (*a);
				if ((*a)->value < target->value)
					target = (*a);
			}
			a = &(*a)->next;
		}
		(*b)->target = target;
		b = &(*b)->next;
	}
	a = stack_a;
	b = stack_b;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:03:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/08/29 17:05:30 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

/*
target de a es el numero mas cercano mayor con el numero q estas
*/
void				set_target_max_a(t_stack **a, t_stack **b)
{
	t_stack *stack_a;
	t_stack *stack_b;
	long is_min;

	stack_a = *a;
	stack_b = *b;
	is_min = LONG_MIN;
	while (stack_a->next != NULL)
	{
		while (stack_b->next != NULL)
		{
			if (stack_b->value < stack_a->value && stack_b->value > is_min)
			{
				stack_a->target = stack_b;
				is_min = stack_b->value;
			}
			stack_b = stack_b->next;
		}
		if (is_min == LONG_MIN)
			stack_a->target = get_max(stack_b);
		stack_a = stack_a->next;
	}
	print_stack(stack_a);
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

	stack_a = a;
	stack_b = b;
	while ((*b)->next != NULL)
	{
		while ((*a)->next != NULL)
		{
			if ((*a)->value > (*b)->value && (*a)->value < target->value)
			{
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


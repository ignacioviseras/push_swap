/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:05:04 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/04 16:00:59 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

static void cost_a(t_stack **a, t_stack **b)
{
	int len_a;
	int len_b;

	len_a = get_size((*a));
	len_b = get_size((*b));
	while ((*a))
	{
		(*a)->cost_a = (*a)->pos;
		if (!((*a)->middle))
			(*a)->cost_a = len_a - (*a)->pos;
		if ((*a)->target->middle)
			(*a)->cost_a += (*a)->target->pos;
		else
			(*a)->cost_a += len_b - ((*a)->target->pos);
		(*a) = (*a)->next;
	}
}

void set_cheapest(t_stack **stack)
{
	long	cheapest_val;
	t_stack **cheapest_node;

	if (!(*stack))
		return ;
	cheapest_val = LONG_MAX;
	while ((*stack))
	{
		if ((*stack)->cost_a < cheapest_val)
		{
			cheapest_val = (*stack)->cost_a;
			(*cheapest_node) = (*stack);
		}
		(*stack) = (*stack)->next;				
	}
	(*cheapest_node).
	// 39.33
}

void init_a(t_stack **a, t_stack **b)
{
	top_half(a);
	top_half(b);
	set_target_a(a, b);
	cost_a(a, b);
	set_cheapest(a);
	
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:07:21 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/10 14:54:23 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"


void	r_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
		rr(a, b);
	top_half(a);
	top_half(b);
}

void	rev_r_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
		rrr(a, b);
	top_half(a);
	top_half(b);
}

void	prep_push_a(t_stack **a, t_stack *cheapest)
{
	while (*a != cheapest)
	{
		if (cheapest->middle)
			ra(a);
		else
			rra(a);
	}
}

void	prep_push_b(t_stack **b, t_stack *cheapest)
{
	while (*b != cheapest)
	{
		if (cheapest->middle)
			rb(b);
		else
			rrb(b);
	}
}

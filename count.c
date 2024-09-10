/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:05:04 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/10 14:43:31 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void cost_a(t_stack **a, t_stack **b)
{
	int len_a;
	int len_b;
	t_stack *head_a;
	t_stack *head_b;

	head_a = *a;
	head_b = *b;
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
	*a = head_a;
	*b = head_b;
}

void set_cheapest(t_stack **stack)
{
	long	cheapest_val;
	t_stack *cheapest_node;
	t_stack *head_stack;

	head_stack = *stack;
	if (!(*stack))
		return ;
	cheapest_val = LONG_MAX;
	while ((*stack))
	{
		if ((*stack)->cost_a < cheapest_val)
		{
			cheapest_val = (*stack)->cost_a;
			cheapest_node = (*stack);
		}
		(*stack) = (*stack)->next;				
	}
	cheapest_node->is_cheapest = 1;
	*stack = head_stack;
}

void init_a(t_stack **a, t_stack **b)
{
	top_half(a);
	top_half(b);
	set_target_a(a, b);
	cost_a(a, b);
	set_cheapest(a);
}


void move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack *cheapest;

	cheapest = get_cheapest((*a));
	if (cheapest->middle && cheapest->target->middle)
		r_both(a, b, cheapest);//creo q esto no esta bn
	else if (!(cheapest->middle) && !(cheapest->target->middle))
		rev_r_both(a, b, cheapest);//creo q esto no esta bn
	//mirar esto bn da error???
	prep_push_a(a, cheapest);
	prep_push_b(b, cheapest->target);
	pb(a, b);

}

void move_b_to_a(t_stack **a, t_stack **b)
{
	prep_push_a(a, (*b)->target);
	pa(a, b);
}

void min_on_top(t_stack **a)
{
	while ((*a)->value != get_min((*a))->value)
	{
		if (get_min((*a))->middle)
			ra(a);
		else
			rra(a);
	}
}

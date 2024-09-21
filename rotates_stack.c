/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:54:17 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/21 17:23:47 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	last = get_last(*a);
	if (!last)
		return ;
	second_last = *a;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	second_last->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*last_b;
	t_stack	*second_last_b;

	if (!b || !(*b) || !(*b)->next)
		return ;
	last_b = get_last(*b);
	second_last_b = *b;
	while (second_last_b->next->next != NULL)
		second_last_b = second_last_b->next;
	second_last_b->next = NULL;
	last_b->next = *b;
	*b = last_b;
	write(1, "rrb\n", 4);
}

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*new_first;
	t_stack	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	first = *a;
	new_first = (*a)->next;
	last = get_last(*a);
	if (!last)
		return ;
	*a = new_first;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*new_first;
	t_stack	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	first = *b;
	new_first = (*b)->next;
	last = get_last(*b);
	if (!last)
		return ;
	*b = new_first;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

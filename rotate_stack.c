/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:53:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/21 15:41:42 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

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

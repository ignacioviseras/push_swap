/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:52:46 by igvisera          #+#    #+#             */
/*   Updated: 2024/06/05 21:37:12 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void sa(t_stack **a)
{
	if (!a || !(*a) || !(*a)->next)
        return;
    
    t_stack *first;
    t_stack *second;

	first = *a;
	second = (*a)->next;

    first->next = second->next;
    second->next = first;
    *a = second;
}

void sb(t_stack **b)
{
	if (!b || !(*b) || !(*b)->next)
		return ;

}

void ss(t_stack **a, t_stack **b)
{
    if ((!a || !(*a) || !(*a)->next) && (!b || !(*b) || !(*b)->next))
		return ;
}

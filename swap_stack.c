/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:52:46 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/21 15:43:26 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (!a || !(*a) || !(*a)->next)
		return ;
	first = (*a);
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	(*a) = second;
	write(1, "sa\n", 3);
}

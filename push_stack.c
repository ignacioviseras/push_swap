/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:58:44 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/30 20:44:42 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void pa(t_stack **a, t_stack **b)
{
	if (!*b)//hay q cerrar pq no puedes mandar cosas de b si no existe
	{
		stack_add_bottom(*a, stack_create(*b));
		
	}
	else
	{

	}
}

void pb(t_stack **a, t_stack **b)
{
	if (!*b)//si no existe lo creo y le añado los datos
	{

	}
	else
	{
		
	}
}

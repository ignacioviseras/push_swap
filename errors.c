/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:50:40 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/23 19:50:54 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	error_digit(char **str_splited, t_stack *a)
{
	write(2, "Error\n", 6);
	free_all((void **)str_splited);
	free_stack(a);
	exit(1);
}

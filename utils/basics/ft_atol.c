/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:35:22 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/23 19:35:43 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

long	ft_atol(const char *nptr)
{
	int		index;
	long	sing;
	long	num;

	sing = 1;
	index = 0;
	num = 0;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || (nptr[index] == 32))
		index++;
	if (nptr[index] == '-')
	{
		sing = -1;
		index++;
	}
	else if (nptr[index] == '+')
		index++;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		num = num * 10 + (nptr[index++] - '0');
		if ((num * sing) < INT_MIN || (num * sing) > INT_MAX)
			return ((long)INT_MAX + 1);
	}
	return (num * sing);
}

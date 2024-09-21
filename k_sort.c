/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:42:43 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/21 17:49:00 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ksort_move(t_stack **a, t_stack **b, int len, int mode)
{
	int	i;
	int	range;

	i = 0;
	if (mode == 0)
		range = square_root(len) * 14 / 10;
	else
		range = len / 2;
	while (*a)
	{
		if ((*a)->order_pos <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->order_pos <= i + range)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

void	ksort_reverse(t_stack **a, t_stack **b, int len)
{
	int	rb_count;
	int	rrb_count;

	while (len - 1 >= 0)
	{
		rb_count = count_r(*b, len - 1);
		rrb_count = (len + 3) - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*b)->order_pos != len - 1)
				rb(b);
			pa(a, b);
			len--;
		}
		else
		{
			while ((*b)->order_pos != len - 1)
				rrb(b);
			pa(a, b);
			len--;
		}
	}
}

void	insertion_sort(int array[], int n)
{
	int	element;
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		element = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > element)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = element;
		i++;
	}
}

void	sort(t_stack **a, t_stack **b, int *numbers, int mode)
{
	t_stack	*aux;
	int		len;

	len = get_size(*a);
	insertion_sort(numbers, len);
	aux = *a;
	while (aux)
	{
		aux->order_pos = index_of(aux->value, numbers);
		aux = aux->next;
	}
	ksort_move(a, b, len, mode);
	ksort_reverse(a, b, len);
}

int	square_root(int n)
{
	int	x;

	if (n < 4)
		return (1);
	x = 2;
	while (x * x < n)
		x++;
	if (x * x > n)
	{
		if ((x * x - n) < ((x - 1) * (x - 1) + (-n)))
			return (x);
	}
	return (x - 1);
}

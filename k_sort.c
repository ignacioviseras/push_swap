/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:42:43 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/18 21:44:27 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void ksort_move(t_stack **a, t_stack **b, int length, int mode)
{
	int	i;
	int	range;

	i = 0;
	if (mode == 0)
		range = square_root(length) * 14 / 10;
	else
		range = length / 2;
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


void ksort_reverse(t_stack **a, t_stack **b, int length)
{
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(*b, length - 1);
		rrb_count = (length + 3) - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*b)->order_pos != length - 1)
				rb(b);
			pa(a, b);
			length--;
		}
		else
		{
			while ((*b)->order_pos != length - 1)
				rrb(b);
			pa(a, b);
			length--;
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
		j = i-1;
		while (j >= 0 && array[j] > element)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = element;
		i++;
	}
}

void sort(t_stack **a, t_stack **b, int *numbers, int mode)
{
	t_stack *aux;
	int len;

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

int	square_root(int number)
{
	int	i;

	if (number < 4)
		return (1);
	i = 2;
	while (i * i < number)
		i++;
	if (i * i > number)
	{
		if ((i * i - number) < ((i - 1) * (i - 1) + (-number)))
			return (i);
	}
	return (i - 1);
}

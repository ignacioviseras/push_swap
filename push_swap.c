/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/24 18:03:00 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	repeated_num(t_stack **stack, int num)
{
	t_stack	**aux;
	t_stack	*top_stack;

	aux = stack;
	top_stack = *stack;
	while (*aux != NULL)
	{
		if ((*aux)->value == num)
			return (1);
		(*aux) = (*aux)->next;
	}
	*stack = top_stack;
	return (0);
}

void	add_number(char *char_num, t_stack **stack)
{
	long	num;
	t_stack	*top_stack;
	t_stack	**aux;

	top_stack = *stack;
	num = ft_atol(char_num);
	if (num == (long)INT_MAX + 1)
		error();
	if ((*stack) == NULL)
	{
		stack_add_bottom(stack, stack_create(num));
		return ;
	}
	aux = stack;
	if (repeated_num(aux, num) == 1)
	{
		free_stack(*stack);
		error();
	}
	stack_add_bottom(stack, stack_create(num));
	*stack = top_stack;
	return ;
}

void	init_stack(t_stack **a, char **num, int n_num)
{
	int		x;
	int		i;
	int		size;
	char	**str_splited;

	x = 1;
	while (x < n_num)
	{
		size = n_words(num[x], ' ');
		str_splited = ft_split(num[x], ' ');
		i = -1;
		while (++i < size)
		{
			if (is_digit(str_splited[i]) == 1)
				error_digit(str_splited, *a);
			else
				add_number(str_splited[i], a);
		}
		x++;
		free_all((void **)str_splited);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		error();
	else
	{
		init_stack(&a, argv, argc);
		if (!a)
			error();
		if (is_sorted(a) == 1)
		{
			stack_sorter(&a, &b, argv);
			free_stack(a);
		}
		else
			free_stack(a);
	}
}

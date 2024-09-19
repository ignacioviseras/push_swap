/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:01:50 by igvisera          #+#    #+#             */
/*   Updated: 2024/09/19 18:45:54 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

t_stack *get_last(t_stack *stack)
{
	if (!stack)
		return (NULL);	
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

int get_size(t_stack *stack)
{
	int size;

	size = 0;
	if (!stack)
		return (0);	
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

t_stack *get_max(t_stack *stack)
{
    t_stack *max_node;

    if (!stack)
		return (0);	
    max_node = stack;
    while (stack)
    {
        if (max_node->value < stack->value)
            max_node = stack;
        stack = stack->next;
    }
    return max_node;
}

int size_len(char **argv)
{
    int n;
    int x;

    n = 0;
    x = 0;
    while (argv[x])
    {
        n += n_words(argv[x], ' ');
        x++;
    }
    return (n);
}

int *parse(char **argv)
{
    int j;
    int k;
    char **s_numbers;
    int *numbers;
    
    k = 0;
    numbers = malloc(sizeof(int) * (size_len(argv)));
    if (!numbers)
        return (NULL);
    while (*argv != NULL)
    {
        s_numbers = ft_split(*argv, ' ');
        if (!s_numbers)
            return(free(numbers), NULL);
        j = -1;
        while (s_numbers[++j])
        {
            if (is_digit(s_numbers[j]) == 1)
                return(free_parse(s_numbers, numbers), NULL);
            numbers[k++] = ft_atoi(s_numbers[j]);
        }
        free_all((void **)s_numbers);
        argv++;
    }
    return (numbers);
}

int	index_of(int n, int *arr)
{
	int	i;

	i = 0;
	while (arr[i] != n)
		i++;
	return (i);
}

int	count_r(t_stack *stack, int index)
{
	int	counter;

	counter = 0;
	while (stack && stack->order_pos != index)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

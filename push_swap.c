/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/29 21:07:41 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void error()
{
    ft_printf("Error\n");
    exit(1);
}

void init_stack(t_stack **a, char **num, int n_num)
{
    int x;
    int i;
    int size;
    char **str_splited;

    x = 1;
    while (x < n_num)
    {
        size = n_words(num[x], ' ');
        str_splited = ft_split(num[x], ' ');
        i = -1;
        while (++i < size)
        {
            if (is_digit(str_splited[i]) == 1)// NO es digito
            {
                free_all((void **)str_splited);
                free_stack(*a);
                error();
            }
            else
                stack_add_bottom(a, stack_create(ft_atoi(str_splited[i])));
        }
        x++;
        free_all((void **)str_splited);
    }
}

/*
    ##################################
        añadir -Werror al makefile
    ##################################
*/
int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if (argc < 2)
        error();
    else
    {
        init_stack(&a, argv, argc);
        print_stack(a);
        free_stack(a);
    }    
    ft_printf("num de params '%d'\n", argc);
    ft_printf("param '%s'\n", argv[1]);
    ft_printf("accedo\n");
    printf("r de atoi1 '%d'\n", ft_atoi(argv[1]));
    printf("r de atoi2 '%d'\n", ft_atoi(argv[1]));
    return (0);
}

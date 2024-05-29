/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/29 20:56:46 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void error()
{
    ft_printf("Error\n");
    exit(1);
}

// char *load_params(char **nums, int n)
// {
//     char    *str;
//     // char    *temp;
//     char    *aux;
//     int     x;

//     x = 1;
//     str = ft_strdup(nums[1]);
//     if (!str)
//         return (free(str), NULL);
//     while (x < n)
//     {
//         // if (str)
//         // {
//         //     aux = ft_strjoin(str, " ");
//         //     free(str);
//         //     str = ft_strjoin(aux, nums[x]);
//         // }
//         // else
//         // {
//         //     str = ft_strjoin(" ", nums[x]);
//         // }
//         if (str) 
//         {
//             //21 
//             str = ft_strjoin(" ", nums[x]);
//         }
//         else
//         {
//             str = ft_strjoin(nums[x], " ");
//             aux = str;
//             // free(str);
//         }
//         if (!str)
//             return (NULL);
//         x++;
//     }
//     return (str);
// }

// int parse_int(char *str)
// {
//     long num;


//     num = ft_atoi(str);
//     if (num >= -2147483648 && 2147483647 <= num)
//     {

//     }
//     return (num);
// }

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


// while (a->next != NULL)
    // {
        // value = parse_int(str_splited[x]);
        // stack_create(ft_atoi(str_splited[x]));
        // a = a->next;
    // }

/*
    ##################################
        añadir -Werror al makefile
    ##################################
*/
int main(int argc, char **argv)
{
    t_stack *a;
    // t_stack *b;

    a = NULL;
    // b = NULL;
    if (argc < 2)
        error();
    else
    {
        // a = malloc(sizeof(t_stack));
        // if (!a)
        //     return (0);
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

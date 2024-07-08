/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/08 21:20:01 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void error()
{
    ft_printf("Error\n");
    exit(1);
}

/*
    Reglas:
    1.
        Inicias a con nums + o - | OK
        los num de a NO PUEDEN ESTAR DUPLICADOS | KO
        inicias b sin nada | OK
    2. 
        Ordenar ascendente
    3.
        ----  Movimientos  ----
        Swap
            sa -> swap a
                - pillas los 2 primeros elementos de A y los cambias (1 -> 2) y (2 -> 1)
            sb -> swap a
                - pillas los 2 primeros elementos de A y los cambias (1 -> 2) y (2 -> 1
            ss -> sa y sb (a la vez)
                - Haces sa y sb al mismo tiempo
        Push
            pa -> push a
                - mandas 1 elemento al stack B
            pb -> push b
                - mandas 1 elemento al stack A
        Rotate
            ra -> rotate a
                - pilla el PRIMER elemento de A y lo pone en la base
            rb -> rotate b
                - pilla el PRIMER elemento de B y lo pone en la base
            rr -> ra y rb (a la vez)
                - Haces ra y rb al mismo tiempo
        Reverse Rotate
            rra -> reverse rotate a
                - Pillas el ULTIMO elemento de A y lo pones arriba del todo
            rrb -> reverse rotate b
                - Pillas el ULTIMO elemento de B y lo pones arriba del todo
            rrr -> rra y rrb (a la vez)
                - Haces rra y rrb al mismo timepo
    4.
    5.

*/

int control_data(char *num, t_stack **stack)
{
    if (is_digit(num) == 1)
        return (1);
    while ((*stack)->next != NULL)
    {
        if ((*stack)->value == num)//si coincide el numero insertado en el stack retorna 1 q sera error
            return (1);
    }
    return (0);
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
            if (control_data(str_splited[i], a) == 1)// NO cumple el control de datos
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
        if (is_sorted(a) == 1)//no esta ordenado
        {
            stack_sorter(a, b);
        }
        else//esta ordenado
        {
            //temdria q poer algo aqui q cierre la funcion
        }
    }
}

/*
    ##################################
    #   añadir -Werror al makefile   #
    ##################################
*/
// int main(int argc, char **argv)
// {
//     t_stack *a;
//     t_stack *b;

//     a = NULL;
//     b = NULL;
//     if (argc < 2)
//         error();
//     else
//     {
//         init_stack(&a, argv, argc);
//         print_stack(a);
//         print_stack(b);
//         printf("\n\n***PB***\n");
//         pb(&a, &b);
//         pb(&a, &b);
//         pb(&a, &b);
//         pb(&a, &b);
//         printf("----- A -----\n");
//         print_stack(a);
//         printf("----- B -----\n");
//         print_stack(b);
//         pa(&a, &b);
//         printf("\n\n***PA***\n");
//         printf("----- A -----\n");
//         print_stack(a);
//         printf("----- B -----\n");
//         print_stack(b);
//         // printf("\n\n***ra***\n");
//         // ra(&a);
//         // print_stack(a);
//         // printf("\n\n***rra***\n");
//         // rra(&a);
//         // rra(&a);
//         // rra(&a);
//         // print_stack(a);

//         printf("\n\n***rrr***\n");
//         rrr(&a ,&b);
//         printf("----- A -----\n");
//         print_stack(a);
//         printf("----- B -----\n");
//         print_stack(b);
//         free_stack(a);
//         free_stack(b);
//     }    
//     ft_printf("num de params '%d'\n", argc);
//     ft_printf("param '%s'\n", argv[1]);
//     ft_printf("accedo\n");
//     printf("r de atoi1 '%d'\n", ft_atoi(argv[1]));
//     printf("r de atoi2 '%d'\n", ft_atoi(argv[1]));
//     return (0);
// }

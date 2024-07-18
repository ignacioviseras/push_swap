/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/07/18 19:34:13 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void error()
{
    ft_printf("Error\n");
    exit(1);
}


void error_digit(char **str_splited, t_stack *a)
{
    ft_printf("Error: Use only numbers\n");
    free_all((void **)str_splited);
    free_stack(a);
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

void    add_number(char *char_num, t_stack **stack, int n)
{
    int num;
    t_stack **aux;
    t_stack *top_stack;
    
    top_stack = *stack;
    num = ft_atoi(char_num);
    if ((*stack) == NULL) {
        stack_add_bottom(stack, stack_create(num, n));
        return ;
    }
    aux = stack;
    while ((*aux)->next != NULL)//PUEDE DAR PROBLEMAS?? si no tengo elementos al principio???
    {
        if ((*aux)->value == num)//si coincide el numero insertado en el stack retorna 1 q sera error
        {
            free_stack(*stack);
            error();
        }
        (*aux) = (*aux)->next;
    }
    stack_add_bottom(stack, stack_create(num, n));
    *stack = top_stack;
    return ;
}


void init_stack(t_stack **a, char **num, int n_num)
{
    int x;
    int i;
    int size;
    int pos;
    char **str_splited; 

    x = 1;
    pos = 0;
    while (x < n_num)
    {
        size = n_words(num[x], ' ');
        str_splited = ft_split(num[x], ' ');
        i = -1;
        while (++i < size)
        {
            if (is_digit(str_splited[i]) == 1)// NO cumple el control de datos
            {
                error_digit(str_splited, *a);//limpia todo y sale
            }
            else
                add_number(str_splited[i], a, pos++);
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
        print_stack(a);
        if (is_sorted(a) == 1)//no esta ordenado
        {
            stack_sorter(&a, &b);
            ft_printf("***** Despues de ordenarse *****\n");
            print_stack(a);
            free_stack(a);
        }
        else//esta ordenado
        {
            ft_printf("***** venia ordenado *****\n");
            print_stack(a);
            free_stack(a);
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

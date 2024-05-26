/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/27 00:06:10 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void error()
{
    ft_printf("Error\n");
    exit(1);
}

char *load_params(char **nums, int n)
{
    char    *str;
    char    *temp;
    char    *aux;
    int     x;

    x = 2;
    str = ft_strdup(nums[1]);
    temp = ft_strdup(" ");
    if (!str || !temp)
        return (free(str), free(temp), NULL);
    while (x < n)
    {
        aux = ft_strjoin(temp, nums[x]);
        free(temp);
        temp = aux;
        if (!temp)
            return (free(str), NULL);
        aux = ft_strjoin(str, temp);
        free(str);
        str = aux;
        if (!str)
            return (free(temp), NULL);
        x++;
    }
    return (free(temp), str);
}

void init_stack(t_stack *a, t_stack *b, char **num, int n_num)
{
    //
    char *str;
    char **str_splited;

    str = load_params(num, n_num);
    if (is_digit(str) == 1)
    {
        free(str);
        error();
    }
    printf("valido???\n");
    // str_splited = ft_split(str, ' ');
    free(str);//hay q liberar str para no tener fugas

    // else
    // {
    //     free(str);
    // }
}

/*
#####################################
añadir -Werror al makefile
#####################################

*/
int main(int argc, char **argv)
{
    // 123 1 23 1  23 123 123 123  123
    // "23 34 235 4567568 86 "
    // "1 2 3 4" "5 6 7 " 8 9  asdsad jgfh   10 "-1 3 3 54"

    t_stack a;
    t_stack b;

    // a = NULL;
    // b = NULL;
    if (argc < 2)
        exit(1);
    else
    {
        init_stack(&a, &b, argv, argc);

    }    
    
    ft_printf("num de params '%d'\n", argc);
    ft_printf("param '%s'\n", argv[1]);
    ft_printf("accedo\n");
    printf("r de atoi1 '%d'\n", ft_atoi(argv[1]));
    printf("r de atoi2 '%d'\n", ft_atoi(argv[1]));
    return (0);
}

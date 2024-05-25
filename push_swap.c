/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/25 19:30:59 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void error()
{
    ft_printf("Error\n");
    exit(1);
}

int validate_params(char **nums, int n)
{
    int x;
    char *values:

    x = 1;
    while (x < n - 1)
    {
        if (!ft_strchr(nums[x], ' '))
        {
            values = 
            /* code */
        }
        else
        {
            nums = ft_split(nums[x], ' ');
            if (is_digit(nums[x]) != 0) // contorl de ascii para numeros
                error();
        }
        x++;
    }
    return (0);
}

void init_stack(t_stack *a, t_stack *b, char **num, int n_num)
{
    //

    if (validate_params(num, n_num) == 0)
    {
        
    }
    else
        error();
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

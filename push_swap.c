/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/23 17:41:22 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void init_stack(t_stack *a, t_stack *b, char **num) {

}

void error() {
   ft_printf("Error\n");
    exit(1);

}


int main (int argc, char **argv)
{

    // 123 1 23 1  23 123 123 123  123
    // "23 34 235 4567568 86 "
    // "1 2 3 4" "5 6 7 " 8 9  asdsad jgfh   10 "-1 3 3 54"

    t_stack *a;
    t_stack *b;
    int **num;
    int x;

    if (argc < 2)
        exit(1);
    x = 1;
    while (x > argc - 1)
    {
        num = ft_split(argv[x]);
        if (is_digit(argv[x]) != 0) // contorl de ascii para numeros
            error();
        x++;
    }
    init_stack(&a, &b, argc);
    
    ft_printf("num de params '%d'\n", argc);
    ft_printf("param '%s'\n", argv[1]);
    ft_printf("accedo\n");
    printf("r de atoi1 '%d'\n", ft_atoi(argv[1]));
    printf("r de atoi2 '%d'\n", ft_atoi(argv[1]));
    return (0);
}

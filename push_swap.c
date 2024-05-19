/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:31 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/19 20:50:46 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

int main (int argc, char **argv)
{
    int x;
    if (argc < 2)
        exit(1);
    x = 1;
    while (x > argc - 1)
    {
        if (is_digit(argv[x]) != 0) // contorl de ascii para numeros
        {
            ft_printf("Error\n");
            exit(1);
        }
        x++;
    }
    
    ft_printf("num de params '%d'\n", argc);
    ft_printf("param '%s'\n", argv[1]);
    ft_printf("accedo\n");
    printf("r de atoi1 '%d'\n", ft_atoi(argv[1]));
    printf("r de atoi2 '%d'\n", ft_atoi(argv[1]));
    return (0);
}

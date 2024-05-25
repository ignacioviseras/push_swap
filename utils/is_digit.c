/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:20:46 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/25 19:03:54 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./utils.h"

int is_digit(char *s) {
    int len_agv;
    
    len_agv = ft_strlen(s);
    while (s[len_agv] != '\0')
    {
        if (s[len_agv] == '-' || s[len_agv] == '+')
            len_agv++;
        if (!(s[len_agv] >= '0') && !(s[len_agv] <= '9'))
            return(1);//no es digito
        len_agv++;
    }
    return (0);
}

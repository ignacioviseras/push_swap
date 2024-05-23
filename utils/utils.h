/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:36 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/23 17:34:35 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# ifndef HEXLOWER
#  define HEXLOWER "0123456789abcdef"
# endif

# ifndef HEXUPPER
#  define HEXUPPER "0123456789ABCDEF"
# endif

# include <stdlib.h>
# include "stdarg.h"
# include <unistd.h>


// SRC
int is_digit(char *s);

// BASICS
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);

// PRINTF
int		ft_printf(char const *format, ...);
int		ft_print_char(int s);
int		ft_print_string(char *s);
int		ft_print_percent(void);
int		ft_print_unsigned(unsigned int n);
int		ft_print_int(int n);
int		ft_print_hex(unsigned long long n, char *baseFormat);
int		ft_print_pointer(unsigned long long n);

#endif

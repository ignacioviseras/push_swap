/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:43:36 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/26 19:44:16 by igvisera         ###   ########.fr       */
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
# include <stdint.h>


// SRC
int is_digit(char *s);

// BASICS
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
void	free_all(void **str);
char	**ft_split(char const *s, char c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isdigit(int c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, const char *s2);
size_t	ft_strlcpy(char *dst, char *src, size_t size);


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

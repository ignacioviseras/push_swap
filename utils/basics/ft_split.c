/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:39:00 by igvisera          #+#    #+#             */
/*   Updated: 2024/02/08 20:58:30 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

int	n_words(char const *s, char c)
{
	int	words;
	int	index;

	index = 0;
	words = 0;
	index = 0;
	if (!s)
		return (0);
	while (s[index] && s[index] == c)
		index++;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			while (s[index] && s[index] == c)
				index++;
			words++;
		}
		else
			index++;
	}
	if (s[index - 1] && s[index - 1] != c)
		words++;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len_word;
	char	**str;

	i = 0;
	str = ft_calloc(n_words(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	while (s && *s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			return (str[i] = NULL, str);
		if (!ft_strchr(s, c))
			len_word = ft_strlen(s);
		else
			len_word = ft_strchr(s, c) - s;
		str[i] = ft_substr(s, 0, len_word);
		if (!str[i++])
			return (free_all((void **) str), NULL);
		s += len_word;
	}
	return (str[i] = NULL, str);
}

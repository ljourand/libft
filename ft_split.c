/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:56:42 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/12 14:52:46 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_words(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (str[0] != c && (str[1] == c || str[1] == '\0'))
		{
			count++;
		}
		str++;
	}
	return (count);
}

char	*get_and_skip_word(const char **str, char c)
{
	size_t	length;

	while (**str && **str == c)
	{
		*str += 1;
	}
	length = 0;
	while ((*str)[length] && (*str)[length] != c)
	{
		length++;
	}
	*str += length;
	return (ft_substr(*str - length, 0, length));
}

static void	free_split(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(const char *str, char c)
{
	size_t	nb_words;
	size_t	i;
	char	**split;

	nb_words = count_words(str, c);
	split = malloc((nb_words + 1) * sizeof (char *));
	if (!split)
	{
		return (NULL);
	}
	split[nb_words] = NULL;
	i = 0;
	while (i < nb_words)
	{
		split[i] = get_and_skip_word(&str, c);
		if (!split[i])
		{
			free_split(split);
			return (NULL);
		}
		i++;
	}
	return (split);
}

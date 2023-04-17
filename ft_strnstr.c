/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:05:02 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/09 17:24:49 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	length_needle;

	length_needle = ft_strlen(needle);
	if (length_needle == 0)
	{
		return ((char *)haystack);
	}
	if (length_needle > len)
	{
		return (NULL);
	}
	i = 0;
	while (haystack[i] && i < len - length_needle + 1)
	{
		if (ft_strncmp(haystack + i, needle, length_needle) == 0)
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

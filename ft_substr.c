/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:34:48 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/15 11:17:21 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*str;

	length = ft_strlen(s) - start;
	if ((int)length < 0)
	{
		length = 0;
	}
	else if (length > len)
	{
		length = len;
	}
	str = malloc(length + 1);
	if (!str)
	{
		return (NULL);
	}
	str[length] = '\0';
	return (ft_memcpy(str, s + start, length));
}

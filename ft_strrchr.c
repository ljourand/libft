/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:59:48 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/08 16:09:48 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buffer;

	buffer = NULL;
	while (*s)
	{
		if (*s == (char)c)
			buffer = (char *)s;
		s++;
	}
	if (c == 0)
	{
		buffer = (char *)s;
	}
	return (buffer);
}

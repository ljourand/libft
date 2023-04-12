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
	int		i;
	char	*buffer;

	i = 0;
	buffer = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			buffer = (char *)&s[i];
		i++;
	}
	if (c == 0)
	{
		buffer = (char *)&s[i];
	}
	return (buffer);
}

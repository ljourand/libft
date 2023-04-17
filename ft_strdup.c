/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:04:09 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/12 14:52:26 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*str;

	size = ft_strlen(src) + 1;
	str = malloc(size);
	if (!str)
	{
		return (NULL);
	}
	return (ft_memcpy(str, src, size));
}

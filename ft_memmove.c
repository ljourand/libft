/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:38:59 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/07 13:08:51 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src > dst)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len > 0)
	{
		((char *)dst)[len - 1] = ((char *)src)[len - 1];
		len--;
	}
	return (dst);
}

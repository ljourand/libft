/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:13:17 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/07 13:43:38 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*output;

	if (count * size < count)
	{
		return (NULL);
	}
	output = malloc(count * size);
	if (!output)
	{
		return (NULL);
	}
	ft_bzero(output, count * size);
	return (output);
}

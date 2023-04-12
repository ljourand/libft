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
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (src[i])
		i++;
	str = ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (0);
	j = -1;
	while (src[++j])
		str[j] = src[j];
	return (str);
}

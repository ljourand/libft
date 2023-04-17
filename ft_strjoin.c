/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:41:17 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/15 11:32:10 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length_s1;
	size_t	length_s2;
	char	*str;

	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	str = malloc(length_s1 + length_s2 + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_memcpy(str, s1, length_s1);
	ft_memcpy(str + length_s1, s2, length_s2);
	str[length_s1 + length_s2] = '\0';
	return (str);
}

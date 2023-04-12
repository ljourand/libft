/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:45:58 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/12 14:51:54 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	int		i;
	int		length;
	int		start;

	if (!s1 || !set)
		return (0);
	if (set[0] == 0)
		return (ft_strdup(s1));
	length = ft_strlen(s1);
	i = length;
	while (--i >= 0 && ft_strchr(set, s1[i]))
		length--;
	i = -1;
	while (length > 0 && s1[++i] && ft_strchr(set, s1[i]))
		length--;
	start = i;
	output = ft_calloc(length + 1, sizeof (char));
	if (!output)
		return (0);
	i = -1;
	while (++i < length)
		output[i] = s1[i + start];
	return (output);
}

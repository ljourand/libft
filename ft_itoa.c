/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:57:31 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/12 14:54:07 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	return (x);
}

static int	ft_get_nb_digits(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = ft_get_nb_digits(n);
	str = malloc(length + 1);
	if (!str)
	{
		return (NULL);
	}
	str[length] = '\0';
	while (length > 0)
	{
		length--;
		str[length] = ft_abs(n % 10) + '0';
		n /= 10;
		if (n == 0 && length != 0)
		{
			str[0] = '-';
			break ;
		}
	}
	return (str);
}

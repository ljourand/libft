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

static int	ft_get_nb_digits(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*output;
	long	nb;
	int		length;

	length = ft_get_nb_digits(n);
	output = ft_calloc(length + 1, sizeof (char));
	if (!output)
		return (0);
	if (n == 0)
		output[0] = '0';
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		output[0] = '-';
	}
	while (nb > 0)
	{
		length--;
		output[length] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (output);
}

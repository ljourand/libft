/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:24:38 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/08 13:52:24 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	long	nb;

	nb = n;
	if (n < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	digit = nb % 10 + '0';
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	write(fd, &digit, 1);
}

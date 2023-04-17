/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljourand <ljourand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:44:52 by ljourand          #+#    #+#             */
/*   Updated: 2021/11/12 10:54:25 by ljourand         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
	{
		return (TRUE);
	}
	return (FALSE);
}

static void	skip_white_spaces(const char **str)
{
	while (ft_isspace(**str) && **str)
	{
		*str += 1;
	}
}

static int	get_and_skip_sign(const char **str)
{
	int	sign;

	sign = (**str == '-') * -1 + (**str != '-') * 1;
	if (**str == '-' || **str == '+')
		*str += 1;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	skip_white_spaces(&str);
	sign = get_and_skip_sign(&str);
	result = 0;
	while (ft_isdigit(*str))
	{
		result = result * 10 + *str - '0';
		if (result < 0 && sign == 1)
			return (-1);
		if (result < 0 && sign == -1)
			return (0);
		str++;
	}
	return (result * sign);
}

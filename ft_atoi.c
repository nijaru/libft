/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:32:41 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 22:33:21 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include "libft.h"

int		ft_atoi(const char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while (*str)
	{
		if (*str == '-')
			sign = -1;
		if (('0' <= *str) && (*str <= '9'))
		{
			value *= 10;
			value += (*str - '0');
		}
		else if (value)
		{
			break ;
		}
		++str;
	}
	return (value * sign);
}

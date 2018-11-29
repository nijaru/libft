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

int		ft_atoi(char *str)
{
	long	value;
	int		sign;
	int		flag;

	value = 0;
	sign = 1;
	flag = 0;
	while (*str)
	{
		if (*str == '-')
			sign = -1;
		if (('0' <= *str) && (*str <= '9'))
		{
			value *= 10;
			value += (*str - '0');
			flag = 1;
		}
		else if (flag)
		{
			break ;
		}
		++str;
	}
	return (value * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 23:37:17 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 23:39:19 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putnbr_base(char *str, int base)
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
		if (('0' <= *str) && (*str <= '0' + base))
		{
			value *= base;
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

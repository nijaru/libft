/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:11:50 by nrusso            #+#    #+#             */
/*   Updated: 2018/11/28 21:16:14 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*s;
	long	v;
	int		i;
	int		c;

	v = n;
	if (n < 0)
        i = digits(n) + 1;
    else
        i = digits(n);
	if ((s = ft_strnew(i)))
	{
		while (i--)
		{
			c = v % 10;
			s[i] = c < 0 ? -c + '0' : c + '0';
			v /= 10;
		}
		if (n < 0)
			s[0] = '-';
		return (s);
	}
	return (0);
}

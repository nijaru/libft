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

#include <libft.h>

int     len(int n)
{
    int i;

	i = 1;
	while (n /= 10)
		++i;
	return (i);
}

char    *ft_itoa(int n)
{
	char	*s;
	int     l;
	int     tmp;

	l = len(n);
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		++l;
	}
	if (!(s = ft_strnew(l)))
		return (NULL);
	s[--l] = tmp % 10 + '0';
	while (tmp /= 10)
		s[--l] = tmp % 10 + '0';
	if (n < 0)
		*(s + 0) = '-';
	return (s);
}

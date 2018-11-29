/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 23:18:10 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 23:30:17 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				strlength(char *str)
{
	const char *s;

	s = str;
	while (*s)
	{
		++s;
	}
	return (s - str);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*d;
	char	*s;
	int		n;
	int		dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + strlength(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

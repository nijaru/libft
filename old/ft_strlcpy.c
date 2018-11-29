/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 23:30:50 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 23:34:35 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *d;
	char *e;
	char *s;

	d = dest;
	e = dest + size;
	s = src;
	while (*s && d < e)
		*d++ = *s++;
	if (d < e)
		*d = 0;
	else if (size > 0)
		d[-1] = 0;
	while (*s)
		s++;
	return (s - src);
}

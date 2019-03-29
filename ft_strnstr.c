/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:32:41 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 22:33:21 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	if (!*needle)
		return ((char*)haystack);
	nlen = ft_strlen(needle);
	if (!nlen)
		return (0);
	i = 0;
	while (i <= (len - nlen))
	{
		if (!*haystack)
			return (0);
		if ((*haystack == *needle) && (!strncmp(haystack, needle, nlen)))
			return ((char*)haystack);
		++haystack;
		++i;
	}
	return (0);
}

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

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	int		lastresult;

	if (!*needle)
		return ((char*)haystack);
	n = ft_strlen(needle);
	lastresult = 1;
	while (n <= len && !*haystack &&
			(lastresult = ft_strncmp(haystack, needle, n)))
	{
		--len;
		++haystack;
	}
	if (!lastresult)
		return (0);
	return ((char *)haystack);
}

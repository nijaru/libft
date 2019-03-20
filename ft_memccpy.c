/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:32:41 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 22:33:21 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dp;
	char *sp;

	dp = (char*)dst;
	sp = (char*)src;
	while (n-- && *sp != c)
		*dp++ = *sp++;
	if (!n)
	{
		*dp++ = *sp++;
		return (dp);
	}
	return (0);
}

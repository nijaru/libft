/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:01:14 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/27 20:17:27 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s;
	char *sp;

	if (!s1 && !s2)
		return (ft_strnew(0));
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	else
	{
		s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (!s)
			return (0);
		sp = s;
		while (*sp)
			*sp++ = *s1++;
		while (*sp)
			*sp++ = *s2++;
		*sp++ = 0;
	}
	return (s);
}

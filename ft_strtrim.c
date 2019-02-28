/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:01:14 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/27 20:17:27 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include "libft.h"

char    *ft_strtrim(char const *s)
{
    char const *sp;

	if (!s)
		return (0);
	while (whitespace(*s))
		s++;
	if (!*s)
		return (ft_strnew(0));
	sp = s + ft_strlen(s) - 1;
	while (sp > s && whitespace(*sp))
		sp--;
	return (ft_strsub(s, 0, sp - s + 1));
}

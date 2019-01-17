/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:32:41 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 22:33:21 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include "libft.h"

char    *ft_strstr(const char *s1, const char *s2)
{
    size_t n;

    n = ft_strlen(s2);
    while (*s1)
        if (!ft_memcmp(s1++, s2, n))
            return ((char*)s1 - 1);
    return (0);
}

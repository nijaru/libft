/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:01:14 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/27 20:17:27 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    char	*str;
	int		i;

	if (!str)
		return (0);
	str = ft_strnew(len);
	if (!str)
		return 0;
	s = s + start;	
	i = 0;
	while (i < len) 
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

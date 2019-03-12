/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:01:14 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/27 20:17:27 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str)
		return (ft_strcpy(str, s1));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 22:55:44 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 23:13:48 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while ((*dest++ = *src++))
		;
	return (tmp);
}

int		strlength(char *str)
{
	const char *s;

	s = str;
	while (*s)
	{
		++s;
	}
	return (s - str);
}

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + strlength(dest), src);
	return (dest);
}

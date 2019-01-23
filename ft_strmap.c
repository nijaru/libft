/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:20:47 by nrusso            #+#    #+#             */
/*   Updated: 2018/11/28 21:23:11 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include	<libft.h>

char *ft_strmap(char const *s, char (*f)(char))
{
    char	*tmp;
	int		i;

	i = 0;
	tmp = ft_strnew(ft_strlen(s));
	if (!tmp)
		return (0);
	while (s[i])
	{
		tmp[i] = f(s[i]);
		i++;
	}
	return (tmp);
}

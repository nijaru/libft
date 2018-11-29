/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 10:50:37 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 11:40:21 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *srch;

	while (*str)
	{
		start = str;
		srch = to_find;
		while (*str && *srch && *str == *srch)
		{
			str++;
			srch++;
		}
		if (!*srch)
			return (start);
		str = start + 1;
	}
	return (0);
}

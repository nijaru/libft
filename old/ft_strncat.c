/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 23:14:35 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 23:17:00 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while (nb--)
		if (!(*dest++ = *src++))
			return (tmp);
	*dest = 0;
	return (tmp);
}

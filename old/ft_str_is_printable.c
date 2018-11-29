/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 22:49:18 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 22:55:07 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isprintable(unsigned char c)
{
	if (c >= 0x20 && c <= 0x7e)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!isprintable(*str))
		{
			return (0);
		}
		++str;
	}
	return (1);
}

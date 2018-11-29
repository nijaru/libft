/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 22:34:11 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 22:38:12 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		is_alpha(char c)
{
	if (is_upper(c) || is_lower(c))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!is_alpha(*str))
		{
			return (0);
		}
		++str;
	}
	return (1);
}

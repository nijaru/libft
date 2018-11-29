/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:28:09 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/28 21:31:18 by nrusso           ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (i == 0)
		{
			if (is_lower(*(str + i)))
				*(str + i) -= 32;
		}
		else if (!is_alpha(*(str + i)))
		{
			i++;
			if (is_lower(*(str + i)))
			{
				*(str + i) -= 32;
			}
		}
		else if (is_upper(*(str + i)))
			*(str + i) += 32;
		++i;
	}
	return (str);
}

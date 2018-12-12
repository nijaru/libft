/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:11:50 by nrusso            #+#    #+#             */
/*   Updated: 2018/11/28 21:16:14 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include <libft.h>

int ft_isascii(int c)
{
    return (0 <= c && c < 128);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:20:47 by nrusso            #+#    #+#             */
/*   Updated: 2018/11/28 21:23:11 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <libft.h>

int ft_isalpha(int c)
{
    return (isupper(c) || islower(c));
}
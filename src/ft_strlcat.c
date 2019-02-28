/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:01:14 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/27 20:17:27 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t src_len;
    size_t dst_len;

    dst_len = strlen(dst);
    src_len = strlen(src);

    if (dst_len + src_len >= size) 
        return (dst_len+src_len);

    memcpy(dst + dst_len, src, src_len + 1);

    return (dst_len + src_len);
}


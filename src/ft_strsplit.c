/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:01:14 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/27 20:17:27 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include "libft.h"

char    **ft_strsplit(char const *s, char c)
{
    int len;
    int count;
    int i;
    int j;
    char **arr;
    char **base;

    len = 0;
    count = 0;
    i = 0;
    j = 0;
    arr = 0;
    base = 0;
    while(*(s++)) {
        if (*s == c) count++;
        len++;
    }
    s -= (len + 1);
    arr = (char **)malloc(sizeof(char *) * (len + 1));
    base = arr;
    while (i < (count + 1)) {
        j = 0;
        while(s[j] != c) ++j;
        ++j;
        *arr = (char *)malloc(sizeof(char) * j);
        memcpy(*arr, s, (j-1));
        (*arr)[j-1] = '\0';
        s += j;
        ++arr;
        ++i;
    }
    *arr = 0;
    return (base);
}

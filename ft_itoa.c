/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:11:50 by nrusso            #+#    #+#             */
/*   Updated: 2018/11/28 21:16:14 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   include "libft.h"

static int digits(int n)
{
    int  i;
    i = 1;
    while(n /= 10)
      i++;
    return (i);
}

static void rev(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

static void real_itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    s[i++] = n % 10 + '0';
    while ((n /= 10) > 0)
    {
        s[i++] = n % 10 + '0';
    }
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    rev(s);
}

char* ft_itoa(int n)
{
    char* s;

    if ((s = ft_strnew(digits(n))))
    {
        real_itoa(n, s);
        return s;
    }
    return 0;
}

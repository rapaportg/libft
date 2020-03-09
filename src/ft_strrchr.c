/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 12:09:15 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/07 12:24:12 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s) + 1;

    if (!s)
        return 0;
    while (i)
    {
        if (s[i] == c)
            return (char *)(s + i);
        i--;
    }
    return 0;
}
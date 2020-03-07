/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:47:33 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 21:53:12 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    int     len;
    char    *ret;

    len = ft_strlen(s2);
    ret = s1;
    while (*s1)
        s1++;
    while (*s2 && n--)
        *s1++ = *s2++;
    *s1 ='\0';
    return (ret);
}
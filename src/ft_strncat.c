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
// behavior undefined if s1 is not large enough to hold n of s2
char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    char    *ret;

    ret = s1;
    while (*s1)
        s1++;
    while (*s2 && n--)
        *s1++ = *s2++;
    *s1 ='\0';
    return (ret);
}
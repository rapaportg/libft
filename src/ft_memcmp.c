/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 10:21:28 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 10:39:51 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (n--)
    {
        if (*(unsigned char *)s1 != *(unsigned char *)s2)
        {
            return ((*(unsigned char *) s1) - *(unsigned char *)s2); // returning difference
        }
        s1++;
        s2++;
    }
    return (0); // strings are identical
}
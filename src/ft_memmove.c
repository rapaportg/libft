/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 22:11:29 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 09:59:40 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// unlike memcpy which copies data from one location to another. memmove copies the data to an
// intermediate buffer first, then from the buffer to the destination

void *ft_memmove(void *dst, const void *src, size_t len)
{
    void *ret;

    ret = dst;
    if (dst < src) // this means that dst wont overwrite src while copying
    {
        while ((size_t)(dst - ret) < len)
        {
            *(unsigned char *)dst++ = *(unsigned char *)src++;
        }
    }
    else // this means dst will overwrite src while copy fo do it in a nondestructtive manner i.e [i].
    {
        while (len--)
        {
            ((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
        }
    }
    return (ret);
}
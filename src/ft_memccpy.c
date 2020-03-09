/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:54:11 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 09:59:39 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// copy until a delimiter is found then return a pointer to the next element after delimiter
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    while (n--)
    {  
        *(unsigned char *)dst++ = *(unsigned char *)src++;
        if ((unsigned char)c == *(unsigned char*)src)
            return (unsigned char *)dst++;
    }
    return (0);
}
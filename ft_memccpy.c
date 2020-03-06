/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:54:11 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/05 22:10:21 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
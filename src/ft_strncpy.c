/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:48:30 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 18:39:30 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
    char    *ret;
    size_t  start;

    ret = dst;
    start = len;
    if (!len)
        return (ret);
    while (*src && len--)
        *dst++ = *src++;
    if (len <= start)
        ft_bzero(dst, len);
    
    return (ret);
}
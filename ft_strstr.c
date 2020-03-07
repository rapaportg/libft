/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 12:25:12 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/07 13:10:47 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *h, const char *n)
{
    char    *sub;
    char    *ptr;
    int     i;
    int     len;

    if (!h)
        return 0;
    if (!n)
        return (char *)h;
    sub = (char *)n;
    i = 0;
    len = ft_strlen(n);
    while (*h)
    {
        if (i == len)
            return ptr;
        if (*h == *sub++)
        {
            if (i == 0)
                ptr = (char *)h;
            i++;
        }
        else 
        {
            sub = (char *)n;
            ptr = NULL;
            i = 0;
        }
        h++;
    } 
    return NULL;   
}
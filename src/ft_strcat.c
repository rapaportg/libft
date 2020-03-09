/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 18:55:38 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 21:31:29 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// behavior undefined if dest is not large enough for s2 
#include "libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
    char    *ret;

    ret = s1;
    while (*s1)
        s1++;
    while (*s2)
    {
      *s1++ = *s2++;
    }
    *s1 ='\0';
    return (ret);
}
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

#include "libft.h"
#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
    int     len;
    char    *ret;

    len = ft_strlen(s2);
    ret = s1;
    while (*s1)
        s1++;
    while (*s2)
        *s1++ = *s2++;
    *s1 ='\0';
    return (ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:31:30 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 15:43:51 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

char *ft_strcpy(char *dst, const char *src)
{
    char *ret;
    
    ret = dst;
    if ((sizeof(dst) * ft_strlen(dst))  < (sizeof(src) * ft_strlen(src)))
      return '\0';
    while (*src != '\0')
    {
        *dst++ = *src++;
    }
    *dst = '\0';
    return (ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 20:37:36 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/05 20:52:07 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void * ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp;

    tmp = b;
    while(len--)
    {
        *tmp++ = (unsigned char)c;
    }
    return (b);
}
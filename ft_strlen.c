/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 10:41:41 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 10:43:20 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(*s++ != '\0')
    {
        i++;
    }
    return ((size_t) i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:03:55 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 16:13:02 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    // need to figure out how to check if s is big enough to handle n elements
    ft_memset(s, 0, n);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:18:13 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 09:59:38 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    void *ret;

    ret = dst;
    while(n--)
    {
        *(unsigned char*)dst++ = *(unsigned char*)src++;
    }

    return (ret);
}
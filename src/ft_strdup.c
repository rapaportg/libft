/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielrapaport <gabrielrapaport@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 10:47:36 by gabrielrapa       #+#    #+#             */
/*   Updated: 2020/03/06 15:25:40 by gabrielrapa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *ret;

    ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!ret)
        return (0);

    ft_memcpy(ret, s1, sizeof(char) * ft_strlen(s1));
    return (ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:43:23 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/20 23:43:23 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t c;

    c = 0;

    while ((s1[c] || s2[c] && c < n))
    {
        if((unsigned char) s1[c] > (unsigned char) s2[c])
            return(1);
        else if ((unsigned char) s1[c] < (unsigned char) s2[c])
            return(-1);
        c++;
    }
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:50:45 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/01 16:50:45 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char *dst;
	unsigned char *src;

	dst = (unsigned char *) d;
	src = (unsigned char *) s;
	
	if (d == NULL && s == NULL)
		return (d);
	while (n-- > 0)
		*(dst++) = *(src++);
	return (dst);
}

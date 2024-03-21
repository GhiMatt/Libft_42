/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghibel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:13:58 by maghibel          #+#    #+#             */
/*   Updated: 2024/02/29 20:37:35 by maghibel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*to;
	const unsigned char	*from;

	to = (unsigned char *) dst;
	from = (unsigned char *) src;
	if (src == NULL && dst == NULL)
		return (NULL);
	else if (dst <= src)
	{
		while (len--)
		{
			*to++ = *from++;
		}
	}
	else if (dst > src)
	{
		to += len - 1;
		from += len - 1;
		while (len--)
		{
			*to-- = *from--;
		}
	}
	return (dst);
}

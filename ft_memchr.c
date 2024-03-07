/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:50:13 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/07 21:50:13 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *c, int i, size_t s)
{
	const unsigned char	*sp;

	sp = (const unsigned char *) c;
	while (s-- > 0)
	{
		if (*sp == (const unsigned char) i)
			return ((void *)sp);
		sp++;
	}
	return (NULL);
}
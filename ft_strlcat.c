/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:16:17 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/07 22:16:17 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t destsize)
{
	size_t	c;
	size_t	j;

	if (destsize == 0)
		return (ft_strlen(from));
	c = ft_strlen(to);
	j = 0;
	if (destsize <= ft_strlen(to))
		return (destsize + ft_strlen(from));
	while (from[j] && c + 1 < destsize)
	{
		to[c] = from[j];
		c++;
		j++;
	}
	to[c] = '\0';
	return (ft_strlen(to) + ft_strlen(&from[j]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:16:17 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/07 22:16:17 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *to, const char *from, size_t size)
{
	size_t	l;
	size_t	c;

	l = 0;
	c = ft_strlen(from);
	if (size == 0)
		return (c);
	while (from[l] && l < size -1)
	{
		to[l] = from[l];
		l++;
	}
	to[l] = '\0';
	return (c);
}

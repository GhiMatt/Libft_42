/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:03:29 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/07 22:03:29 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *needle, size_t l)
{
	size_t	c;

	c = 0;
	if (!stack && !l)
		return (NULL);
	if (!*needle || needle == stack)
		return ((char *)stack);
	while (stack[0] && l != 0)
	{
		c = 0;
		while (stack[c] && stack[c] == needle[c] && l - c > 0)
		{
			if (ft_strlen(needle) == c + 1)
				return ((char *)stack);
			c++;
		}
		stack++;
		l--;
	}
	return (NULL);
}
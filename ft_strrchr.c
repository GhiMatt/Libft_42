/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:20:33 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/07 20:20:33 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *c, int i)
{
	int	l;

	l = ft_strlen(c);
	if (!c)
		return (NULL);
	while (l >= 0)
	{
		if (c[l] == (const char) i)
			return ((char *) c + l);
		l--;
	}
	return (NULL);
}
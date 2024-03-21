/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:20:47 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/18 21:20:47 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	k;
	char			*fs;

	k = 0;
	if (!s || !f)
		return (NULL);
	fs = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!fs)
		return (NULL);
	while (s[k])
	{
		fs[k] = f(k, s[k]);
		k++;
	}
	fs[k] = '\0';
	return (fs);
}

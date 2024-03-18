/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:54:19 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/18 20:54:19 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!c)
		return (0);
	if (start >= ft_strlen(c))
		return (ft_strdup(""));
	if (len > ft_strlen(c))
		len = ft_strlen(c) - start;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(c) && j < len)
		new_str[j++] = c[i++];
	new_str[j] = '\0';
	return (new_str);
}
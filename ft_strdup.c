/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:51:01 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/18 20:51:01 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *c)
{
	char	*dup_c;
	size_t	i;

	i = 0;
	dup_c = (char *)malloc((ft_strlen(c) + 1) * sizeof(char));
	if (!dup_c)
		return (NULL);
	while (c[i])
	{
		dup_c[i] = c[i];
		i++;
	}
	dup_c[ft_strlen(c)] = '\0';
	return (dup_c);
}

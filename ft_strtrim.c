/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:01:49 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/18 21:01:49 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	fin;
	size_t	n_len;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	beg = 0;
	fin = ft_strlen(s1) - 1;
	while (beg <= fin && ft_strchr(set, s1[beg]))
		beg++;
	while (fin >= beg && ft_strchr(set, s1[fin]))
		fin--;
	n_len = fin - beg + 2;
	trimmed = malloc((n_len) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + beg, n_len);
	return (trimmed);
}
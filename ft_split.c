/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:04:20 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/18 21:04:20 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	t;

	count = 0;
	t = 0;
	while (s[t])
	{
		if (s[t] != c)
		{
			count++;
			while (s[t] && s[t] != c)
				t++;
		}
		else
			t++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**matr;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	matr = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!matr)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			while (*s && *s != c && ++k)
				++s;
			matr[j++] = ft_substr(s - k, 0, k);
		}
		else
			s++;
	}
	matr[j] = 0;
	return (matr);
}

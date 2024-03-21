/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:58:37 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/18 20:58:37 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		len;
	char		*j_s;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	j_s = (char *)malloc((len + 1) * sizeof(char));
	if (!j_s)
		return (NULL);
	ft_strlcpy(j_s, s1, ft_strlen(s1) + 1);
	ft_strlcpy(j_s + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	j_s[len] = '\0';
	return (j_s);
}

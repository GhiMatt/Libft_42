/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:57:55 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/07 22:57:55 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	void	*output;

	if (c && s && c > (UINT_MAX / s))
		return (NULL);
	output = malloc(c * s);
	if (output == NULL)
		return (output);
	ft_bzero(output, c * s);
	return (output);
}

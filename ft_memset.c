/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:49:21 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/01 16:49:21 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *k, int b, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) k;
	while (n-- > 0)
		*(ptr++) = (unsigned char) b;
	return (k);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:13:21 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/18 21:13:21 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digit_cnt(long nm)
{
	size_t	cnt;

	cnt = 1;
	if (nm < 0)
	{
		cnt++;
		nm = -nm;
	}
	while (nm > 9)
	{
		nm = nm / 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	dig;
	long	nbr;

	nbr = n;
	dig = digit_cnt(nbr);
	res = (char *)malloc((dig + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[dig] = '\0';
	dig--;
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		res[dig] = (nbr % 10) + '0';
		nbr = nbr / 10;
		dig--;
	}
	if (nbr >= 0 && nbr <= 9)
		res[dig] = nbr + '0';
	return (res);
}
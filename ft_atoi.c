/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:31:12 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/07 22:31:12 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *t)
{
	int	s;
	int	i;

	s = 1;
	i = 0;
	while (*t == 32 || (*t >= 9 && *t <= 13))
		t++;
	if (*t == '-')
	{
		s = -1;
		t++;
	}
	else if (*t == '+')
		t++;
	while (*t >= '0' && *t <= '9')
	{
		i = i * 10;
		i += *t -48;
		t++;
	}
	return (i * s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:50:08 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/01 16:50:08 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int k)
{
    if((k >= 48 && k <= 57) || (k >= 65 && k <= 90) || (k >= 97 && k <= 122) )
    return (1);
    else
    return(0);
} 
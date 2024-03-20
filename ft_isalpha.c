/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:19:42 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/20 23:19:42 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)

{
	if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122 ))
		return (1);
	return (0);
}
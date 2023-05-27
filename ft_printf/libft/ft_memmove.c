/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:21:48 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 18:15:36 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destiny;
	unsigned const char	*source;

	destiny = (unsigned char *)dest;
	source = (unsigned const char *)src;
	i = 0;
	if (!n || destiny == source)
		return (destiny);
	if (destiny > source)
	{
		while (n-- > 0)
			destiny[n] = source[n];
	}
	else
	{
		while (i < n)
		{
			destiny[i] = source[i];
			i++;
		}
	}
	return (destiny);
}

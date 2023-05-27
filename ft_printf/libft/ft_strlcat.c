/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:43:53 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 15:26:11 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dlen;
	size_t			slen;

	i = 0;
	j = 0;
	while (*(dest + j) != '\0')
		j++;
	while (*(src + i) != '\0')
		i++;
	dlen = j;
	slen = i;
	if (size == 0 || size <= dlen)
		return (slen + size);
	i = 0;
	while (*(src + i) != '\0' && i < size - dlen - 1)
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dlen + slen);
}

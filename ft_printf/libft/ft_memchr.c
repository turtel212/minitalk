/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:44:27 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 15:21:02 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	character;

	character = (char) c;
	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (*str == character)
			return (str);
		i++;
		str++;
	}
	return (0);
}

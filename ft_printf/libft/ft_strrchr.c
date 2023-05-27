/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:46:25 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 17:23:28 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*test;

	test = (char *)s;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (test[i] == (unsigned char)c)
			return (&test[i]);
		i--;
	}
	return (0);
}

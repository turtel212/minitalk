/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:15:36 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 17:28:19 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	str_copy(const char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(const char *src)
{
	char	*point;
	int		length;

	length = ft_strlen((const char *)src);
	point = malloc((length + 1) * sizeof(char));
	if (point == NULL)
	{
		return (NULL);
	}
	str_copy(src, point);
	return (point);
}

/*int main()
{
	char src[5] = "Hola";
	printf("%s", ft_strdup(src));
	return (0);
}*/
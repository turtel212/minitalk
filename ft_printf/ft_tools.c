/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:53:26 by egaguirr          #+#    #+#             */
/*   Updated: 2023/02/16 11:10:07 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_counter(unsigned int n)
{
	unsigned int	result;

	result = 0;
	while (n != 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

char	*ft_printf_zero(void)
{
	char	*result;

	result = malloc(2 * sizeof(char));
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*ft_itoa_u(unsigned int n)
{
	char			*result;
	unsigned int	digits;

	if (n == 0)
		return (ft_printf_zero());
	digits = 0;
	digits = ft_counter(n);
	result = malloc((digits + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[digits] = '\0';
	digits--;
	while (n != 0)
	{
		result[digits] = n % 10 + 48;
		n /= 10;
		digits--;
	}
	return (result);
}

unsigned int	ft_count_params(const char *str)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:44:21 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 17:31:52 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	count_digits(int *nbr, int *digits)
{
	while (nbr[0] > 9)
	{
		nbr[0] /= 10;
		digits[0]++;
	}
}

char	*ft_negative(int n)
{
	int		digits[1];
	int		nbr[1];
	char	*result;

	digits[0] = 3;
	n *= -1;
	nbr[0] = n;
	count_digits(nbr, digits);
	result = malloc((digits[0]) * sizeof(char));
	if (!result)
		return (NULL);
	digits[0]--;
	result[digits[0]] = '\0';
	digits[0]--;
	while (n > 9)
	{
		result[digits[0]] = (n % 10) + 48;
		n /= 10;
		digits[0]--;
	}
	result[digits[0]] = n + 48;
	digits[0]--;
	result[digits[0]] = '-';
	return (result);
}

char	*ft_positive(int n)
{
	int		digits;
	int		nbr;
	char	*result;

	digits = 2;
	nbr = n;
	while (nbr > 9)
	{
		nbr /= 10;
		digits++;
	}
	result = malloc(digits * sizeof(char));
	if (!result)
		return (NULL);
	digits--;
	result[digits] = '\0';
	digits--;
	while (n > 9)
	{
		result[digits] = (n % 10) + 48;
		n /= 10;
		digits--;
	}
	result[digits] = n + 48;
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;

	if (n == -2147483648)
	{
		result = (char *)malloc(12 * sizeof(char));
		if (!result)
			return (NULL);
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	if (n < 0)
		return (ft_negative(n));
	else if (n > 0)
		return (ft_positive(n));
	result = (char *)malloc(2 * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

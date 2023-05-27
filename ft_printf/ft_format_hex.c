/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:09:29 by egaguirr          #+#    #+#             */
/*   Updated: 2023/02/16 13:24:24 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hex(unsigned int *ptr, unsigned int n, char *format,
						unsigned int *nbr)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		write(1, &format[ptr[i]], 1);
		i++;
		n--;
	}
	nbr[0] += i;
}

int	ft_printf_x(unsigned int nbr, unsigned int *nbr1)
{
	unsigned int	aux;
	unsigned int	mult;
	unsigned int	*result;

	aux = nbr;
	mult = 1;
	while (aux >= 16)
	{
		aux /= 16;
		mult++;
	}
	aux = mult;
	result = malloc((mult) * sizeof(int));
	while (nbr >= 16)
	{
		result[mult - 1] = (nbr % 16);
		nbr /= 16;
		mult--;
	}
	result[mult - 1] = nbr;
	ft_printf_hex(result, aux, "0123456789abcdef", nbr1);
	free(result);
	return (1);
}

int	ft_printf_xu(unsigned int nbr, unsigned int *nbr1)
{
	unsigned int	aux;
	unsigned int	mult;
	unsigned int	*result;

	aux = nbr;
	mult = 1;
	while (aux >= 16)
	{
		aux /= 16;
		mult++;
	}
	aux = mult;
	result = malloc((mult) * sizeof(int));
	while (nbr >= 16)
	{
		result[mult - 1] = (nbr % 16);
		nbr /= 16;
		mult--;
	}
	result[mult - 1] = nbr;
	ft_printf_hex(result, aux, "0123456789ABCDEF", nbr1);
	free(result);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:04:38 by egaguirr          #+#    #+#             */
/*   Updated: 2023/02/16 11:13:33 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(int params, unsigned int *nbr)
{
	write(1, &params, 1);
	nbr[0] += 1;
	return (1);
}

int	ft_printf_s(char *str, unsigned int *nbr)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		nbr[0] += 6;
		return (1);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	nbr[0] += i;
	return (1);
}

int	ft_printf_d(int nbr, unsigned int *nbr1)
{
	char	*print;
	int		i;

	i = 0;
	print = ft_itoa(nbr);
	while (print[i] != '\0')
	{
		write(1, &print[i], 1);
		i++;
	}
	free(print);
	nbr1[0] += i;
	return (1);
}

int	ft_printf_u(unsigned int nbr, unsigned int *nbr1)
{
	char			*print;
	unsigned int	i;

	i = 0;
	print = ft_itoa_u(nbr);
	while (print[i] != '\0')
	{
		write(1, &print[i], 1);
		i++;
	}
	free(print);
	nbr1[0] += i;
	return (i);
}

int	ft_printf_p(unsigned long long ptr, unsigned int *nbr)
{
	unsigned int		*printable;
	unsigned int		numbers;
	unsigned long long	aux;

	aux = ptr;
	numbers = 1;
	while (aux >= 16)
	{
		aux /= 16;
		numbers++;
	}
	nbr[0] += 2;
	aux = numbers;
	printable = malloc((numbers) * sizeof(int));
	write(1, "0x", 2);
	while (ptr >= 16)
	{
		printable[numbers - 1] = (ptr % 16);
		ptr /= 16;
		numbers--;
	}
	printable[numbers - 1] = ptr;
	ft_printf_hex(printable, aux, "0123456789abcdef", nbr);
	free(printable);
	return (1);
}

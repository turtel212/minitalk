/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:31:54 by egaguirr          #+#    #+#             */
/*   Updated: 2023/02/16 13:24:56 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_param_type(char type, va_list params, unsigned int *nbr)
{
	if (type == 'c')
		return (ft_printf_c(va_arg(params, int), nbr));
	else if (type == 's')
		return (ft_printf_s(va_arg(params, char *), nbr));
	else if (type == 'p')
		return (ft_printf_p(va_arg(params, unsigned long long), nbr));
	else if (type == 'd')
		return (ft_printf_d(va_arg(params, int), nbr));
	else if (type == 'i')
		return (ft_printf_d(va_arg(params, int), nbr));
	else if (type == 'u')
		return (ft_printf_u(va_arg(params, unsigned int), nbr));
	else if (type == 'x')
		return (ft_printf_x(va_arg(params, unsigned int), nbr));
	else if (type == 'X')
		return (ft_printf_xu(va_arg(params, unsigned int), nbr));
	else if (type == '%')
	{
		nbr[0] += 1;
		write(1, &type, 1);
		return (1);
	}
	return (0);
}

void	ft_printf_aux(const char *str, va_list params, unsigned int *nbr)
{
	unsigned int	j;

	j = 0;
	while (str[j] != '\0')
	{
		while (str[j] != '%' && str[j] != '\0')
		{
			write (1, &str[j], 1);
			j++;
		}
		if (str[j] != '\0' && ft_param_type(str[j + 1], params, nbr) != 0)
			j += 2;
		else if (str[j] != '\0')
		{
			write(1, &str[j], 1);
			j++;
		}
	}
}

int	ft_printf(const char *str, ...)
{
	unsigned int	j;
	va_list			params;
	unsigned int	p_nbr;
	unsigned int	*nbr;

	nbr = malloc(1 * sizeof(unsigned int));
	nbr[0] = 0;
	p_nbr = 0;
	j = 0;
	p_nbr = ft_count_params(str);
	va_start(params, str);
	ft_printf_aux(str, params, nbr);
	va_end(params);
	p_nbr *= -2;
	p_nbr += (ft_strlen(str) + nbr[0]);
	free(nbr);
	return (p_nbr);
}

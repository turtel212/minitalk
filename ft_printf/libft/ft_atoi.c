/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:43:51 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 15:47:21 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_spaces_plus(char *nbr, int *i, int *sign)
{
	while (nbr[i[0]] == '\f' || nbr[i[0]] == '\n' || nbr[i[0]] == '\r'
		|| nbr[i[0]] == '\t' || nbr[i[0]] == '\v' || nbr[i[0]] == ' ')
			i[0]++;
	if (nbr[i[0]] == '+' || nbr[i[0]] == '-')
	{
		if (nbr[i[0]] == '-')
			sign[0] *= -1;
		i[0]++;
	}
}

int	ft_atoi(const char *nptr)
{
	int		i[1];
	int		sign[1];
	int		result;
	char	*nbr;

	nbr = (char *)nptr;
	i[0] = 0;
	sign[0] = 1;
	result = 0;
	while (nbr[i[0]] != '\0')
	{
		ft_spaces_plus(nbr, i, sign);
		if (nbr[i[0]] == '+' || nbr[i[0]] == '-')
			return (0);
		if (nbr[i[0]] >= '0' && nbr[i[0]] <= '9')
		{
			while (nbr[i[0]] >= '0' && nbr[i[0]] <= '9')
			{
				result = (result * 10) + (nbr[i[0]] - '0');
				i[0]++;
			}
		}
		return (result * sign[0]);
	}
	return (result * sign[0]);
}

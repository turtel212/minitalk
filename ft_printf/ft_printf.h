/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:33:01 by egaguirr          #+#    #+#             */
/*   Updated: 2023/02/16 13:25:06 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int				ft_printf(const char *str, ...);
unsigned int	ft_counter(unsigned int n);
char			*ft_printf_zero(void);
char			*ft_itoa_u(unsigned int n);
void			ft_printf_hex(unsigned int *ptr, unsigned int n, char *format,
					unsigned int *nbr);
unsigned int	ft_count_params(const char *str);
int				ft_printf_c(int params, unsigned int *nbr);
int				ft_printf_s(char *str, unsigned int *nbr);
int				ft_printf_d(int nbr, unsigned int *nbr1);
int				ft_printf_u(unsigned int nbr, unsigned int *nbr1);
int				ft_printf_p(unsigned long long ptr, unsigned int *nbr);
int				ft_printf_x(unsigned int nbr, unsigned int *nbr1);
int				ft_printf_xu(unsigned int nbr, unsigned int *nbr1);

#endif

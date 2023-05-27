/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:15:58 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 15:16:22 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*result;

	result = (*lst);
	if ((*lst))
	{
		while (result->next != NULL)
			result = result->next;
		result->next = new;
	}
	if (!(*lst))
		((*lst) = new);
}

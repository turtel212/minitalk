/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:16:55 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 16:11:01 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*mem;

	mem = *lst;
	if (!(mem))
		return ;
	while (mem)
	{
		aux = mem->next;
		del(mem->content);
		free(mem);
		mem = aux;
	}
	*lst = NULL;
}

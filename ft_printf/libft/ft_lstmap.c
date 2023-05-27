/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:19:29 by egaguirr          #+#    #+#             */
/*   Updated: 2022/12/12 17:43:55 by egaguirr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*iteri(t_list *l, t_list *s, void *(*f)(void *))
{
	if (l)
	{
		s = ft_lstnew(f(l->content));
		if (!s)
			return (NULL);
		s->next = iteri(l->next, s->next, f);
	}
	return (s);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;

	start = NULL;
	start = iteri(lst, start, f);
	if (!start)
		ft_lstclear(&lst, del);
	return (start);
}

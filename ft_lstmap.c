/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:18:52 by nsion             #+#    #+#             */
/*   Updated: 2023/02/16 11:04:53 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nv;
	t_list	*temp;

	if (!lst)
		return ;
	nv = lst;
	while (lst->next != 0)
	{
		nv->content = f(lst->content);
		lst = lst->next;
		nv = nv->next;
	}
	temp = nv;
	while (nv->next != 0)
	{
		if (nv->content == NULL)
			ft_lstclear(&temp, del);
		nv = nv->next;
	}
	return (temp);
}

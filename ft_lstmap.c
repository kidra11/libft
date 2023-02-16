/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <nsion@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:04:28 by nsion             #+#    #+#             */
/*   Updated: 2023/02/16 12:05:06 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nv;
	t_list	*temp;

	if (!lst)
		return (0);
	nv = ft_lstnew(f(lst->content));
	if (nv == 0)
		return (NULL);
	temp = nv;
	lst = lst->next;
	while (lst)
	{
		nv->next = ft_lstnew(f(lst->content));
		if (nv->content == NULL)
			ft_lstclear(&temp, del);
		nv = nv->next;
		lst = lst->next;
	}
	return (temp);
}
/*
lst->content = 2
lst->content = 3
lst->content = 4

f ( x + 1);

nv->content = 3
nv->content = 4
nv->content = 5

temp->content = 3
temp->content = 
temp->content = i
*/

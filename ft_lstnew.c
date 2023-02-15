/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:20:48 by nsion             #+#    #+#             */
/*   Updated: 2023/02/15 14:45:05 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nv;

	nv = malloc(sizeof(t_list));
	if (!nv)
		return (0);
	nv->content = content;
	nv->next = 0;
	return (nv);
}

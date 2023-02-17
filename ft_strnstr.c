/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:13:57 by nsion             #+#    #+#             */
/*   Updated: 2023/02/17 12:12:24 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	if (!little[0])
		return ((char *)big);
	if (!len)
		return (NULL);
	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i])
	{
		y = 0;
		while (big[i + y] == little[y] && len > (i + y) && little[y])
			y++;
		if (!little[y])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

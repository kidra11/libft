/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:13:57 by nsion             #+#    #+#             */
/*   Updated: 2023/02/04 19:12:25 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i])
	{
		y = 0;
		while (big[i + y] == little[y] && len > (i + y))
		{
			y++;
		}
		if (!little[y])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

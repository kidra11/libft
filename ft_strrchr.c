/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:41:51 by nsion             #+#    #+#             */
/*   Updated: 2023/02/04 12:12:47 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*result;

	i = 0;
	result = 0;
	if (c == 0)
		return (((char *)s) + ft_strlen((char *)s));
	while (s[i])
	{
		if ((char)c == s[i])
			result = ((char *)s) + i;
		i++;
	}
	return ((char *)result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <shiro@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:38:52 by marvin            #+#    #+#             */
/*   Updated: 2022/12/07 18:07:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	result;	

	if (dstsize == 0)
		return (0);
	i = ft_strlen(dst);
	k = 0;
	while (src[k] && (i + 1) < dstsize)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	result = ft_strlen(dst) + ft_strlen(src);
	return (result);
}

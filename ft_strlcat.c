/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <shiro@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:38:52 by marvin            #+#    #+#             */
/*   Updated: 2023/01/02 18:55:27 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	sized;
	size_t	sizes;

	sizes = ft_strlen(src);
	if (size == 0)
		return (sizes + size);
	sized = ft_strlen(dst);
	i = sized;
	k = 0;
	while (src[k] && i < size - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = 0;
	if (size < sized)
		return (sizes + size);
	return (sized + sizes);
}

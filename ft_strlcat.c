/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:25:48 by nsion             #+#    #+#             */
/*   Updated: 2023/02/17 12:25:35 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	sized;
	size_t	sizes;

	if (!size || !src)
		return (ft_strlen(src));
	sized = ft_strlen(dst);
	sizes = ft_strlen(src);
	i = sized;
	k = 0;
	if (size < sized)
		return (sizes + size);
	while (src[k] && i < size - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = 0;
	return (sized + sizes);
}

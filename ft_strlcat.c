/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:25:48 by nsion             #+#    #+#             */
/*   Updated: 2023/02/01 15:34:50 by nsion            ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:07:28 by nsion             #+#    #+#             */
/*   Updated: 2023/02/05 15:17:23 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nv;
	char	*result;
	int	i;

	nv = (char *) malloc(len * sizeof(char *));
	if (nv == 0)
		return (NULL);
	i = 0;
	while (len-- > 0)
		result[i++] = s[start++];
	return (result);
}
		

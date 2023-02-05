/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:07:28 by nsion             #+#    #+#             */
/*   Updated: 2023/02/05 22:48:03 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nv;
	int		i;

	if (start > ft_strlen(s))
		return (NULL);
	nv = (char *) malloc((len + 1) * sizeof(char));
	if (nv == 0)
		return (NULL);
	i = 0;
	else if (len > ft_strlen(s))
		nv = (char *)s + start;
	while (len-- > 0 && s[start])
		nv[i++] = s[start++];
	return (nv);
}

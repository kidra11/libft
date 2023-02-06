/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:07:28 by nsion             #+#    #+#             */
/*   Updated: 2023/02/06 18:33:16 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nv;
	int		i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s + start))
	{
		nv = (char *)malloc(((ft_strlen(s) + 1) - start) * sizeof(char));
		if (nv == 0)
			return (NULL);
		i = 0;
		while (s[start])
			nv[i++] = s[start++];
		nv[i] = '\0';
		return (nv);
	}
	else
	{
		nv = (char *) malloc((len + 1) * sizeof(char));
		if (nv == 0)
			return (NULL);
		i = 0;
		while (len-- > 0 && s[start])
			nv[i++] = s[start++];
		nv[i] = '\0';
		return (nv);
	}
}

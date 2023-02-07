/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:07:28 by nsion             #+#    #+#             */
/*   Updated: 2023/02/07 11:46:20 by nsion            ###   ########.fr       */
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
		nv = (char *)malloc(((ft_strlen(s) + 1) - start) * sizeof(char));
	else
		nv = (char *) malloc((len + 1) * sizeof(char));
	i = 0;
	if (nv == 0)
		return (NULL);
	while (len-- > 0 && s[start])
		nv[i++] = s[start++];
	nv[i] = '\0';
	return (nv);
}

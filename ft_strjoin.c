/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:53:51 by nsion             #+#    #+#             */
/*   Updated: 2023/02/14 14:12:32 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		l;
	int		i;
	int		k;

	i = 0;
	l = ft_strlen(s1);
	k = ft_strlen(s2);
	if (!s1)
		return ((char *)s1);
	if (!s2)
		return ((char *)s2);
	str = (char *)malloc((l + k + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	l = 0;
	k = 0;
	while (s2[k])
	{
		if (i == l && s1[i])
			str[l++] = s1[i++];
		else
			str[l++] = s2[k++];
	}
	str[l] = '\0';
	return (str);
}

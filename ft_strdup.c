/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:20:57 by nsion             #+#    #+#             */
/*   Updated: 2023/02/05 21:34:33 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*l;

	i = 0;
	l = (char *)malloc(ft_strlen((char *)s) * sizeof(char));
	if (l = 0)
		return (0);
	while (s[i])
	{
		l[i] = s[i];
		i++;
	}
	l[i] = '\0';
	return (l);
}

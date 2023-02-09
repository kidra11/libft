/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:43:00 by nsion             #+#    #+#             */
/*   Updated: 2023/02/09 23:57:54 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libht.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s);
		i++;
	}
	str[i] = '\0';
	return (str);
}

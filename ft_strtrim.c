/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:11:09 by nsion             #+#    #+#             */
/*   Updated: 2023/02/12 14:47:04 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char s, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s == ((char *)set)[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		l;
	size_t		k;

	l = 0;
	while (is_set(s1[l], set) && s1[l])
		l++;
	i = ft_strlen(s1);
	while (is_set(s1[i - 1], set) && i > l)
		i--;
	str = (char *)malloc((i - l + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	k = 0;
	while (s1[l] && l < i)
		str[k++] = s1[l++];
	str[k] = '\0';
	return (str);
}
/*
i = 7
set[i] = char
i = taille de s1
s1 = "bonjour"
set = "op"

Tant que (i egale set[i] && set[i])
	i--

is_set renvoie 1 si s[i] est dans set, renvoie 0 si il n'est pas dans set.

Tant que (1 ou 0)
si s[i] est dans la chaine set renvoie 1
sinon 0
Tant que (is_set(s[i], set) == 1)
	i++
*/

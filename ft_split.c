/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:05:17 by nsion             #+#    #+#             */
/*   Updated: 2023/02/08 15:26:38 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (s[i])
	{
		while (c == s[i] && s[i])
			i++;
		if (s[i])
		{
			k++;
			while (c != s[i] && s[i])
				i++;
		}
	}
	return (k);
}

size_t	get_next_word(char const *s, char c)
{
	size_t	t;

	t = 0;
	while (s[t])
	{
		while (c == s[t] && s[t])
			t++;
		if (c != s[t] && s[t])
			return (t);
	}		
	return (t);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		y;

	i = 0;
	y = 0;
	str = malloc((count_word(s, c) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (s[i])
	{
		while (c == s[i] && s[i])
			i++;
		if(c != s[i] && s[i])
		{
			str[y] = ft_substr(s, i, get_next_word(s, c));
			y++;
		}
	}
	str[y] = 0;
	return (str);
}

int main(void)
{
	char s[] = "hello yellow";
	char c = 'l';
	int i = 0;
	char	**test = ft_split(s, c);

	while (i < 2)
		printf("%s\n", test[i++]);
	return (0);
}

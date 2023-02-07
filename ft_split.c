/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:05:17 by nsion             #+#    #+#             */
/*   Updated: 2023/02/07 19:48:01 by nsion            ###   ########.fr       */
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
	printf("%d\n", k);
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		y;
	int		t;

	i = 0;
	y = 0;
	t = 0;
	str = malloc((count_word(s, c) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (s[i])
	{
		while (c == s[i] && s[i])
			i++;
		if (s[i])
		{
			while (c != s[i] && s[i])
				str[y][t++] = s[i++];
			str[y][t] = 0;
			y++;
			t = 0;
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

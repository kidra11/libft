/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:53:11 by nsion             #+#    #+#             */
/*   Updated: 2023/02/09 18:16:22 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_int(int n)
{
	int	k;

	k = 1;
	if (n < 0)
	{
		k++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

static char	*reverse(int rem, int i, char *str)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	temp = 0;
	if (rem < 0)
		start = 1;
	end = i - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	printf("%s\n", str);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		cal;
	int		i;
	int		rem;

	i = 0;
	rem = n;
	str = (char *)malloc((size_int(n) + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	if (n == 0)
		return (str = "0\0");
	else if (n < 0)
	{
		if (n == -2147483648)
			return (str = "-2147483648\0");
		str[i++] = '-';
		n = -n;
	}
	cal = n % 10;
	while (n != 0)
	{
		str[i++] = cal + '0';
		n = n / 10;
		cal = n % 10;
	}
	str[i] = '\0';
	reverse(rem, i, str);
	return (str);
}
/*
int	main(void)
{
	int n;

	n = 0;
	printf("%s\n", ft_itoa(n));
	n = 2147483647;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/

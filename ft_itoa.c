/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:53:11 by nsion             #+#    #+#             */
/*   Updated: 2023/02/08 20:06:54 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_int(int n)
{
	int	k;

	k = 1;
	if (n < 0)
		k++;
	while (n > 0)
	{
		n / 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char	*str;

	
	str = malloc((size_int(n) + 1) * sizeof(char);
	if (str == 0)
		return (NULL);

	return (str);
}

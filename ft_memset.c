/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:17:33 by nsion             #+#    #+#             */
/*   Updated: 2023/02/03 14:57:30 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*unb;

	unb = b;
	while (len > 0)
	{
		*unb = c;
		unb++;
		len--;
	}
	return (b);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "salut espece de 3amar";

	printf("%s", (char *)ft_memset(str, '4', 5));
	return 0;
}*/

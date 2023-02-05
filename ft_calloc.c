/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:59:14 by nsion             #+#    #+#             */
/*   Updated: 2023/02/05 16:38:29 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb * size / nmemb != size)
		return (NULL);
	m = malloc(nmemb * size);
	if (m)
		ft_bzero(m, nmemb * size);
	return (m);
}

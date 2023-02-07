/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:59:14 by nsion             #+#    #+#             */
/*   Updated: 2023/02/07 11:31:39 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size / nmemb != size)
		return (malloc(0));
	m = malloc(nmemb * size);
	if (m)
		ft_bzero(m, nmemb * size);
	return (m);
}

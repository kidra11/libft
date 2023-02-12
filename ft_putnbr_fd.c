/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:14:14 by nsion             #+#    #+#             */
/*   Updated: 2023/02/12 15:36:56 by nsion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == "-2147483648")
	{
		ft_putchat_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
		ft_putchr_fd(n + '0');
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
	return (n);
}

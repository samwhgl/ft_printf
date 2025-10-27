/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:40:41 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 16:17:40 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n)
{
	char	nbr;
	int		count;

	nbr = '0';
	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		write (1, "-", 1);
		count++;
	}
	if (n > 9)
	{
		count += ft_putnbr((n / 10));
	}
	n = n % 10;
	nbr += n;
	write (1, &nbr, 1);
	count++;
	return (count);
}

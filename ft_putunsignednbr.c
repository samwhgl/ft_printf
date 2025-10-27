/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:09 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 15:49:48 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunsignednbr(int n)
{
	char	nbr;
	int		count;

	nbr = '0';
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

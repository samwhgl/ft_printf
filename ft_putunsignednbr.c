/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:09 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/28 09:27:17 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunsignednbr(unsigned int n)
{
	char		nbr;
	int			count;
	long int	nb;

	count = 0;
	nb = (long int) n;
	nbr = '0';
	if (nb > 9)
	{
		count += ft_putunsignednbr((nb / 10));
	}
	nb = nb % 10;
	nbr += nb;
	write (1, &nbr, 1);
	count++;
	return (count);
}

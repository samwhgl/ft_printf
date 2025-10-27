/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexamaj.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:35:04 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 17:11:38 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthexamaj(unsigned int a)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (a >= 16)
		count += ft_puthexamaj(a / 16);
	ft_putchar_fd(base[a % 16], 1);
	count++;
	return (count);
}

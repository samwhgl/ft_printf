/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:44:17 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 17:25:51 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


static int	ft_print_memory(const void *ptr)
{
	unsigned long	adr;
	char	*base;
	int	count;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	adr = (unsigned long)ptr;
	base = "0123456789abcdef";
	if (adr >= 16)
		count += ft_print_memory((void *)(adr / 16));
	ft_putchar_fd(base[adr % 16], 1);
	count++;
	return (count);
}

int	ft_print_memory2(const void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1,"0x", 2);
	count += ft_print_memory(ptr) + 2;
	return (count);
}

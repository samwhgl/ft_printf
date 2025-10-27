/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:44:17 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 14:51:42 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int	ft_print_memory(const void *ptr)
{
	unsigned long	adr;
	char	*base;
	int	count;

	count = 0;
	adr = (unsigned long)ptr;
	base = "0123456789abcdef";
	if (adr >= 16)
		count += ft_print_memory((void *)(adr / 16));
	ft_putchar_fd(base[adr % 16], 1);
	count++;
	return (count);
}

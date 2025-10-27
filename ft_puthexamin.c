/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexamin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:28:30 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 16:38:32 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthexamin(int a)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (a >= 16)
		count += ft_puthexamin(a / 16);
	ft_putchar_fd(base[a % 16], 1);
	count++;
	return (count);
}

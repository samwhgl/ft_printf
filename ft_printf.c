/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:43:00 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 13:21:23 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char * format, ...)
{
	int	count;
	int	i;
	va_list	args;
	char	*str;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			count ++;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
				i++;
				count ++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);
				count += ft_putstr_fd(str, 1);
				i++;
			}
			else if (format[i + 1] == 'p')
			{

			}
		}
		i++;
	}
	va_end(args);
	return (count);
}

#include <stdio.h>
int main(){
	printf("%d\n", ft_printf("%s hello %s worl%cd\n", "coucou", "my", 'n'));
	printf("%d\n", ft_printf("%s hello %s worl%cd\n", "coucou", "my", 'n'));
	return 0;
}

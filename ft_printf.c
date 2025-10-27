/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:43:00 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 18:31:45 by shaegels         ###   ########.fr       */
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
	if (!format)
		return (-1);
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
				if (!str)
				{
					write(1, "(null)", 6);
					count += 6;
				}
				count += ft_putstr_fd(str, 1);
				i++;
			}
			else if (format[i + 1] == 'p')
			{
				count += ft_print_memory2(va_arg(args, void *));
				i++;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				count += ft_putnbr(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 'u')
			{
				count += ft_putunsignednbr(va_arg(args, unsigned int));
				i++;
			}
			else if (format[i + 1] == 'x')
			{
				count += ft_puthexamin(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 'X')
			{
				count += ft_puthexamaj(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == '%')
			{
				ft_putchar_fd('%', 1);
				count ++;
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}

#include <stdio.h>
int main(){
	ft_printf("%d\n",ft_printf("%:\n", "hello"));
	printf("%d\n",printf("%:\n", "hello"));
	return 0;
}

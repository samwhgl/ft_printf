/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:43:00 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 16:45:22 by shaegels         ###   ########.fr       */
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
				write(1, "0x", 2);
				count += ft_print_memory(va_arg(args, void *)) + 2;
				i++;
			}
			else if (format[i + 1] == 'd')
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
	int i = -386;
	printf("%d\n", ft_printf("%s hello pointer %p %s worl%cd\n", "coucou", &i, "my", 'n'));
	printf("%d\n", printf("%s hello pointer %p %s worl%cd\n", "coucou", &i, "my", 'n'));
	printf("%d\n", ft_printf("%u\n", i));
	printf("%d\n", printf("%u\n", i));
	return 0;
}

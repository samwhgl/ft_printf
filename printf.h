/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:03:20 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/28 09:27:28 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
int		ft_print_memory2(const void *ptr);
int		ft_putnbr(int n);
int		ft_putunsignednbr(unsigned int n);
int		ft_puthexamin(unsigned int a);
int		ft_puthexamaj(unsigned int a);
int		ft_printf(const char *format, ...);

#endif

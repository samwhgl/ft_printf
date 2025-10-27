/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <shaegels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:11:06 by shaegels          #+#    #+#             */
/*   Updated: 2025/10/27 12:13:03 by shaegels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	int	count;

	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
		count ++;
	}
	return (count);
}


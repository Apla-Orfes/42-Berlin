/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:09:20 by ocharisi          #+#    #+#             */
/*   Updated: 2025/06/11 19:08:20 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static int	print(char c, va_list *args)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(*args, unsigned int)));
	else if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'x')
		return (ft_puthex(va_arg(*args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), 1));
	else if (c == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			count += print(s[i], &args);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

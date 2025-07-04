/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:02:49 by ocharisi          #+#    #+#             */
/*   Updated: 2025/06/13 17:36:10 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

static int	ft_putchar_static(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
	{
		count += ft_putchar_static(nb + '0');
	}
	else
	{
		count += ft_putnbr_unsigned(nb / 10);
		count += ft_putchar_static(nb % 10 + '0');
	}
	return (count);
}

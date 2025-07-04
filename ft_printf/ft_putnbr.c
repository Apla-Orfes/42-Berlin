/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:57:09 by ocharisi          #+#    #+#             */
/*   Updated: 2025/06/13 17:34:44 by ocharisi         ###   ########.fr       */
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

int	ft_putnbr(int nb)
{
	long int	n;
	int			count;

	n = nb;
	count = 0;
	if (n < 0)
	{
		count += ft_putchar_static('-');
		n = -n;
	}
	if (n < 10)
	{
		count += ft_putchar_static(n + '0');
	}
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putchar_static(n % 10 + '0');
	}
	return (count);
}

/*int main ()
{
	ft_putnbr(42);
	printf("\n");
	
	ft_putnbr(-42);
        printf("\n");
	
	ft_putnbr(0);
        printf("\n");
	
	ft_putnbr(INT_MAX);
        printf("\n");
	
	ft_putnbr(INT_MIN);
        printf("\n");
}*/

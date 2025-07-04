/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:46:42 by ocharisi          #+#    #+#             */
/*   Updated: 2025/06/13 17:35:24 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	count;

	count = 0;
	if (p == NULL)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		ft_putstr("0x");
		count = 2;
		count += ft_puthex((unsigned long)p, 0);
	}
	return (count);
}

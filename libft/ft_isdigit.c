/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:37:48 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/14 17:44:08 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main()
{
	if (ft_isdigit('a'))
		printf("Digit\n");
	else
		printf("Not digit\n");
	return (0);
}*/

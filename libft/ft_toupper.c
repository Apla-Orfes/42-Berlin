/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:55:23 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/14 18:04:26 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*#include <stdio.h>

int main()
{
	char c = 'A';
	char toupper = ft_toupper(c);

	printf("Original: %c\n", c);
	printf("New: %c\n", toupper);
	return (0);
}*/

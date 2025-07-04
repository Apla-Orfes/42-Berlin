/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:05:04 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/14 18:08:32 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*#include <stdio.h>

int main()
{
	char c = '8';
	char toupper = ft_tolower(c);

	printf("Original: %c\n", c);
	printf("New: %c\n", toupper);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:11:47 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/14 18:22:27 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main()
{
	int i = 128;

	if (ft_isascii(i))
		printf("Is ASCII\n");
	else
		printf("Is NOT ASCII\n");
	return (0);
}*/

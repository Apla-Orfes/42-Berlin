/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:45:01 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/14 17:54:26 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}
/*#include <stdio.h>

int main()
{
	char* str = "agfsklfdj qwei32324    1";
	printf("%d\n", ft_strlen(str));
	return (0);
}*/

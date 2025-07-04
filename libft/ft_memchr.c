/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:34:36 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/17 19:47:22 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	const unsigned char	*ptr;
	unsigned char		uc;

	ptr = (const unsigned char *)src;
	uc = (unsigned char)c;
	while (len--)
	{
		if (*ptr == uc)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	data[] = "42 Network";
	char	*result_std;
	char	*result_ft;

	result_std = memchr(data, 'N', 10);
	result_ft = ft_memchr(data, 'N', 10);
	if (result_std == result_ft)
		printf("Test passed: ft_memchr matches memchr.\n");
	else
	{
		printf("Test failed: ft_memchr does not match memchr.\n");
		printf("Expected: %s\n", result_std ? result_std : "(null)");
		printf("Got:      %s\n", result_ft ? result_ft : "(null)");
	}
	return (0);
}*/

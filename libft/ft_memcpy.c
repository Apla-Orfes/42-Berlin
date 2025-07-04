/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:11:31 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/17 19:28:00 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*s;

	if (!dst && !src && len > 0)
		return (NULL);
	if (len == 0)
		return (dst);
	p = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (len--)
		*p++ = *s++;
	return (dst);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "42 School";
	char	dest1[20];
	char	dest2[20];
	int		result;
	int		i;

	memcpy(dest1, src, sizeof(src));
	ft_memcpy(dest2, src, sizeof(src));
	result = memcmp(dest1, dest2, sizeof(src));
	if (result == 0)
		printf("Test passed: ft_memcpy works correctly.\n");
	else
	{
		printf("Test failed: ft_memcpy does not match standard memcpy.\n");
		printf("Expected: ");
		i = -1;
		while (++i < (int)sizeof(src))
			printf("%c", dest1[i]);
		printf("\nGot:      ");
		i = -1;
		while (++i < (int)sizeof(src))
			printf("%c", dest2[i]);
		printf("\n");
	}
	return (0);
}*/

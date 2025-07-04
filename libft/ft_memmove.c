/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:57:56 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/22 18:13:21 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src && n > 0)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>  
#include <stdlib.h>

int main() {
    // Test 1: Non-overlapping regions
    char src1[] = "Hello, World!";
    char dest1[20];

    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("Test 1 - Non-overlapping:\n");
    printf("Expected: %s\n", src1);
    printf("Result:   %s\n\n", dest1);

    // Test 2: Overlapping (dest < src)
    char buffer2[20] = "1234567890";
    ft_memmove(buffer2 + 2, buffer2, 8);
    printf("Test 2 - Overlapping (dest < src):\n");
    printf("Expected: 1212345678\n");
    printf("Result:   %s\n\n", buffer2);

    // Test 3: Overlapping (src < dest)
    char buffer3[20] = "abcdefghij";
    ft_memmove(buffer3, buffer3 + 2, 8);
    printf("Test 3 - Overlapping (src < dest):\n");
    printf("Expected: cdefghijij\n");
    printf("Result:   %s\n\n", buffer3);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:54:35 by ocharisi          #+#    #+#             */
/*   Updated: 2025/06/03 18:50:26 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

void test_case(const void *s1, const void *s2, size_t n, const char *desc) {
    int std_result = memcmp(s1, s2, n);
    int ft_result = ft_memcmp(s1, s2, n);

    printf("Test: %s\n", desc);
    printf("memcmp:     %d\n", std_result);
    printf("ft_memcmp:  %d\n", ft_result);

    if ((std_result == 0 && ft_result == 0) ||
        (std_result < 0 && ft_result < 0) ||
        (std_result > 0 && ft_result > 0)) {
        printf("✅ PASS\n\n");
    } else {
        printf("❌ FAIL\n\n");
    }
}

int main() {
    char a1[] = {1, 2, 3, 4, 5};
    char a2[] = {1, 2, 3, 4, 5};
    char b1[] = {1, 2, 3, 9, 5};
    char b2[] = {1, 2, 3, 4, 5};
    char c1[] = {0, 0, 0};
    char c2[] = {0, 0, 1};

    // Identical arrays
    test_case(a1, a2, 5, "Identical arrays");

    // Difference in the last byte
    test_case(b1, b2, 5, "Difference at index 3");

    // Partial comparison (only some bytes)
    test_case(b1, b2, 3, "Partial comparison (first 3 bytes)");

    // Null bytes in data
    test_case(c1, c2, 3, "Null bytes with difference");

    // Zero length comparison
    test_case(a1, b1, 0, "Zero-length comparison");

    // Completely different memory
    char d1[] = {100, 200, 150};
    char d2[] = {50, 250, 150};
    test_case(d1, d2, 3, "Completely different values");

    return 0;
}*/

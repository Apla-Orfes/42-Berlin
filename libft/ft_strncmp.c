/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:37:27 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/24 18:52:49 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i] || s1[i] == '\0' 
			|| s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

void test_case(const char *s1, const char *s2, size_t n) {
    int std_result = strncmp(s1, s2, n);
    int ft_result = ft_strncmp(s1, s2, n);

    printf("s1: \"%s\", s2: \"%s\", n: %zu\n", s1, s2, n);
    printf("strncmp:  %d\n", std_result);
    printf("ft_strncmp: %d\n", ft_result);

    if ((std_result == 0 && ft_result == 0) ||
        (std_result < 0 && ft_result < 0) ||
        (std_result > 0 && ft_result > 0)) {
        printf("✅ PASS\n\n");
    } else {
        printf("❌ FAIL\n\n");
    }
}

int main() {
    // Basic identical strings
    test_case("hello", "hello", 5);

    // Identical prefix, different later
    test_case("hello", "heLlo", 2);   // Should pass: only compares 'h' and 'e'
    test_case("hello", "heLlo", 3);   // Should fail: 'l' vs 'L'

    // Completely different strings
    test_case("abc", "xyz", 3);

    // One string shorter
    test_case("abc", "abcdef", 6);

    // Testing zero-length comparison
    test_case("abc", "xyz", 0);

    // Empty strings
    test_case("", "", 5);
    test_case("abc", "", 3);
    test_case("", "abc", 3);

    return 0;
}*/

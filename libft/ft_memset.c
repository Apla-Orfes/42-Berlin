/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:13:38 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/17 18:53:19 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
		*p++ = c;
	return (b);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char buffer1[20];
    char buffer2[20];

    // Fill both buffers with the same initial values
    memset(buffer1, 'A', sizeof(buffer1));
    memset(buffer2, 'A', sizeof(buffer2));

    // Use standard memset on buffer1
    memset(buffer1 + 5, 'X', 10);

    // Use your own memset on buffer2
    ft_memset(buffer2 + 5, 'X', 10);

    // Compare the results
    if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0) {
        printf("Test passed: my_memset works correctly.\n");
    } else {
        printf("Test failed: my_memset does not match standard memset.\n");

        printf("Expected: ");
        for (int i = 0; i < sizeof(buffer1); ++i) {
            printf("%c", buffer1[i]);
        }
        printf("\nGot:      ");
        for (int i = 0; i < sizeof(buffer2); ++i) {
            printf("%c", buffer2[i]);
        }
        printf("\n");
    }

    return 0;
}*/

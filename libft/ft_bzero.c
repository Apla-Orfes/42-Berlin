/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:31:27 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/24 18:36:30 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n--)
		*a++ = 0;
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    memset(buffer, 'X', sizeof(buffer));

    printf("Before ft_bzero:\n");
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");
    ft_bzero(buffer, 5);

    printf("After ft_bzero (first 5 bytes zeroed):\n");
    for (int i = 0; i < sizeof(buffer); i++) {
        if (buffer[i] == 0)
            printf("0 ");
        else
            printf("%c ", buffer[i]);
    }
    printf("\n");

    return 0;
}*/

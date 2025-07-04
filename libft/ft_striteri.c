/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:59:50 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/25 15:07:51 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*#include <stdio.h>
#include <stdlib.h>

void to_uppercase(unsigned int index, char *c)
{
    (void)index; // unused parameter
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char test1[] = "Hello, World!";
    char test2[] = "";
    char *test3 = NULL;


    ft_striteri(test1, to_uppercase);
    printf("Test 1 - Uppercase: %s\n", test1);


    ft_striteri(test2, to_uppercase);
    printf("Test 2 - Empty string: '%s'\n", test2);


    ft_striteri(test3, to_uppercase);
    printf("Test 3 - NULL input handled safely.\n");


    ft_striteri(test1, NULL);
    printf("Test 4 - NULL function pointer handled safely: %s\n", test1);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:42:22 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/25 14:59:14 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len_s;
	int		i;
	char	*new_str;

	i = 0;
	if (!s)
		return (NULL);
	else if (f == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	new_str = (char *)malloc(len_s + 1);
	if (!new_str)
		return (NULL);
	while (i < len_s)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char uppercase(unsigned int index, char c)
{
    (void)index; // unused
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int main(void)
{
    char *result;

    // Test 1: Normal string
    result = ft_strmapi("Hello, World!", uppercase);
    if (result)
    {
        printf("Test 1 - Uppercase: %s\n", result);
        free(result);
    }
    else
        printf("Test 1 failed: Allocation error or NULL input.\n");

    // Test 2: Empty string
    result = ft_strmapi("", uppercase);
    if (result)
    {
        printf("Test 2 - Empty string: '%s'\n", result);
        free(result);
    }
    else
        printf("Test 2 failed: Allocation error or NULL input.\n");

    // Test 3: NULL string input
    result = ft_strmapi(NULL, uppercase);
    if (result)
    {
        printf("Test 3 failed: Should return NULL for NULL input.\n");
        free(result);
    }
    else
        printf("Test 3 - Correctly handled NULL input.\n");

    // Test 4: NULL function pointer
    result = ft_strmapi("test", NULL);
    if (result)
    {
        printf("Test 4 failed: Should return NULL for NULL function pointer.\n");
        free(result);
    }
    else
        printf("Test 4 - Correctly handled NULL function pointer.\n");

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:27:20 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/25 16:06:39 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	check_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	while (check_trim(s1[i], set))
		i++;
	while (check_trim(s1[len - 1], set))
		len--;
	return (ft_substr(s1, i, (len - i)));
}
/*#include <stdio.h>
#include <stdlib.h>

// Prototype for ft_strtrim
char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
    char *result;

    // Test 1: Normal case, trim spaces from both ends
    result = ft_strtrim("  Hello, World!  ", " ");
    if (result)
    {
        printf("Test 1 - Trim spaces: '%s'\n", result);
        free(result);
    }
    else
        printf("Test 1 failed: Allocation error or NULL input.\n");

    // Test 2: Trim multiple characters from set
    result = ft_strtrim("xxxyHelloxyx", "xy");
    if (result)
    {
        printf("Test 2 - Trim 'x' and 'y': '%s'\n", result);
        free(result);
    }
    else
        printf("Test 2 failed: Allocation error or NULL input.\n");

    // Test 3: s1 is NULL
    result = ft_strtrim(NULL, " ");
    if (result)
    {
        printf("Test 3 failed: Should return NULL for NULL input.\n");
        free(result);
    }
    else
        printf("Test 3 - Correctly handled NULL s1 input.\n");

    // Test 4: set is NULL (should return a copy of s1)
    result = ft_strtrim("No trimming here", NULL);
    if (result)
    {
        printf("Test 4 - set NULL (copy s1): '%s'\n", result);
        free(result);
    }
    else
        printf("Test 4 failed: Allocation error.\n");

    // Test 5: s1 is empty string
    result = ft_strtrim("", " ");
    if (result)
    {
        printf("Test 5 - Empty s1 string: '%s'\n", result);
        //free(result);
    }
    else
        printf("Test 5 failed: Allocation error or NULL input.\n");

    // Test 6: All characters in s1 belong to set (result should be empty string)
    result = ft_strtrim("xxxxx", "x");
    if (result)
    {
        printf("Test 6 - All chars trimmed: '%s'\n", result);
        free(result);
    }
    else
        printf("Test 6 failed: Allocation error or NULL input.\n");

    // Test 7: set contains chars not in s1 (no trimming)
    result = ft_strtrim("Hello", "xyz");
    if (result)
    {
        printf("Test 7 - set chars not in s1 (no trim): '%s'\n", result);
        free(result);
    }
    else
        printf("Test 7 failed: Allocation error or NULL input.\n");

    return 0;
}*/

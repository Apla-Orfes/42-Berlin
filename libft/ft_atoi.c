/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:25:13 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/24 20:34:26 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*#include <stdio.h>
#include <stdlib.h>

void test_atoi(const char *str)
{
    int std_res = atoi(str);
    int ft_res = ft_atoi(str);

    printf("Input: \"%s\"\n", str);
    printf("atoi:    %d\n", std_res);
    printf("ft_atoi: %d\n", ft_res);
    if (std_res == ft_res)
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");
}

int main(void)
{
    test_atoi("42");
    test_atoi("    42");
    test_atoi("   -42");
    test_atoi("+123");
    test_atoi("0");
    test_atoi("-0");
    test_atoi("  0000123abc");
    test_atoi("abc123");
    test_atoi("");
    test_atoi("2147483647");    // INT_MAX
    test_atoi("-2147483648");   // INT_MIN
    test_atoi("999999999999999"); // Overflow test (behavior undefined)
    return 0;
}*/

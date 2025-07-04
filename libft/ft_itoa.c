/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 13:29:00 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/25 14:39:18 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_fill_str(char *str, long int n, int sign, int len)
{
	str[len] = '\0';
	len--;
	if (sign == -1)
	{
		str[0] = '-';
		while (len >= 1)
		{
			str[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	else
	{
		while (len >= 0)
		{
			str[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	return (str);
}

static int	init(long int *nmb, int *sign)
{
	int	counter;

	if (*nmb < 0)
	{
		*nmb = *nmb * -1;
		counter = 1;
		*sign = -1;
	}
	else
	{
		*sign = 1;
		counter = 0;
	}
	while (*nmb > 0)
	{
		*nmb = *nmb / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nmb;
	int			counter;
	int			sign;
	long int	value;

	nmb = n;
	value = nmb;
	if (nmb == 0)
	{
		str = (char *)malloc(2);
		ft_fill_str(str, 0, 1, 1);
		return (str);
	}
	counter = init(&nmb, &sign);
	str = (char *)malloc(counter + 1);
	if (!str)
		return (NULL);
	ft_fill_str(str, (value * sign), sign, counter);
	return (str);
}
/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int test_values[] = {0, 123, -456, 2147483647, -2147483648};
    size_t i;
    char *result;

    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
    {
        result = ft_itoa(test_values[i]);
        if (result == NULL)
        {
            printf("ft_itoa failed to allocate memory for %d\n", test_values[i]);
            continue;
        }
        printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
        free(result);
    }

    return 0;
}*/

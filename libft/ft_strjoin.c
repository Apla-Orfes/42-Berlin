/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:54:05 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/15 18:13:04 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		y;

	i = 0;
	y = 0;
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	while (y <= ft_strlen(s2))
	{
		new_str[i + y] = s2[y];
		y++;
	}
	return (new_str);
}
/*int main(void) {

    const char *str1 = "Hello, ";
    const char *str2 = "Orfea";
    char *result = ft_strjoin(str1, str2);

    if (result) {
        printf("Result: %s\n", result);
        free(result);
    } else {
        printf("ft_strjoin returned NULL\n");
    }

    return 0;
}*/

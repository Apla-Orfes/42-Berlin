/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:00:24 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/14 19:10:52 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == (char )c)
			return ((char *)str + 1);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
int main() {
    char *text = "KALISPERA TO ONOMA MpOU EINAI ORFEAS";
    char target = 'p';

    char *result = ft_strchr(text, target);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", target, result - text);
        printf("Substring from match: %s\n", result);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}

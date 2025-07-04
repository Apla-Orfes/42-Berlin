/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:27:55 by ocharisi          #+#    #+#             */
/*   Updated: 2025/06/03 18:50:02 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main() {
    
    char *str = "Hello, World!";

    char *substr1 = ft_substr(str, 7, 5);
    char *substr2 = ft_substr(str, 0, 5);
    char *substr3 = ft_substr(str, 15, 5); 

    if (substr1) {
        printf("Substring 1: %s\n", substr1);
        free(substr1);
    }

    if (substr2) {
        printf("Substring 2: %s\n", substr2);
        free(substr2);
    }

    if (substr3) {
        printf("Substring 3: %s\n", substr3);
        free(substr3);
    }

    return 0;
}*/

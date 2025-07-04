/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:12:16 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/14 19:21:45 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/*int main() 
{
    char *text = "OpenAI Open OpenAI";
    char target = 'O';

    char *result = ft_strrchr(text, target);

    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", target, result - text);
        printf("Substring from match: %s\n", result);  
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:54:18 by ocharisi          #+#    #+#             */
/*   Updated: 2025/06/03 17:54:35 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	delimiter(char c, char d)
{
	return (c == d);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0' && delimiter(s[i], c))
		i++;
	while (s[i] != '\0')
	{
		while (!delimiter(s[i], c) && s[i] != '\0')
			i++;
		counter++;
		while (delimiter(s[i], c) && s[i] != '\0')
			i++;
	}
	return (counter);
}

static char	*fill_word(char const *s, char c, int *p)
{
	char	*str;
	int		start;
	int		i;

	while (s[*p] != '\0' && delimiter(s[*p], c))
		(*p)++;
	start = *p;
	i = 0;
	while (!delimiter(s[*p], c) && s[*p] != '\0')
		(*p)++;
	str = malloc(*p - start + 1);
	if (!str)
		return (NULL);
	while ((start + i) < *p)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	free_split(char **split, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		counter;
	int		p;
	int		i;

	if (!s)
		return (NULL);
	counter = count_words(s, c);
	p = 0;
	i = 0;
	strs = malloc((counter + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (i < counter)
	{
		strs[i] = fill_word(s, c, &p);
		if (!strs[i])
		{
			free_split(strs, i);
			return (NULL);
		}
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
/*#include <stdio.h>
#include <stdlib.h>

void print_split_result(char **result) {
    int i = 0;
    if (!result) {
        printf("NULL returned\n");
        return;
    }
    while (result[i]) {
        printf("Segment %d: '%s'\n", i, result[i]);
        i++;
    }
    printf("End of split (NULL)\n\n");
}


int main(void) {
    char **result;


    printf("Test 1: 'hello world this is a test', delimiter = ' '\n");
    result = ft_split("hello world this is a test", ' ');
    print_split_result(result);


    printf("Test 2: 'hello   world', delimiter = ' '\n");
    result = ft_split("hello   world", ' ');
    print_split_result(result);


    printf("Test 3: '  hello world  ', delimiter = ' '\n");
    result = ft_split("  hello world  ", ' ');
    print_split_result(result);


    printf("Test 4: 'helloworld', delimiter = ' '\n");
    result = ft_split("helloworld", ' ');
    print_split_result(result);


    printf("Test 5: '', delimiter = ' '\n");
    result = ft_split("", ' ');
    print_split_result(result);


    printf("Test 6: '    ', delimiter = ' '\n");
    result = ft_split("    ", ' ');
    print_split_result(result);

    return 0;
}*/

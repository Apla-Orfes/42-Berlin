/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:05:04 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/15 17:12:01 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) 
{

    char input_char = argv[1][0];

    if (ft_isalnum(input_char)) {
        printf("'%c' is alphanumeric.\n", input_char);
    } else {
        printf("'%c' is not alphanumeric.\n", input_char);
    }

    return 0;
}*/

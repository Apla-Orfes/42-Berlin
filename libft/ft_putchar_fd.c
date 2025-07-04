/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:01:07 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/15 19:05:56 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    
    ft_putchar_fd('A', 1);

    
    ft_putchar_fd('!', 2);

    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return 1;

    ft_putchar_fd('F', fd);

    close(fd);
    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharisi <ocharisi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:11:22 by ocharisi          #+#    #+#             */
/*   Updated: 2025/05/15 19:15:14 by ocharisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*#include <fcntl.h>
#include <unistd.h>


int main(void)
{
    ft_putendl_fd("Hello, World!\n", 1);

    ft_putendl_fd("Error occurred!\n", 2);

    int fd = open("outputSTR.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        write(2, "Failed to open file\n", 20);
        return 1;
    }

    ft_putendl_fd("This is written into a file.\n", fd);

    close(fd);

    return 0;
}*/

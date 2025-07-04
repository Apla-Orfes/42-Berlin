/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfeas-charisis <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:23:51 by orfeas-charis     #+#    #+#             */
/*   Updated: 2025/06/18 09:18:14 by orfeas-charis    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(char *str, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*read_save(int fd, char *stash)
{
	ssize_t	bytes_read;
	char	*temp;

	temp = malloc(BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(stash, '\n'))
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(temp);
			return (NULL);
		}
		temp[bytes_read] = '\0';
		stash = ft_strjoin(stash, temp);
		if (!stash)
		{
			free(temp);
			return (NULL);
		}
	}
	free(temp);
	return (stash);
}

char	*get_a_line(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	while (stash[i] != '\0')
		i++;
	line = ft_substr(stash, 0, (i + 1));
	return (line);
}

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	stash = read_save(fd, stash);
	if (!stash)
		return (NULL);
	line = get_a_line(stash);
	stash = ft_strchr(stash, '\n');
	return (line);
}

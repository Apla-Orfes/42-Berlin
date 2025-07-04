/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfeas-charisis <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:35:20 by orfeas-charis     #+#    #+#             */
/*   Updated: 2025/06/18 09:18:38 by orfeas-charis    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);
int		ft_strlcpy(char *dest, const char *src, size_t size);

static int	ft_strlen_static(const char *str)
{
	int	len;

	len = 0;
	if (!str)
	  return (0);
	while (str[len])
	{
		len++;
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
	new_str = malloc(ft_strlen_static(s1) + ft_strlen_static(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < ft_strlen_static(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	while (y <= ft_strlen_static(s2))
	{
		new_str[i + y] = s2[y];
		y++;
	}
	return (new_str);
}

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

char	*ft_strdup(const char *s)
{
	char	*new;

	new = (char *)malloc(ft_strlen_static(s) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s, (ft_strlen_static(s) + 1));
	return (new);
}

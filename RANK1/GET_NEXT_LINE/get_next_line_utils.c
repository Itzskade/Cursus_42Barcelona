/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:31:09 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/31 18:39:20 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	if ((char)c == '\0')
		return (s);
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

char	*ft_strdup(char	*str)
{
	char	*dup;
	char	*ptr;

	if (!str)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	return (dup);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len;
	char	*buffer;
	char	*ptr;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	ptr = buffer;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (buffer);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	end;
	char	*sub;
	char	*ptr;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	if (end <= start)
		return (ft_strdup(""));
	if (len > end - start)
		len = end - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ptr = sub;
	s += start;
	while (*s && len--)
		*ptr++ = *s++;
	*ptr = '\0';
	return (sub);
}

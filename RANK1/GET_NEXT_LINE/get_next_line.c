/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:31:09 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/31 18:39:20 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *free_strjoin(char *stash, char *buffer) 
{
    char *new_stash;


    new_stash = ft_strjoin(stash, buffer); 
    free(stash); 
    return (new_stash); 
}

char	*save_rest(char	*stash)
{
	char	*rest;
	size_t	len;
	size_t	start;

	start = 0;
	if (!stash || !stash[start])
		return (NULL);
	while (stash[start] && stash[start] != '\n')
		start++;
	if (stash[start] == '\n')
		start++;
	len = ft_strlen(stash) - start;
	rest = ft_substr(stash, start, len);
	free(stash);
	stash = NULL;
	return (rest);
}

char	*extract_line(char *stash)
{
	char	*ptr;
	char	*line;
	size_t	len;

	if (!stash || !*stash)
		return (NULL);
	ptr = stash;
	while (*ptr && *ptr != '\n')
		ptr++;
	if (*ptr == '\n')
		ptr++;
	len = ptr - stash;
	line = ft_substr(stash, 0, len);
	return (line);
}

char	*read_until_line(int fd, char *stash)
{
	char	*buffer;
	ssize_t	bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(stash, '\n') && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(buffer), NULL);
		buffer[bytes] = '\0';
		stash = free_strjoin(stash, buffer);
		if (!stash)
			return (free(buffer), NULL);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		stash = ft_strdup("");
	stash = read_until_line(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = save_rest(stash);
	return (line);
}

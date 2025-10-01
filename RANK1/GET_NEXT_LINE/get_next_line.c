/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:31:09 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/28 16:19:48 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define ERROR_OPENING "Error in opening file"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	fd = open(buffer, O_RDONLY);
	if (fd < 0)
		write(2, ERROR_OPENING, sizeof(ERROR_OPENING));
	nbytes = read(fd, buffer, sizeof(BUFFER_SIZE));
	if (nbytes <= 0)
		return (NULL);
	while (nbytes > 0)
		nybtes = read(fd,buffer, (sizeof(BUFFER_SIZE));
	close(fd);
	return (buffer);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 03:00:04 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/22 19:03:32 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define NOFILE "File name missing.\n"
#define EXTRAARGS "Too many arguments.\n"
#define CANTOPEN "Cannot read file.\n"

int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	nbytes;
	char	buf[1024];

	if (argc < 2)
		return (write(2, NOFILE, sizeof(NOFILE) - 1));
	if (argc > 2)
		return (write(2, EXTRAARGS, sizeof(EXTRAARGS) - 1));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (write(2, CANTOPEN, sizeof(CANTOPEN) - 1));
	nbytes = read(fd, buf, sizeof(buf));
	while (nbytes > 0)
	{
		write(1, buf, nbytes);
		nbytes = read(fd, buf, sizeof(buf));
	}
	close(fd);
	return (0);
}

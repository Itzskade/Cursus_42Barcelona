/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:39:17 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/31 18:47:13 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

int     main(int ac, char **av)
{
	int     fd;
    char    *line;
    int     i;
	
	if (ac < 2)
        return (1);
    i = 1;
    while (i < ac)
    {
        fd = open(av[i], O_RDONLY);
        if (fd < 0)
        {
            i++;
            continue;
        }
        line = get_next_line(fd);
        while (line)
        {
            printf("%s", line);
            free(line);
            line = get_next_line(fd);
        }
        close(fd);
        i++;
    }
    return (0);
}

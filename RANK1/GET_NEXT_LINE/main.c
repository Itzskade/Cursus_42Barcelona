/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:39:17 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/31 18:47:35 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int     main(void)
{
        int     fd;
        char    *line;

        fd = open("test.txt", O_RDONLY);
        if (fd <= 0)
                return (1);
        line = get_next_line(fd);
        while (line)
        {
                printf("%s", line);
                free(line);
                line = get_next_line(fd);
        }
        close(fd);
        return (0);
}

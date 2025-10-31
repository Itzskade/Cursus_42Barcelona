/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:39:17 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/31 18:17:29 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int fd = open("test.txt", O_RDONLY);
	int fdb = open("test2.txt", O_RDONLY);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fdb));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fdb));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fdb));
	return 0; 
}

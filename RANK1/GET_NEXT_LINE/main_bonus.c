#include "get_next_line_bonus.h"
#include <stdio.h>

int main(void)
{
	int fd1, fd2, fd3;
	char *line;

	fd1 = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);

	line = get_next_line(fd2);
	printf("%s", line);
	free(line);

	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);

	line = get_next_line(fd2);
	printf("%s", line);
	free(line);

	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	line = get_next_line(fd1);
	printf("%s", line);
	free(line);

	line = get_next_line(fd2);
	printf("%s", line);
	free(line);

	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	close(fd1);
	close(fd2);
	close(fd3);
	
	return (0);
}

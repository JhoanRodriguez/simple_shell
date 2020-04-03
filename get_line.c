#include "shell.h"

void get_line()
{
	char *line = NULL;//line to read
	ssize_t n = 0;//var to malloc
	ssize_t nread;

	nread = getline(&line, &n, stdin);
	printf("Retrieved line of length %zu:\n", nread);
	printf("%s\n", line);
	return (line);
}

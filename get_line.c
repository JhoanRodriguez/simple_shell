#include "shell.h"

/**
 * get_line - get a string from the stdin
 */
char *get_line()
{
	char *line = NULL;
	size_t n = 0;
	ssize_t nread;

	nread = getline(&line, &n, stdin);
	printf("Caracteres leidos: %zu\n\n", nread); //debug
	return (line);
}

#include "shell.h"

/**
 * get_line - get a string from the stdin
 */
char *get_line()
{
	char *line = NULL;
	size_t n = 0;

	getline(&line, &n, stdin);
	return (line);
}

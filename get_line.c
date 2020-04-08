#include "shell.h"

/**
 * get_line - get a string from the stdin
 * Return: on success returne the number of characters read
 */
char *get_line()
{
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, stdin) == EOF)
		exit(0);

	return (line);
}

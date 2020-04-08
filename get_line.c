#include "shell.h"

/**
 * get_line - get a string from the stdin
 * Return: on success returne the number of characters read
 */
char *get_line()
{
	char *line = NULL;
	size_t n = 0;

	getline(&line, &n, stdin);
	return (line);
}

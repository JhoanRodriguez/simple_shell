#include "shell.h"
/**
 * main - one function to rule then all
 */
int main()
{
	char *line;
	char **args;

	printf("$ ");
	line = get_line();
	args = split_line(line);

	free(line);
	free(args);
	return (0);
}

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
	printf("Retrieved line of length %zu:\n", nread);
	printf("%s\n", line);
	return (line);
}

/**
 * split_line - split a line into diferent arguments
 */
char **split_line(char *line)
{
	int t_count = 0;
	char *token = strtok(line, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
		t_count++;
	}
	printf("Number of args: %d\n", t_count);
	return (token);
}

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

	return (0);
}

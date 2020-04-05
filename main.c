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

/**
 * split_line - split a line into diferent arguments
 */
char **split_line(char *line)
{
	int buffer_size = 32;
	int i;
	char **tokens;
	char *token;

	tokens = malloc(sizeof(char*) * buffer_size);
	if (tokens == NULL)
		exit(1);

	printf("argumentos recibidos:\n"); //debug
	token = strtok(line, " ");
	for(i = 0; token != NULL; i++)
	{
		tokens[i] = token;
		printf("%s\n", tokens[i]); //debug
		if (i >= buffer_size)
		{
			buffer_size += buffer_size;
			tokens = realloc(tokens, sizeof(char*) * buffer_size);
			if (tokens == NULL)
				exit(1);
		}
		token = strtok(NULL, " ");
	}
	tokens[i] = NULL;
	printf("Numero de argumentos: %d\n", i); //debug
	return (tokens);
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

	free(line);
	free(args);
	return (0);
}

#include "shell.h"
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

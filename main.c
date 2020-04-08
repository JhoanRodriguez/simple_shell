#include "shell.h"
/**
 * main - one function to rule then all
 * Return: 0 on success
 */
int main(void)
{
	char *line = NULL;
	char **args = NULL;
	int quit = 0;

	while (quit == 0)
	{
		printf("~$ ");
		line = get_line();
		args = split_line(line);
		if (strcmp(args[0], "exit") == 0)
			quit = 1;
		else
			_fork(args);

		free(line);
		free(args);
	}
	return (0);
}

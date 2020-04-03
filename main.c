#include "shell.h"

int main()
{
	char *line;
	char **args;
	int status;

	while (status)
	{
		printf("$ ");
		get_line();
	}
	return (0);
}

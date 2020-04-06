#include "shell.h"
/**
 * _which - Find the directory needed
 * @command: Command received
 *
 * Return: pointer string with found path or NULL in failure.
 */
char *_which(char *command)
{
	char **path;
	char *split;
	char *aux;
	char *tmp;
	int x = 0;

	if (!command)
		return (NULL);

	tmp = _strdup(command);
	command = _strdup("/");
	_strcat(command, tmp);
	split = _getenv("PATH");
	path = split_line(split);
	while (path[x] != NULL)
	{
		printf("Esto es path %s\n", path[x]);
		printf("Esto es command %s\n",command);
		split = _strcat(path[x], command);
		printf("Esto es split en el while %s\n", split);
		if (_stat(split) == 0)
			return (split);

		x++;
	}
	return (NULL);
}

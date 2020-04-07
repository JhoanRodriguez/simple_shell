#include "shell.h"
/**
 * _which - Find the directory needed
 * @command: Command received
 *
 * Return: pointer string with found path or NULL in failure.
 */
char *_which(char *command)
{
	char *aux, **path, *split;
	int size, x = 0;

	size = _strlen(command);

	if (!command)
		return (NULL);

	split = _getenv("PATH");
	path = split_line(split);

	while(path[x] != NULL)
	{
		aux = malloc(_strlen(path[x]) + size + 1);
		if (aux == NULL)
			return (0);

		aux = _strcpy(aux, path[x]);
		aux = _strcat(aux, "/");
		aux = _strcat(aux, command);
		if (_stat(aux) == 0)
		{
			return (aux);
		}
		free(aux);
		x++;
	}
	return (NULL);
}

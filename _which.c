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
	printf ("Esto es tmp: %s\n", tmp);
	command = _strdup("/");
	printf ("Esto es command: %s\n", command);
	_strcat(command, tmp);
	printf ("Esto es command despue de strcat: %s\n", command);
	split = _getenv("PATH");
	path = split_line(split);
	while (path[x] != NULL)
	{
		split = _strcat(path[x], command);
		if (_stat(split) == 0)
			return (split);

		x++;
	}
	return (NULL);
}

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
	path = _split_string(split);
	while (path[x] != NULL)
	{
		split = _strcat(path[x], command);
		if (_stat(split) == 0)
			return (split);

		x++;
	}
	return (NULL);
}

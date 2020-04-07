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
	char *tmp;
	int x;

	if (!command)
		return (NULL);

	tmp = _strdup(command);
	command = _strdup("/");
	_strcat(command, tmp);
	split = _getenv("PATH");
	path = split_line(split);	

	for (x = 0; path[x] != NULL; x++)
	{
		split = _strcat(path[x], command);
		if (_stat(split) == 0)
			return (split);
	}
	return (NULL);
}

#include "shell.h"
/**
 * _getenv - looks for the path
 * @name: variable to be look
 * Return: a pointer to a string
 */
char *_getenv(const char *name)
{
	char **env = NULL;
	char *aux = NULL, *token = NULL;
	int size, i;

	size = _strlen(name);

	env = environ;

	for (; *env; ++env)
	{
		aux = *env;
		token = strtok(aux, "=");
		if (token == NULL)
			return (NULL);

		if (_strlen(token) != size)
			continue;

		for (i = 0; i < size; i++)
		{
			if (name[i] != aux[i])
				break;
			else if (name[i] == aux[i] && i < size)
				return (strtok(NULL, "="));
		}
	}
	return (NULL);
}

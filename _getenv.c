#include "shell.h"
/**
 * _getenv - looks for the path
 * @name: variable to be look
 * Return: a pointer to a string
 */
 char *_getenv(const char *name)
 {
	 char **env;
	 char *aux, *token;
	 int size, size_aux;
	 int i;

	 size = _strlen(name);

	 env = environ;

	 for (; *env; ++env)
	 {
		 aux = *env;
		 size_aux = _strlen(aux);

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

#include "shell.h"
/**
 * _execve - execve implementation for Simple Shell.
 * @command: Command to execute.
 * @cmd: Command to execute.
 *
 * Return: Always 0.
 */
int _execve(char *command, char **cmd)
{

	if (execve(command, cmd, environ) == -1)
	{
		perror("Error in execve");
	}
	return (0);
}

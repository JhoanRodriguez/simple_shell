#include "shell.h"
/**
 * _execve - execve implementation for Simple Shell.
 * @command: Command to execute.
 * @cmd: Command to execute.
 *
 * Return: Always 0.
 */
int _execve(char *command, char **cmd, char **env)
{

	if (execve(command, cmd, env) == -1)
	{
		printf("%d\n", errno);
		perror("Error in execve");
	}
	return (0);
}

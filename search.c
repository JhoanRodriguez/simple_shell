#include "shell.h"
/**
 *
 *
 *
 *
 *
 */
int _stat(const char *path)
{
	struct stat st;

	if (stat(path, &st) == 0)
		return (0);

	return (-1);
}

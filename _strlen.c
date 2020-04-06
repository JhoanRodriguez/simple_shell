#include "shell.h"
/**
 * _strlen - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

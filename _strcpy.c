#include "shell.h"

/**
 * *_strcpy - copy the string
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int c = 0;

	while (src[c] != '\0')
	{
		c++;
	}
	for (x = 0; x < c; x++)
	{
		dest[x] = src[x];
	}
	dest[c] = '\0';
	return (dest);
}

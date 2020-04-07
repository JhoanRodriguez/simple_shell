#include "shell.h"
/**
* *_strcat - Print the last digit
* @dest: Number that is going to be splited
* @src: Number that is going to be splited
* Return: Return the last digit
 */
char *_strcat(char *dest, char *src)
{
	int size1 = _strlen(dest);
	int size2 = _strlen(src);
	int x;
	int y = 0;

	for (x = size1; x < (size1 + size2); x++)
	{
		dest[x] = src[y];
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

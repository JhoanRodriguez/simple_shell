#include "shell.h"

int main()
{
	int out, quit = 0;
	char *buffer;
	size_t bufsize = 32;

	buffer = malloc(sizeof(char)*bufsize);
	if (!buffer)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	while (quit == 0)
	{
		printf("$ ");
		out = getline(&buffer,&bufsize,stdin);
		printf("%s\n",buffer);
		if (strncmp(buffer,"exit",(out - 1)) == 0)
			quit = 1;
	}
	free(buffer);
	return(0);
}

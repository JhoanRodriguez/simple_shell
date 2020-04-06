#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strdup(char *duplicate);
char *get_line();
char **split_line(char *line);
int _stat(const char *path);
char *_getenv(const char *name);
char *_which(char *command);
#endif

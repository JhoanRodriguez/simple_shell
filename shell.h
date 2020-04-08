#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
extern char **environ;
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
char *_strdup(char *duplicate);
char *_strcpy(char *dest, char *src);
void _free (char **);
char *get_line();
char **split_line(char *line);
int _stat(const char *path);
char *_getenv(const char *name);
char *_which(char *command);
int _fork(char **args);
int _execve(char *command, char **cmd);
#endif

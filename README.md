# Simple Shell

UNIX command interpreter

## Description

A simple shell that return output accoding to the user input

## Installing

* Compiling the program: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

* Example:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
$ ./hsh
~$ ls
~$ hsh main.c shell.c
~$
~$ exit
$
```
## Files

|   **File**   |   **Description**   |
| -------------- | --------------------- |
| [main.c](./main.c) | the main function |
| [shell.h](./shell.h) | header file |
| [string.c](./string.c) | contains custom string functions |
| [get_line.c](./get_line.c) |function to get a line from stdin |
| [split_line.c](./split_line.c) | parse and split a line |
| [search.c](./search.c) | get information from a file |
| [_fork.c](./_fork.c) | create a process and execute a command |
| [_which.c](./_which.c) | find the PATH of the command |
| [_execve.c](./_execve.c) | an implementation of execve |
| [_getenv.c](./_getenv.c) | gets env from input |
| [_free.c](./_free.c) | free allocated memory |


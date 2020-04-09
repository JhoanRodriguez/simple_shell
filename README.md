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
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
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

## Authors

* [**Jhoan Rodriguez**](https://github.com/JhoanRodriguez)
* [**Kevin Arevalo**](https://github.com/Kev0417)

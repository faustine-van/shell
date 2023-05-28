#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include <errno.h>/*added*/
#include <limits.h>

extern char **environ;
void _puts(char *str);/*file _strings1.c*/
void prompt(void);/*file prompt.c*/
char *read_line(void);/*file readline.c*/
int _strlen(char *s);/*file _strings1.c*/
char *_strcat(char *dest, char *src);/*file _strings1.c*/
char **_strtotokens(char *str);/*file _strings1.c*/
int _execute(char **tokens, char *args);/*file _execute.c*/
void _printenv(void);/*file built-in.c*/
int _putchar(char c);/*file _strings2.c*/
int _strcmp(char *s1, char *s2);/*file _strings2.c*/
int _executeBuiltIn(char **tokens);/*file built-in.c*/
int _isBuiltIn(char *str);/*file built-in.c*/
int c_atoi(char *s);/*file _strings2.c*/
void _kill(char *lineptr, char *tmp, char **tok);
void _exitSimpleShell(char **tokens, char *line);/*file built-in.c 107*/
void ctrlc(int signum);/*file _strings3.c*/
int is_delim(char c, const char *delim);/*file _strings3.c*/
char *_strtok(char *src, const char *delim);/*file _strings3.c*/
char *_strcpy(char *dest, char *src);/*file _strings2.c*/
ssize_t get_line(char **str);/*file _strings3.c*/
int handle_path(char **tokens);
int if_file_exists(char *s);/*file handle_path.c*/
char *path_builder(char **tokens);/*file handle_path.c*/
int execute2(char **tokens, char *path, char *args);/*file handle_path.c*/
char *var_build(char *var_name, char *var_value);/*file _env.c 61*/
int _setenv(char *var_name, char *var_value);/*file _env.c*/
int _unsetenv(char *var_name);/*file _env.c*/
char *_strdup(char *str);/*file _strings3.c*/
char *_memset(char *f_str, char str, unsigned int n);/*file _strings2.c*/
int _cd(char *path);/*file _cd.c 16*/
int _cd1(char *directory);
char *_getenv(char *name);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strncpy(char *dest, char *src, int n);
#endif

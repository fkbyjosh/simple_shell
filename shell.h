#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>

void constant_prompt(void);
void _printf(const char *command);
void exe_command(const char *command);
void process_input(char *command, size_t size);
void rmv_newline(char *str);


#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	0, 0, 0}

/**
 *struct builtin - contains a builtin string and related function
 *@type: the builtin command flag
 *@func: the function
 */
typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;

/* sig_builtins1.c */
int _myexit(info_t *);
int _mycd(info_t *);
int _myhelp(info_t *);


/* han_builtin.c */
int _myhistory(info_t *);
int _myalias(info_t *);

/* envi.c */
char *_getenv(info_t *, const char *);
int _myenv(info_t *);
int _mysetenv(info_t *);
int _myunsetenv(info_t *);
int populate_env_list(info_t *);

#endif /* SHELL_H */

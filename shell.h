#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void constant_prompt(void);
void _printf(const char *command);
void exe_command(const char *command);
void process_input(char *command, size_t size);

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

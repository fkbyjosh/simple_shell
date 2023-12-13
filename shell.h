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
void rmv_newline(char *str);

/* sig_builtins1.c */
int _myexit(info_t *);
int _mycd(info_t *);
int _myhelp(info_t *);


/* han_builtin.c */
int _myhistory(info_t *);
int _myalias(info_t *);

#endif /* SHELL_H */

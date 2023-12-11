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
#endif /* SHELL_H */

#include "shell.h"

/**
 * _printf - prints characters
 * @command: text printed to the standard ouptut
 */

void _printf(const char *command)
{
	write(STDOUT_FILENO, command, strlen(command));
}

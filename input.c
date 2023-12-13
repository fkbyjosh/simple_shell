#include "shell.h"

/**
 * process_input - processes command input from user
 * @command: command input from user
 * @size: size of the command input
 */

void process_input(char *command, size_t size)
{
	ssize_t chars_read;

	chars_read = getline(&command, &size, stdin);

	if (chars_read == -1)
	{
		free(command);

		command = NULL;

		_printf('\0');
		exit(EXIT_FAILURE);
	}
	rmv_newline(command);
	_printf(command);
}

/**
 * rmv_newline - removes newline character
 * @str: pointer to string
 */

void rmv_newline(char *str)
{
	while (*str != '\0')
	{
		if (*str == '\n')
		{
			*str = '\0';
			return;
		}
		str++;
	}
}

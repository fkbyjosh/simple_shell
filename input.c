#include "shell.h"

/**
 * process_input - processes command input from user
 * @outputxt: command input from user
 * @size: size of the command input
 */

void process_input(char *command, size_t size)
{
	ssize_t chars_read;

	chars_read = getline(&command, &size, stdin);

	if (chars_read == -1)
	{
		if (feof(stdin))
		{
			_printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			_printf("Error while reading input\n");
			exit(EXIT_FAILURE);
		}
		command[strcspn(command, "\n")] = '\0';
	}
}

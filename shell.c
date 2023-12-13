#include "shell.h"

/**
 * main - entry point of program
 *
 * Return: 0 (success)
 */

int main(void)
{
	char command[150];

	while (1)
	{
		constant_prompt();
		process_input(command, sizeof(command));
		exe_command(command);
	}
	return (0);
}

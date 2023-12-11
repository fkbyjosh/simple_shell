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
		exe_command(command);
		process_input(command, sizeof(command));
	}
	return (0);
}

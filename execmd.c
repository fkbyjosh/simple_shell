#include "shell.h"

/**
 * exe_command - executes the command inputted
 * @outputxt: command from user
 */

void exe_command(const char *command)
{
	pid_t child_pid = fork();
	char **args = malloc(sizeof(char *) * 2);
	char *envp[] = {NULL};

	int status;

	if (args == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	args[0] = (char *)command;
	args[1] = NULL;

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		if (execve(command, args, envp) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(child_pid, &status, 0);
	}
	free(args);
}

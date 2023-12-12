#include "main.h"

/**
 * run - application execution point
 * Return: EXIT_SUCCESS
 */
int run(void)
{
	char **args = NULL;
	char *cmd;

	while (TRUE)
	{
		prompt();

		cmd = cmd_get();

		if (!cmd)
			exit(EXIT_FAILURE);

		cmd_split(cmd, args);
		cmd_exec(args);

		free(args);
	}

	return (EXIT_SUCCESS);
}

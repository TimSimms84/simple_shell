#include "shell.h"
/**
 * main - super simple shell
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(void)
{
	char *line;
	int status = 1;
	do {
		line = get_line();
		if (!line)
		{
			free(line);
			break;
		}
		prompt(line);
		free(line);
	} while (status);
	return (0);
}

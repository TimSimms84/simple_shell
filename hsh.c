#include "shell.h"
/**
 * main - super simple shell
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{

	if (!argc)
		return (0);
	prompt(*argv);

	return (0);
}

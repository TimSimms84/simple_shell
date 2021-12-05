#include "shell.h"
/**
 * _getenv - searches environment list for variable name
 * @name: name of the variable
 *
 * Return: returns a pointer to the corresponding value;
 */
char *_getenv(char *name)
{
	unsigned int y;
	char *match, *copy;
	path_t *temp;

	match = NULL;
	temp = env;
	for (y = 0; temp != NULL; y++)
	{
		copy = _strdup(temp->dir);
		if (_strcmp(name, copy) == 0)
		{
			match = temp->dir;
			break;
		}
		temp = temp->next;
	}
	return (match);

	copy = malloc(sizeof(char *) * (_strlen(match)));
	if (!copy)
		exit(-1);
	_strcpy(copy, match);


	return (copy);
}

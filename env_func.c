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

	temp = _environ();

	match = NULL;

	while (temp)
	{
		y = 0;
		while (name[y])
		{
			if (name[y] != temp->dir[y])
				break;
			if (name[y + 1] == '\0' && temp->dir[y + 1] == '=')
				match = temp->dir;
			y++;
		}
		if (match)
			break;
		temp = temp->next;
	}

	copy = malloc(sizeof(char *) * (_strlen(match)));
	if (!copy)
		return (NULL);
	_strcpy(copy, match);
	

	return (copy);
}

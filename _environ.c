#include "shell.h"
/**
 * _environ - builds an environment linked list
 *
 * Return: returns a pointer to the head of the linked list
 */
path_t *_environ(void)
{
	path_t *head;
	path_t *temp;
	int x = 0;

	head = malloc(sizeof(path_t));
	if (!head)
		return (NULL);
	temp = head;
	while (environ[x])
	{
		temp->dir = _strdup(environ[x]);
		if (environ[x + 1] != NULL)
		{
			temp->next = malloc(sizeof(path_t));
			temp = temp->next;
		}
		x++;
	}
	temp->next = NULL;
	return (head);
}

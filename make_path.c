#include "shell.h"

/**
 * make_path - make path
 *
 * Return: returns the head of the path;
 */

path_t *make_path(void)
{

	path_t *head = NULL;
	path_t *new = NULL;
	char *path = NULL;
	char *token = NULL;
	char *delim = ":";

	path = _getenv("PATH");
	if (path == NULL)
		return (NULL);
	token = strtok(path, delim);
	while (token != NULL)
	{
		new = malloc(sizeof(path_t));
		if (new == NULL)
			return (NULL);
		new->dir = _strdup(token);
		new->next = NULL;
		if (head == NULL)
			head = new;
		else
			head->next = new;
		token = strtok(NULL, delim);
	}
	return (head);
}

/**
 * free_path - frees a linked list
 * @head: linked list
 *
 */

void free_path(path_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_path(head->next);
	free(head->dir);
	free(head);
}

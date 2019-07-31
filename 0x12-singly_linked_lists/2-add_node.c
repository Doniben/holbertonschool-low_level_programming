#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: ini
 * @str
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new)
	{
		new->str = strdup(str);
		if (!(new->str))
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
		new->next = (*head);
		*head = new;
	}
	else
		return (NULL);
	return (new);
}

/**
 * _strlen - string counter
 * @s: string
 * Return: to the counter
 */

int _strlen(char *s)
{
	int counter = 0;

	while(*(s + counter))
		counter++;
	return (counter);
}

#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 *
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *kopio = head;
	unsigned int x;

	if (!kopio)
		return (NULL);

	x = 0;
	while (index)
	{
		kopio = kopio->next;
		x++;
	}
	if (x < index)
		return (NULL);
	return (kopio);
}

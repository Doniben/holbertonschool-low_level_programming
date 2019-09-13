#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked.
 * @h: linked list
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

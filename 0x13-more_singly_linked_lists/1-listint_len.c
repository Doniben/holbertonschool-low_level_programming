#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * in a linked listint_t list.
 * @h: linked list elements
 * Return: elements by the counter
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

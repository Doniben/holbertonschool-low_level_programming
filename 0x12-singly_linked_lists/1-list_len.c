#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: Structure
 * Return to the counter
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	while(h)
	{
		h = h->next;
		x++;
	}
	return (x);
}

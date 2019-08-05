#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: structure
 * Return: elements of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

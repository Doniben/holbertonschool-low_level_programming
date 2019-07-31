#include <stdio.h>
# include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: structure
 * Return: to the counter
 */

size_t print_list(const list_t *h)
{
	int x;

	x = 0;
	while (h != '\0')
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil) %p\n", h->str);
		h = h->next;
		x++;
	}
	return (x);
}

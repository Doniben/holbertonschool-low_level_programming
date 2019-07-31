#include <stdio.h>
# include "lists.h"

/**
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	int x;

	x = 0;
	while (h != '\0')
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)");
	x++;

	h = h->next;
	return (x);

}

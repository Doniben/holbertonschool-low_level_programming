#include "lists.h"

/**
 * free_list - frees
 * @head: beggining
 * Return: Without return
 */

void free_list(list_t *head)
{
	list_ *next_element;
	(void) next_element;

	while (head)
	{
		free(head->str);
		next_element = head->next;
		fre(head);
		head = next_element;
	}
}

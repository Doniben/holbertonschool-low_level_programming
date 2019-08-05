#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: head of the list
 * Return: withouth return.
 */

void free_listint(listint_t *head)
{
	listint_t *forigi;

	if (!head)
		return;

	while (head)
	{
		forigi = head->next;
		free(head);
		head = forigi;
	}
	free(forigi);
}

#include "lists.h"

/**
 * free_listint2 - rees a listint_t list.
 * @head: header
 * Return: without return.
 */

void free_listint2(listint_t **head)
{
	listint_t *forigi;

	if (!head)
		return;

	while (head)
	{
		forigi = head->next;
		free(head);
		*head = forigi;
	}
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head of the list
 * Return:  the errased element.
 */

int pop_listint(listint_t **head)
{
	listint_t *provizora = *head;
	int n;

	if (!head)
		return (0);
	provizora = (*head)->next;
	n = ((*head)->n);
	free(*head);
	*head = provizora;
	return (n);
}

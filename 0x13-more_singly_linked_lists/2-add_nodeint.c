#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of the list
 * @n: new node
 * Return: 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nova;
	listint_t *kopi = *head;

	nova = malloc(sizeof(*head));

	if (nova != NULL)
	{
		nova->n = n;
		nova->next = NULL;
	}
	if (!*head)
	{
		*head = nova;
		return (*head);
	}
	else
	{
		nova->next = kopi;
		*head = nova;
	}
	return (*head);
}

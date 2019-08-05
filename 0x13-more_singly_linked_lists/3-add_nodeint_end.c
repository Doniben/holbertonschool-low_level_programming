#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of the list
 * @n: new node
 * Return: to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nova;
	listint_t *kopi = *head;

	nova = malloc(sizeof(head));

	if (!nova)
		return (NULL);

	nova-> n = n;
	nova->next = NULL;

	if (!*head)
	{
		*head = nova;
		return (*head);
	}
	while (kopi->next)
	{
		kopi = kopi->next;
		kopi->next = nova;
	}
	return (nova);
}

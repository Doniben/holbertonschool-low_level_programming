#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: double pointer to head
 * @n: value to store in new node
 * Return: Address of new element, or null if failled
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Aux, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	Aux = *head;
	while (Aux && Aux->next)
		Aux = Aux->next;

	if (Aux)
	{
		new->prev = Aux;
		Aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}

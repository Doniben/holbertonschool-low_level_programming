#include "lists.h"

/**
 * *get_dnodeint_at_index - function that returns the nth node of alinked list.
 * @head: list
 * @index: New element.
 * Return: The nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *copy;
	unsigned int counter = 0;

	if (!head)
		return (0);
	copy = head;
	while (counter < index)
	{
		if (!copy->next)
			return (NULL);
		copy = copy->next;
		counter++;
	}
	return (copy);
}

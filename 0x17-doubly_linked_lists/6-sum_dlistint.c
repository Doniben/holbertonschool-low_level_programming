#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data of a l-list.
 * @head: list
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *Aux;
	int add = 0;

	if (!head)
		return (0);
	Aux = head;
	while (Aux->next)
	{
		add += Aux->n;
		copy = Aux->next;
	}
	add += Aux->n;
	return (add);
}

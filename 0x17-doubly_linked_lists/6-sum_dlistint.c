#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data of a l-list.
 * @head: list
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *Aux;
	int sum = 0;

	if (!head)
		return (0);
	Aux = head;
	while (Aux->next)
	{
		add += Aux->n;
		Aux = Aux->next;
	}
	add += Aux->n;
	return (add);
}

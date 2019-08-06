#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the 
 * data (n) of a listint_t linked list.
 * @head: head of the list
 * Return: to the sum.
 */

int sum_listint(listint_t *head)
{
	int aldoni;
	listint_t *kopi = head;

	if (!kopi)
		return (0);
	while (kopi)
		aldoni += kopi->n;
	kopi = kopi->next;
	return (aldoni);
}

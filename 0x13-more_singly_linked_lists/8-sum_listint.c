#include "lists.h"

/**
 * 
 *
 *
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

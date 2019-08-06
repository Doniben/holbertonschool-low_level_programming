#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: addres of the addres of the head
 * @idx: index
 * @n: elemento to add the node
 * Return: to the new added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *kopi;
	listint_t *nova = malloc(sizeof(*head));
	listint_t *nuna;
	unsigned int kalkulilo = 0;

	if (!head)
		return (0);
	if (!nova)
		return (NULL);

	nova->n = n;

	if (!*head)
	{
		nova->next = NULL;
		*head = nova;
		return (NULL);
	}

	kopi = *head;

	if (idx == 0)
		return (NULL);

	while (kalkulilo < (idx - 1))
	{
		kopi = kopi->next;
		kalkulilo++;
		if (kalkulilo < (idx - 1 && !kopi))
			return (NULL);
	}
	if (kopi->next == NULL)
		return (add_nodeint_end(&kopi, n));

	nuna = kopi;
	nova->next = nuna->next;
	nova->n = n;
	nuna->next = nova;
	return (nova);
}

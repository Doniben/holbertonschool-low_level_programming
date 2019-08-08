#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
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
		return (nova);
	}

	kopi = *head;

	if (idx == 0)
		return (add_nodeint(head, n));

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
/**
 * *add_nodeint - Print the list of a single list
 * @n: The variable of int type that receives
 * @head: The pointer of the list
 *
 * Return: The number of elements in the list
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nova = malloc(sizeof(head));
	listint_t *kopi = *head;

	if (!nova)
		return (NULL);
	nova->n = n;
	nova->next = NULL;
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

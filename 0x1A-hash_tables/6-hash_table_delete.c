#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 *
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *copy;
	hash_node_t *prov;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			copy = ht->array[i];
			if (copy != NULL)
			{
				while (copy)
				{
					prov = copy->next;
					free(copy->key);
					free(copy->value);
					free(copy);
					copy = prov;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}

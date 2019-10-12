#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table you want to add or update the key
 *
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *copy;
	int counter = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array != NULL)
			{
				copy = ht->array[index];
				while (copy)
				{
					if (counter)
						printf(", ");
					printf("'%s': '%s'", copy->key, copy->value);
					counter++;
					copy = copy->next;
				}
			}
		}
		printf("}\n");
	}

}

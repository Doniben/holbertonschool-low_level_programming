#include "hash_tables.h"

/**
 * *hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table to add
 * @key: key
 * Return:  value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht)
	{
		unsigned long int index;
		hash_node_t *copy = NULL;

		index = key_index((unsigned char *)key, ht->size);
		copy = ht->array[index];
		while (copy)
		{
			if (strcmp(copy->key, key) == 0)
				return (copy->value);
			copy = copy->next;
		}
	}
	return (NULL);
}

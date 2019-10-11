#include "hash_tables.h"

/**
* hash_table_create - creates a new hash table.
* @size: size of the array
* Return: NULL if something is wrong.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_n;

	if (size != 0)
	{
		hash_n = malloc(sizeof(hash_table_t));
		if (!hash_n)
			return (NULL);
		hash_n->size = size;
		hash_n->array = malloc(sizeof(hash_node_t *));
		if (!hash_n->array)
			return (NULL);
		return (hash_n);
	}
	return (NULL);
}

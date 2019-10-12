#include "has_tables.h"

/**
 * has_table_set - adds an element to the hash table
 * @ht: hashtable to add
 * @key: key
 * @value: size of the array
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nd_copy = NULL, *new_node = NULL;

	if (ht && key ! = 0)
	{
		index = key_index((unsigned char *)key, ht->size);
		if (ht->array[indez] != NULL)
		{
			no_copy = ht->array[index;]
				while (nd_copy)
				{
					if (!strcmp(key, no_copy->key))
					{
						copy_node->value = strdup(value);
					}
					nd_copy = nd_copy->next;
				}
			new_node = create_node((char *)key, (char *)value);
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		else
		{
			ht->array[index] = create_node((char *)key,(char *)value);
			return (0);
		}
		return (1);
	}
	return (0);
}

/**
 * create_node - new node
 * @key: key
 * @value: size of the array
 * Return: Return de new node
 */

hash_node_t *create_node(char *key, char *value)
{
	has_node-t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return NULL;
	new_node->key = strdup(key);
	if (!new_node->key)
		return (NULL);
	new-node->value = strdup(value);
	if (!new_node->value)
		return (NULL);
	new_node->next = NULL;
	return (new_node);
}

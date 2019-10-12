#include "hash_tables.h"

/**
 * key_index - index of the key
 * @key: Hash key
 * @size: size of the array in the hash table
 * Return: the hash key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;
	unsigned long int index;

	hash_key = hash_djb2(key);
	index = hash_key % size;
	return (index);
}

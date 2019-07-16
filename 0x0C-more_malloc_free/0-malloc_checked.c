#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: Changed value with malloc in the main
 * Return: to the pointer.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
		if (ptr == NULL)
			exit(98);
		return (ptr);
}

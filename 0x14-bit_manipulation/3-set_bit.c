#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: value
 * @index: position
 * Return: -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = 0;

	if (index > 63)
		return (-1);
	val = 1 << index;
	*n = *n | val;
	return (1);
}

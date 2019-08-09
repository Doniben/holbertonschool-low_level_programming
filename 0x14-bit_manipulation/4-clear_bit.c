#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: value
 * @index: position of the bit to change
 * Return: -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 63)
		return (-1);
	val = 0;
	val = 1 << index;
	*n = *n & ~val;
	return (1);
}
